// Generated by gencpp from file dji_osdk_ros/CameraSetZoomPara.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERASETZOOMPARA_H
#define DJI_OSDK_ROS_MESSAGE_CAMERASETZOOMPARA_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/CameraSetZoomParaRequest.h>
#include <dji_osdk_ros/CameraSetZoomParaResponse.h>


namespace dji_osdk_ros
{

struct CameraSetZoomPara
{

typedef CameraSetZoomParaRequest Request;
typedef CameraSetZoomParaResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraSetZoomPara
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::CameraSetZoomPara > {
  static const char* value()
  {
    return "6c6cdab10079fad15384840dbc9835bd";
  }

  static const char* value(const ::dji_osdk_ros::CameraSetZoomPara&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::CameraSetZoomPara > {
  static const char* value()
  {
    return "dji_osdk_ros/CameraSetZoomPara";
  }

  static const char* value(const ::dji_osdk_ros::CameraSetZoomPara&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::CameraSetZoomParaRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::CameraSetZoomPara > 
template<>
struct MD5Sum< ::dji_osdk_ros::CameraSetZoomParaRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraSetZoomPara >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraSetZoomParaRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraSetZoomParaRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::CameraSetZoomPara > 
template<>
struct DataType< ::dji_osdk_ros::CameraSetZoomParaRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraSetZoomPara >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraSetZoomParaRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::CameraSetZoomParaResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::CameraSetZoomPara > 
template<>
struct MD5Sum< ::dji_osdk_ros::CameraSetZoomParaResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::CameraSetZoomPara >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraSetZoomParaResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::CameraSetZoomParaResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::CameraSetZoomPara > 
template<>
struct DataType< ::dji_osdk_ros::CameraSetZoomParaResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::CameraSetZoomPara >::value();
  }
  static const char* value(const ::dji_osdk_ros::CameraSetZoomParaResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERASETZOOMPARA_H
