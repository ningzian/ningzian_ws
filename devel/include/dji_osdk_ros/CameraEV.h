// Generated by gencpp from file dji_osdk_ros/CameraEV.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERAEV_H
#define DJI_OSDK_ROS_MESSAGE_CAMERAEV_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/CameraEVRequest.h>
#include <dji_osdk_ros/CameraEVResponse.h>


namespace dji_osdk_ros
{

struct CameraEV
{

typedef CameraEVRequest Request;
typedef CameraEVResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraEV
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::CameraEV > {
  static const char* value()
  {
    return "8afce101181274778612bcace32344e1";
  }

  static const char* value(const ::dji_osdk_ros::CameraEV&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::CameraEV > {
  static const char* value()
  {
    return "dji_osdk_ros/CameraEV";
  }

  static const char* value(const ::dji_osdk_ros::CameraEV&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::CameraEVRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::CameraEV > 
template<>
struct MD5Sum< ::dji_osdk_ros::CameraEVRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraEV >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraEVRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraEVRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::CameraEV > 
template<>
struct DataType< ::dji_osdk_ros::CameraEVRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraEV >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraEVRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::CameraEVResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::CameraEV > 
template<>
struct MD5Sum< ::dji_osdk_ros::CameraEVResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraEV >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraEVResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraEVResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::CameraEV > 
template<>
struct DataType< ::dji_osdk_ros::CameraEVResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraEV >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraEVResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERAEV_H
