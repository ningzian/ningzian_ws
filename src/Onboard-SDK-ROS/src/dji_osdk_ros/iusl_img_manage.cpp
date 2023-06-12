#include <dji_osdk_ros/iusl_img_manage.h>

// ===================================================================================
// ---------------------------  global param  ----------------------------------------
// ===================================================================================
// need manual setup
std::string data_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/obj.data";
std::string cfg_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/yolov4-tiny-obj.cfg";
std::string weight_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/yolov4-tiny-obj.weights";
int gim_max_speed = 8;
float gim_control_k = 0.015;

// global param
Detector detector(cfg_file, weight_file, 0);     // darknet detector
ros::Time now_time;   // 当前时间
int net_width;
int net_height;

// global state updated
cv::Mat cv_img_resize;
cv::Rect2d box(0,0,1,1);
float detect_prob = 0;
bool box_ok = false;
dji_osdk_ros::iuslDetectionResult detect_result;

bool rtk_enable_OK = false;

float gim_pitch_now = 0;
float gim_yaw_now = 0;
float gim_roll_now = 0;
float UAV_lat_now = 0;
float UAV_lon_now = 0;
float UAV_alt_now = 0;
float UAV_vx_now = 0;
float UAV_vy_now = 0;
float laser_dis_now = 0;


time_t time_now_c;  // for img file save
double image_time = 0;
int flight_state = 0;


// ==

void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
  image_time =  ros::Time::now().toSec();
  /* --- ROS img to CV img --- */
  cv::Mat cv_img = cv_bridge::toCvShare(msg, "bgr8")->image; 
  if (cv_img.empty()) return; 
  /* ---  cv img crop, using the center of height --- */
  int cv_img_width = cv_img.cols;
  int cv_img_height = cv_img.rows;
  int cv_expect_height = cv_img_width/16*9;
  if (cv_img_height > cv_expect_height)
  {
    cv::Rect myROI(0, (cv_img_height-cv_expect_height)/2, cv_img_width, cv_expect_height);
    cv_img = cv_img(myROI);
  }
  // cv img resize
  cv::Size network_size = cv::Size(net_width, net_height);
  if (cv_img.size() != network_size)
    cv::resize(cv_img, cv_img_resize, network_size);
  else
    cv_img_resize = cv_img.clone();
    
  // detect
  auto bboxt_lists = detector.detect(cv_img_resize,0.6);
  if (bboxt_lists.size() > 0 )
  { 
    box.x = bboxt_lists[0].x;
    box.y = bboxt_lists[0].y;
    box.width = bboxt_lists[0].w;
    box.height = bboxt_lists[0].h;
    detect_prob = bboxt_lists[0].prob; 
    box_ok = true;
  }
  else
  {
    box_ok = false;
  }
  // update pub msg (detect_result)
  if (box_ok)
  {
    detect_result.center_x = box.x + box.width/2;
    detect_result.center_y = box.y + box.height/2;
    detect_result.max_length = std::max(box.width, box.height);
    detect_result.pitch = gim_pitch_now;
    detect_result.yaw = gim_yaw_now;
    detect_result.roll = gim_roll_now;
    detect_result.UAV_lat = UAV_lat_now;
    detect_result.UAV_lon = UAV_lon_now;
    detect_result.UAV_alt = UAV_alt_now;
    detect_result.UAV_vx = UAV_vx_now;
    detect_result.UAV_vy = UAV_vy_now;
    detect_result.laser_dis = laser_dis_now;
    if (flight_state > 1.5)
    {
      /* --- put text --- */
      cv::Rect roi(box.x, box.y, box.width, box.height);
      cv::rectangle(cv_img_resize, roi, cv::Scalar(0,255,0), 2, 8, 0 ); 
      //putText(cv_img_resize, "MAV " + std::to_string(detect_prob), cv::Point2f(box.x, box.y - 14), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 255, 0), 2);
      /* --- write detect img--- */
      std::string time_path = std::to_string(image_time);
      std::string path_detect = "/home/dji/bigDisk/img_detect/" + time_path + ".png";
      cv::imwrite(path_detect, cv_img_resize); 
    }
  }
}

void rtkStateCallback(const std_msgs::UInt8& msg)   // rtk State
{
  if (msg.data == 1)
  {
    rtk_enable_OK = true;
  }
  else
  {
    rtk_enable_OK = false;
  }
}

void rtkPosCallback(const sensor_msgs::NavSatFix& msg)  //rtk pos
{
  UAV_lat_now = msg.latitude;
  UAV_lon_now = msg.longitude;
  UAV_alt_now = msg.altitude;
}

void rtkVelCallback(const geometry_msgs::Vector3Stamped & msg)
{
  UAV_vx_now = msg.vector.y;
  UAV_vy_now = msg.vector.x;
}

void gimbalAngleCallback(const geometry_msgs::Vector3Stamped & msg)
{
  gim_pitch_now = msg.vector.x;
  gim_yaw_now = msg.vector.z;
  gim_roll_now = msg.vector.y;
}

