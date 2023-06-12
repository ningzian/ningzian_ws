// Generated by gencpp from file dji_osdk_ros/ResumeWaypointV2Mission.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_RESUMEWAYPOINTV2MISSION_H
#define DJI_OSDK_ROS_MESSAGE_RESUMEWAYPOINTV2MISSION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/ResumeWaypointV2MissionRequest.h>
#include <dji_osdk_ros/ResumeWaypointV2MissionResponse.h>


namespace dji_osdk_ros
{

struct ResumeWaypointV2Mission
{

typedef ResumeWaypointV2MissionRequest Request;
typedef ResumeWaypointV2MissionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ResumeWaypointV2Mission
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::ResumeWaypointV2Mission > {
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2Mission&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::ResumeWaypointV2Mission > {
  static const char* value()
  {
    return "dji_osdk_ros/ResumeWaypointV2Mission";
  }

  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2Mission&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::ResumeWaypointV2MissionRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::ResumeWaypointV2Mission > 
template<>
struct MD5Sum< ::dji_osdk_ros::ResumeWaypointV2MissionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::ResumeWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2MissionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::ResumeWaypointV2MissionRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::ResumeWaypointV2Mission > 
template<>
struct DataType< ::dji_osdk_ros::ResumeWaypointV2MissionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::ResumeWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2MissionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::ResumeWaypointV2MissionResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::ResumeWaypointV2Mission > 
template<>
struct MD5Sum< ::dji_osdk_ros::ResumeWaypointV2MissionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::ResumeWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2MissionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::ResumeWaypointV2MissionResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::ResumeWaypointV2Mission > 
template<>
struct DataType< ::dji_osdk_ros::ResumeWaypointV2MissionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::ResumeWaypointV2Mission >::value();
  }
  static const char* value(const ::dji_osdk_ros::ResumeWaypointV2MissionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_RESUMEWAYPOINTV2MISSION_H
