/*
功能：
  - 接收vehicle_node的图像，做视觉目标检测，将检测结果和无人机自己的各种状态打包，发送给估计节点
  - 根据检测结果，做云台跟踪控制
注意：目标检测的结果msg数据中已经包含了时间戳
*/

#include <dji_osdk_ros/iusl_img_manage.h>

/* ==================================================================================
-----------------------------  global param   -------------------------------------
===================================================================================*/
// need manual setup
std::string data_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/obj.data";
std::string cfg_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/yolov4-tiny-obj.cfg";
std::string weight_file = "/home/dji/ningzian_ws/src/Onboard-SDK-ROS/script/darknet_data/2-1_2-2.weights";
int gim_max_speed = 7;       // 8
float gim_control_k = 0.035;   // 0.015

// global param
Detector detector(cfg_file, weight_file, 0);     // darknet detector
ros::Time now_time;   // 当前时间
int net_width;
int net_height;

// global state updated
cv::Mat cv_img_resize;            // 需要处理的照片
cv::Rect2d box(0,0,1,1);          // 检测框
float detect_probability = 0;     // 检测到的概率
bool box_ok = false;              // 当前是否检测到
dji_osdk_ros::iuslDetectionResult detect_result;        // 检测结果

// 获取图片时的无人机和相机状态
double UAV_lat_now = 0;     // 无人机当前的经纬度和海拔
double UAV_lon_now = 0;
float UAV_alt_now = 0;
float UAV_roll_now = 0;     // 无人机当前的姿态
float UAV_pitch_now = 0;
float UAV_yaw_now = 0;
float cam_pitch_now = 0;    // 相机的姿态
float cam_yaw_now = 0;
float cam_roll_now = 0;

float laser_dis_now = 0;   // 激光测距距离

double image_time = 0;      // 获取图片的时间


/* ===================================================================================
-----------------------------  receive callback  ------------------------------------
===================================================================================*/
// 收到图像后：yolo 检测、
void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
  image_time =  ros::Time::now().toSec();
  // ROS img convert to CV img 
  cv::Mat cv_img = cv_bridge::toCvShare(msg, "bgr8")->image; 
  if (cv_img.empty()) return; 
  // cv img crop, using the center of height 
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
    
  // yolo detect
  auto bboxt_lists = detector.detect(cv_img_resize,0.6);
  if (bboxt_lists.size() > 0 )
  { 
    box.x = bboxt_lists[0].x;
    box.y = bboxt_lists[0].y;
    box.width = bboxt_lists[0].w;
    box.height = bboxt_lists[0].h;
    detect_probability = bboxt_lists[0].prob; 
    box_ok = true;
  }
  else
  {
    box_ok = false;
  }
  // update pub msg (detect_result)
  if (box_ok)
  {
    // 检测框的结果赋值
    detect_result.center_x = box.x + box.width/2;
    detect_result.center_y = box.y + box.height/2;
    detect_result.box_width = box.width;
    detect_result.box_height = box.height;
    detect_result.max_length = std::max(box.width, box.height);
    // 获取到图片时的状态赋值
    detect_result.time = image_time;          // 时间戳
    detect_result.UAV_lat = UAV_lat_now;      // 无人机经纬度和海拔
    detect_result.UAV_lon = UAV_lon_now;
    detect_result.UAV_alt = UAV_alt_now;
    detect_result.UAV_roll = UAV_roll_now;    // 无人机姿态
    detect_result.UAV_pitch = UAV_pitch_now;
    detect_result.UAV_yaw = UAV_yaw_now;
    detect_result.cam_roll = cam_roll_now;     // 相机机姿态
    detect_result.cam_pitch = cam_pitch_now;
    detect_result.cam_yaw = cam_yaw_now;
    detect_result.laser_dis = laser_dis_now;              // 激光测距
    /*if (flight_state > 1.5)
    {
      // put text 
      cv::Rect roi(box.x, box.y, box.width, box.height);
      cv::rectangle(cv_img_resize, roi, cv::Scalar(0,255,0), 2, 8, 0 ); 
      //putText(cv_img_resize, "MAV " + std::to_string(detect_probability), cv::Point2f(box.x, box.y - 14), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 255, 0), 2);
      // write detect img
      std::string time_path = std::to_string(image_time);
      std::string path_detect = "/home/dji/bigDisk/img_detect/" + time_path + ".png";
      cv::imwrite(path_detect, cv_img_resize); 
    } */
  }
}

void rtkPosCallback(const sensor_msgs::NavSatFix& msg)  //rtk pos
{
  UAV_lat_now = msg.latitude;
  UAV_lon_now = msg.longitude;
  UAV_alt_now = msg.altitude;
}

void callback_recive_rtkYaw(const std_msgs::Int16& msg)
{
  UAV_yaw_now = static_cast<float>(msg.data) + 90.f;
  if (UAV_yaw_now >= 180)
  {UAV_yaw_now -= 360;}
}

void gimbalAngleCallback(const geometry_msgs::Vector3Stamped & msg)
{
  cam_pitch_now = msg.vector.x;   // pitch
  cam_yaw_now = msg.vector.z;     // yaw
  cam_roll_now = msg.vector.y;    // roll

}

void mobileCallback(const dji_osdk_ros::MobileData & msg)    // 接收PSDK的激光测距数据
{
  int data_length = sizeof(msg.data)/sizeof(msg.data[0]); 
  if (data_length != 0)
  {
    laser_dis_now = (float)(msg.data[0])*256 + (float)msg.data[1] + (float)((float)(msg.data[2])*256 + msg.data[3])/100.f;
    //ROS_INFO("Receive Data from MSDK and length of data is %02d.", data_length);
  }
  
}