void mobileCallback(const dji_osdk_ros::MobileData & msg)
{
  int data_length = sizeof(msg.data)/sizeof(msg.data[0]); 
  if (data_length != 0)
  {
    laser_dis_now = msg.data[0]*256 + msg.data[1] + (float)(msg.data[2]*256 + msg.data[3])/100;
    //ROS_INFO("Receive Data from MSDK and length of data is %02d.", data_length);
  }
  
}

void flightStateCallback(const std_msgs::UInt8& msg)
{
  flight_state = msg.data;
}

int main(int argc, char **argv)
{
  /* ---   init  --- */ 
  ros::init(argc, argv, "iusl_img_manage");  // --- ros init
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);
  ros::Rate rate(50);
  //cv::namedWindow("view");
  now_time=ros::Time::now();                 // --- for calculate fps
  net_width = detector.get_net_width();      // --- detecotor
  net_height = detector.get_net_height();
  
  /* ---   start main camera stream  --- */ 
  ros::service::waitForService("/setup_camera_stream");
  ros::ServiceClient set_camera_client = nh.serviceClient<dji_osdk_ros::SetupCameraStream>("/setup_camera_stream");
  dji_osdk_ros::SetupCameraStream set_camera_srv;
  set_camera_srv.request.cameraType = 1;
  set_camera_srv.request.start = 1;
  set_camera_client.call(set_camera_srv);
  //ROS_INFO("start main camera ======================================================");

  /* ---   start RTK  --- */ 
  //ros::service::waitForService("iusl/set_rtk_enable");
  //ros::ServiceClient set_RTK_client = nh.serviceClient<dji_osdk_ros::iuslSetRtkEnable>("iusl/set_rtk_enable");
  //dji_osdk_ros::SetupCameraStream set_rtk_srv;
  //set_RTK_client.call(set_rtk_srv);
  


  /* ---   publisher  --- */  
  ros::Publisher DetectionResultPublisher = nh.advertise<dji_osdk_ros::iuslDetectionResult>("/iusl_ros/DetectionResult", 1);
  ros::Publisher GimCmdPublisher = nh.advertise<dji_osdk_ros::iuslGimbalCmd>("/iusl_ros/gimbal_cmd", 5);

  /* ---   subscriber msg  --- */
  image_transport::Subscriber sub_img = it.subscribe("iusl/main_camera_images", 1, imageCallback);
  ros::Subscriber sub_rtk_state = nh.subscribe("dji_osdk_ros/rtk_connection_status", 5, rtkStateCallback);
  ros::Subscriber sub_rtk_pos = nh.subscribe("dji_osdk_ros/rtk_position", 5, rtkPosCallback);
  ros::Subscriber sub_rtk_vel = nh.subscribe("dji_osdk_ros/rtk_velocity", 5, rtkVelCallback);
  ros::Subscriber sub_gim_angle = nh.subscribe("dji_osdk_ros/gimbal_angle", 5, gimbalAngleCallback);
  ros::Subscriber sub_mobile = nh.subscribe("dji_osdk_ros/from_mobile_data", 5, mobileCallback);  //laser message
  ros::Subscriber sub_flight_state = nh.subscribe("dji_osdk_ros/flight_status", 5, flightStateCallback);

  /* ---   while --- */
 
  while(ros::ok())
  { 
    if (!cv_img_resize.empty() && flight_state > 1.5)
    {
      /* ---   gimbal cmd; fps; pub  --- */
      if (box_ok)
      { 
        box_ok = false;
        

        /* ---   gimbal cmd  --- */
        dji_osdk_ros::iuslGimbalCmd GimCmd_data;
        int dx = net_width/2 - detect_result.center_x;
        int dy = net_height/2 - detect_result.center_y;
      
        GimCmd_data.time = std::max(dx, dy)/800 + 1;
        float gim_speed_q = dy * gim_control_k;
        float gim_speed_r = - dx * gim_control_k;
        if (gim_speed_q > gim_max_speed) {gim_speed_q = gim_max_speed;}
        else if (gim_speed_q < -gim_max_speed) {gim_speed_q = -gim_max_speed;}
        if (gim_speed_r > gim_max_speed) {gim_speed_r = gim_max_speed;}
        else if (gim_speed_r < -gim_max_speed) {gim_speed_r = -gim_max_speed;}
        GimCmd_data.pitch = gim_speed_q + gim_pitch_now;
        GimCmd_data.yaw = gim_speed_r + gim_yaw_now;
        GimCmd_data.roll = 0;   
        GimCmdPublisher.publish(GimCmd_data);
        /* ---  fps calculate --- */
        ros::Time now_tem = ros::Time::now();
        ros::Duration dt = now_tem - now_time;
        //std::cout << 1/dt.toSec() << std::endl;
        now_time = now_tem;
        /* ---  pub detect result --- */
        DetectionResultPublisher.publish(detect_result); 
      }
      //cv::imshow("view", cv_img_resize);
      //cv::waitKey(10);
    }
    /* ---  spin --- */
    ros::spinOnce();
    rate.sleep();
  } 
  //cv::destroyWindow("view");
  return 0;
}





