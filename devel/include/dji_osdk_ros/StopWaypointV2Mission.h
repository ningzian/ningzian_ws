// Generated by gencpp from file dji_osdk_ros/StopWaypointV2Mission.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_STOPWAYPOINTV2MISSION_H
#define DJI_OSDK_ROS_MESSAGE_STOPWAYPOINTV2MISSION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/StopWaypointV2MissionRequest.h>
#include <dji_osdk_ros/StopWaypointV2MissionResponse.h>


namespace dji_osdk_ros
{

struct StopWaypointV2Mission
{

typedef StopWaypointV2MissionRequest Request;
typedef StopWaypointV2MissionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopWaypointV2Mission
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::StopWaypointV2Mission > {
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::dji_osdk_ros::StopWaypointV2Mission&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::StopWaypointV2Mission > {
  static const char* value()
  {
    return "dji_osdk_ros/StopWaypointV2Mission";
  }

  static const char* value(const ::dji_osdk_ros::StopWaypointV2Mission&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::StopWaypointV2MissionRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::StopWaypointV2Mission > 
template<>
struct MD5Sum< ::dji_osdk_ros::StopWaypointV2MissionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::StopWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::StopWaypointV2MissionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::StopWaypointV2MissionRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::StopWaypointV2Mission > 
template<>
struct DataType< ::dji_osdk_ros::StopWaypointV2MissionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::StopWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::StopWaypointV2MissionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::StopWaypointV2MissionResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::StopWaypointV2Mission > 
template<>
struct MD5Sum< ::dji_osdk_ros::StopWaypointV2MissionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::StopWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::StopWaypointV2MissionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::StopWaypointV2MissionResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::StopWaypointV2Mission > 
template<>
struct DataType< ::dji_osdk_ros::StopWaypointV2MissionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::StopWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::StopWaypointV2MissionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_STOPWAYPOINTV2MISSION_H
