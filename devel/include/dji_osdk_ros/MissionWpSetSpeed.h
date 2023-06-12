// Generated by gencpp from file dji_osdk_ros/MissionWpSetSpeed.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONWPSETSPEED_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONWPSETSPEED_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/MissionWpSetSpeedRequest.h>
#include <dji_osdk_ros/MissionWpSetSpeedResponse.h>


namespace dji_osdk_ros
{

struct MissionWpSetSpeed
{

typedef MissionWpSetSpeedRequest Request;
typedef MissionWpSetSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MissionWpSetSpeed
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpSetSpeed > {
  static const char* value()
  {
    return "b087da1f6984d35b6029aa78841b05a6";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeed&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::MissionWpSetSpeed > {
  static const char* value()
  {
    return "dji_osdk_ros/MissionWpSetSpeed";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeed&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpSetSpeedRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpSetSpeed > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpSetSpeedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionWpSetSpeed >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionWpSetSpeedRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionWpSetSpeed > 
template<>
struct DataType< ::dji_osdk_ros::MissionWpSetSpeedRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionWpSetSpeed >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpSetSpeedResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionWpSetSpeed > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionWpSetSpeedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionWpSetSpeed >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionWpSetSpeedResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionWpSetSpeed > 
template<>
struct DataType< ::dji_osdk_ros::MissionWpSetSpeedResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionWpSetSpeed >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionWpSetSpeedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONWPSETSPEED_H
