// Generated by gencpp from file dji_osdk_ros/MissionHpResetYaw.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONHPRESETYAW_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONHPRESETYAW_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/MissionHpResetYawRequest.h>
#include <dji_osdk_ros/MissionHpResetYawResponse.h>


namespace dji_osdk_ros
{

struct MissionHpResetYaw
{

typedef MissionHpResetYawRequest Request;
typedef MissionHpResetYawResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MissionHpResetYaw
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpResetYaw > {
  static const char* value()
  {
    return "f03b0bc279b265c40946c1011df83013";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpResetYaw&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::MissionHpResetYaw > {
  static const char* value()
  {
    return "dji_osdk_ros/MissionHpResetYaw";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpResetYaw&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpResetYawRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpResetYaw > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpResetYawRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionHpResetYaw >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpResetYawRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionHpResetYawRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionHpResetYaw > 
template<>
struct DataType< ::dji_osdk_ros::MissionHpResetYawRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionHpResetYaw >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpResetYawRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpResetYawResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpResetYaw > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpResetYawResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionHpResetYaw >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpResetYawResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionHpResetYawResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionHpResetYaw > 
template<>
struct DataType< ::dji_osdk_ros::MissionHpResetYawResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionHpResetYaw >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpResetYawResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONHPRESETYAW_H
