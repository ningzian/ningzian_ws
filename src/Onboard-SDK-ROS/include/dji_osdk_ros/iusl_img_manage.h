#ifndef __IUSL_IMG_MANAGE_HH__
#define __IUSL_IMG_MANAGE_HH__

#include <ros/ros.h>
#include <ros/spinner.h>
#include <ros/callback_queue.h>
#include <image_transport/image_transport.h>   //ros img transport(fast)
#include <opencv2/tracking.hpp>           // KCF tracking
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>           // ros img to cv mat
#include <dji_osdk_ros/yolo_v2_class.hpp>  // darknet api
#include <string>
#include <boost/thread.hpp>
#include <algorithm>
#include <time.h>
#include <iostream>

// msg
#include <dji_osdk_ros/iuslDetectionResult.h>// detection result (including box, gim state, UAV state)
#include <geometry_msgs/Vector3Stamped.h>    // gimbal state,  UAV RTK velocity
#include <sensor_msgs/NavSatFix.h>           // UAV RTK position
#include <std_msgs/UInt8.h>                  // RTK state, flight state
#include <dji_osdk_ros/MobileData.h>         // mobile data
#include <dji_osdk_ros/iuslGimbalCmd.h>      // gimbal control
#include <std_msgs/Int32MultiArray.h>        // mobile box

// srv
#include <dji_osdk_ros/SetupCameraStream.h>
#include <dji_osdk_ros/iuslSetRtkEnable.h>

// iusl msg and srv







void imageCallback(const sensor_msgs::ImageConstPtr& msg);  // read img detect call back
void rtkStateCallback(const std_msgs::UInt8& msg);  //read rtk enable state
void rtkPosCallback(const sensor_msgs::NavSatFix& msg);  //read rtk pos
void rtkVelCallback(const geometry_msgs::Vector3Stamped & msg);  //read rtk vel
void gimbalAngleCallback(const geometry_msgs::Vector3Stamped & msg);  //read gimbal angle
void mobileCallback(const dji_osdk_ros::MobileData & msg); 
void flightStateCallback(const std_msgs::UInt8& msg);  //read flight state



#endif // __IUSL_IMG_MANAGE_HH__

