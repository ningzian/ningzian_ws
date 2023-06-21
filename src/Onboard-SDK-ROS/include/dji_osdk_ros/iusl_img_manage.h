#ifndef __IUSL_IMG_MANAGE_HH__
#define __IUSL_IMG_MANAGE_HH__

#include <ros/ros.h>
#include <ros/spinner.h>
#include <ros/callback_queue.h>
#include <ros/time.h>
#include <ros/duration.h>
#include <image_transport/image_transport.h>   //ros img transport(fast)
#include <opencv2/tracking.hpp>           // KCF tracking
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>           // ros img to cv mat
#include <dji_osdk_ros/yolo_v2_class.hpp>  // darknet api
#include <string>
#include <boost/thread.hpp>
#include <algorithm>
#include <iostream>

#include <eigen3/Eigen/Dense>     // eigen， 用于四元数到欧拉角的转换
#include <eigen3/Eigen/Geometry>
#include <eigen3/Eigen/StdVector>
#include <eigen3/Eigen/Core>
#include <math.h>

// msg
#include <dji_osdk_ros/iuslDetectionResult.h>// detection result (including box, gim state, UAV state)
#include <geometry_msgs/Vector3Stamped.h>    // gimbal state,  UAV RTK velocity
#include <sensor_msgs/NavSatFix.h>           // UAV RTK position
#include <geometry_msgs/QuaternionStamped.h> // 无人机姿态信息
#include <geometry_msgs/Quaternion.h>
#include <std_msgs/UInt8.h>                  // RTK state, flight state
#include <std_msgs/UInt16.h> 
//#include <std_msgs/Float64.h>
#include <dji_osdk_ros/MobileData.h>         // mobile data
#include <dji_osdk_ros/iuslGimbalCmd.h>      // gimbal control
#include <std_msgs/Int32MultiArray.h>        // mobile box

// srv
#include <dji_osdk_ros/SetupCameraStream.h>
#include <dji_osdk_ros/iuslSetRtkEnable.h>

// iusl msg and srv


#define  PI 3.141592653

void rtkPosCallback(const sensor_msgs::NavSatFix& msg);  //read rtk pos
void callback_recive_rtkYaw(const std_msgs::UInt16& msg);  //读取无人机的RTKyaw
void callback_UAV_attitude(const geometry_msgs::QuaternionStamped& msg);  //无人机自身的姿态
void gimbalAngleCallback(const geometry_msgs::Vector3Stamped & msg);  //read gimbal angle

void mobileCallback(const dji_osdk_ros::MobileData & msg); 
void imageCallback(const sensor_msgs::ImageConstPtr& msg);  // read img detect call back



#endif // __IUSL_IMG_MANAGE_HH__

