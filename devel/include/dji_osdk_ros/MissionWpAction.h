// Generated by gencpp from file dji_osdk_ros/MissionWpAction.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONWPACTION_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONWPACTION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/MissionWpActionRequest.h>
#include <dji_osdk_ros/MissionWpActionResponse.h>


namespace dji_osdk_ros
{

struct MissionWpAction
{

typedef MissionWpActionRequest Request;
typedef MissionWpActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MissionWpAction
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpAction > {
  static const char* value()
  {
    return "067ec5f79e77e0b4c0121e09e733b483";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpAction&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::MissionWpAction > {
  static const char* value()
  {
    return "dji_osdk_ros/MissionWpAction";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpAction&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpActionRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpAction > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionWpAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionWpActionRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionWpAction > 
template<>
struct DataType< ::dji_osdk_ros::MissionWpActionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionWpAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpActionResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpAction > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionWpAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionWpActionResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionWpAction > 
template<>
struct DataType< ::dji_osdk_ros::MissionWpActionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionWpAction >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONWPACTION_H
