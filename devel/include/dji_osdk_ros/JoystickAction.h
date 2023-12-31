// Generated by gencpp from file dji_osdk_ros/JoystickAction.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_JOYSTICKACTION_H
#define DJI_OSDK_ROS_MESSAGE_JOYSTICKACTION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/JoystickActionRequest.h>
#include <dji_osdk_ros/JoystickActionResponse.h>


namespace dji_osdk_ros
{

struct JoystickAction
{

typedef JoystickActionRequest Request;
typedef JoystickActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct JoystickAction
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::JoystickAction > {
  static const char* value()
  {
    return "9edeea71222489b7e9f0a37b50217781";
  }

  static const char* value(const ::dji_osdk_ros::JoystickAction&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::JoystickAction > {
  static const char* value()
  {
    return "dji_osdk_ros/JoystickAction";
  }

  static const char* value(const ::dji_osdk_ros::JoystickAction&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::JoystickActionRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::JoystickAction > 
template<>
struct MD5Sum< ::dji_osdk_ros::JoystickActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::JoystickAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::JoystickActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::JoystickActionRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::JoystickAction > 
template<>
struct DataType< ::dji_osdk_ros::JoystickActionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::JoystickAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::JoystickActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::JoystickActionResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::JoystickAction > 
template<>
struct MD5Sum< ::dji_osdk_ros::JoystickActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::JoystickAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::JoystickActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::JoystickActionResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::JoystickAction > 
template<>
struct DataType< ::dji_osdk_ros::JoystickActionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::JoystickAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::JoystickActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_JOYSTICKACTION_H