void callback_UAV_attitude(const geometry_msgs::QuaternionStamped& msg)
{
  // 读取无人机四元数，并转换为欧拉角 TODO! need test!
  float qx = msg.quaternion.x;
  float qy = msg.quaternion.y;
  float qz = msg.quaternion.z;
  float qw = msg.quaternion.w;
  Eigen::Quaterniond q;
    q.x() = qx;
    q.y() = qy;
    q.z() = qz;
    q.w() = qw;
  Eigen::Vector3d euler = q.toRotationMatrix().eulerAngles(2, 1, 0);
  UAV_roll_now = euler(2) * 180 / PI;  
  if (UAV_roll_now >= 0)
  {
    UAV_roll_now -= 180;
  }
  else
  {
    UAV_roll_now += 180;
  }

  UAV_pitch_now = euler(1) * 180 / PI;
  if (UAV_pitch_now >= 0)
  {
    UAV_pitch_now -= 180;
  }
  else
  {
    UAV_pitch_now += 180;
  }
  //printf("%.2f\n", UAV_pitch_now);
  //printf("%.2f\n", UAV_pitch_now);

}


/* ===================================================================================
-------------------------------  node main  ------------------------------------------
===================================================================================*/
int main(int argc, char **argv)
{
  // node init  
  ros::init(argc, argv, "iusl_img_manage");  // ros init
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);
  ros::Rate rate(50);
  //cv::namedWindow("view");
  net_width = detector.get_net_width();      // detecotor
  net_height = detector.get_net_height();

  // delay time
  //ros::Duration(1).sleep();
  
  // start main camera stream 
  ros::service::waitForService("/setup_camera_stream");
  ros::ServiceClient set_camera_client = nh.serviceClient<dji_osdk_ros::SetupCameraStream>("/setup_camera_stream");
  dji_osdk_ros::SetupCameraStream set_camera_srv;
  set_camera_srv.request.cameraType = 1;
  set_camera_srv.request.start = 1;
  set_camera_client.call(set_camera_srv);
  //ROS_INFO("start main camera ");

  // start RTK
  //ros::service::waitForService("iusl/set_rtk_enable");
  //ros::ServiceClient set_RTK_client = nh.serviceClient<dji_osdk_ros::iuslSetRtkEnable>("iusl/set_rtk_enable");
  //dji_osdk_ros::SetupCameraStream set_rtk_srv;
  //set_RTK_client.call(set_rtk_srv);

  // subscriber msg
 

  ros::Subscriber sub_rtk_pos = nh.subscribe("dji_osdk_ros/rtk_position", 5, rtkPosCallback);
  ros::Subscriber sub_rtk_yaw = nh.subscribe("dji_osdk_ros/rtk_yaw", 5, callback_recive_rtkYaw);  // Int16
  ros::Subscriber sub_UAV_attitude = nh.subscribe("dji_osdk_ros/attitude", 5, callback_UAV_attitude);
  ros::Subscriber sub_gim_angle = nh.subscribe("dji_osdk_ros/gimbal_angle", 5, gimbalAngleCallback);

  ros::Subscriber sub_mobile = nh.subscribe("dji_osdk_ros/from_mobile_data", 5, mobileCallback);  //laser message
  image_transport::Subscriber sub_img = it.subscribe("iusl/main_camera_images", 1, imageCallback);


  // publisher 
  ros::Publisher DetectionResultPublisher = nh.advertise<dji_osdk_ros::iuslDetectionResult>("/iusl_ros/DetectionResult", 1);
  ros::Publisher GimCmdPublisher = nh.advertise<dji_osdk_ros::iuslGimbalCmd>("/iusl_ros/gimbal_cmd", 2);
  ros::Publisher mobileBoxPublisher = nh.advertise<std_msgs::Int32MultiArray>("/iusl_ros/mobile_box", 2);

  
  //  while
 
  while(ros::ok())
  { 
    if (!cv_img_resize.empty())
    {
      // gimbal cmd; fps; pub  
      if (box_ok)
      { 
        box_ok = false;
        
        // gimbal cmd
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
        GimCmd_data.pitch = gim_speed_q + cam_pitch_now;
        GimCmd_data.yaw = gim_speed_r + cam_yaw_now;
        GimCmd_data.roll = 0;   
        GimCmdPublisher.publish(GimCmd_data);    // 发送 ros_msg 云台控制指令
        //  pub detect result
        DetectionResultPublisher.publish(detect_result);     // 发送 ros_msg 目标检测结果
        // pub mobile box  发送给PSDK的数据
        std_msgs::Int32MultiArray mobile_box;
        int x_min = box.x*1920/1536;
        int x_max = (box.x + box.width)*1920/1536;
        int y_min = box.y*1080/864;
        int y_max = (box.y + box.height)*1080/864;
        mobile_box.data.push_back(x_min);
	      mobile_box.data.push_back(y_min);
	      mobile_box.data.push_back(x_max);
	      mobile_box.data.push_back(y_max);
        mobileBoxPublisher.publish(mobile_box);
      }  
      //cv::imshow("view", cv_img_resize);
      //cv::waitKey(10);
    }
    /* ---  spin --- */
    /*
    ROS_INFO("UAV_roll =%.2f", UAV_roll_now);
    ROS_INFO("UAV_pitch =%.2f", UAV_pitch_now);
    ROS_INFO("UAV_yaw =%.2f", UAV_yaw_now);
    ROS_INFO("cam_x =%.2f", cam_x_now);
    ROS_INFO("cam_y =%.2f", cam_y_now);
    ROS_INFO("cam_z =%.2f", cam_z_now);
    ROS_INFO("laser_dis = %.2f",laser_dis_now);*/
    ros::spinOnce();
    rate.sleep();
  } 
  //cv::destroyWindow("view");
  return 0;
}


