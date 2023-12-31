// Generated by gencpp from file dji_osdk_ros/UploadWaypointV2Action.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_UPLOADWAYPOINTV2ACTION_H
#define DJI_OSDK_ROS_MESSAGE_UPLOADWAYPOINTV2ACTION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/UploadWaypointV2ActionRequest.h>
#include <dji_osdk_ros/UploadWaypointV2ActionResponse.h>


namespace dji_osdk_ros
{

struct UploadWaypointV2Action
{

typedef UploadWaypointV2ActionRequest Request;
typedef UploadWaypointV2ActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UploadWaypointV2Action
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::UploadWaypointV2Action > {
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::dji_osdk_ros::UploadWaypointV2Action&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::UploadWaypointV2Action > {
  static const char* value()
  {
    return "dji_osdk_ros/UploadWaypointV2Action";
  }

  static const char* value(const ::dji_osdk_ros::UploadWaypointV2Action&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::UploadWaypointV2ActionRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::UploadWaypointV2Action > 
template<>
struct MD5Sum< ::dji_osdk_ros::UploadWaypointV2ActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::UploadWaypointV2Action >::value();
  }
  static const char* value(const ::dji_osdk_ros::UploadWaypointV2ActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::UploadWaypointV2ActionRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::UploadWaypointV2Action > 
template<>
struct DataType< ::dji_osdk_ros::UploadWaypointV2ActionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::UploadWaypointV2Action >::value();
  }
  static const char* value(const ::dji_osdk_ros::UploadWaypointV2ActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::UploadWaypointV2ActionResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::UploadWaypointV2Action > 
template<>
struct MD5Sum< ::dji_osdk_ros::UploadWaypointV2ActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::UploadWaypointV2Action >::value();
  }
  static const char* value(const ::dji_osdk_ros::UploadWaypointV2ActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::UploadWaypointV2ActionResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::UploadWaypointV2Action > 
template<>
struct DataType< ::dji_osdk_ros::UploadWaypointV2ActionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::UploadWaypointV2Action >::value();
  }
  static const char* value(const ::dji_osdk_ros::UploadWaypointV2ActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_UPLOADWAYPOINTV2ACTION_H
