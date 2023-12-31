// Generated by gencpp from file dji_osdk_ros/MissionHpUpdateYawRate.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONHPUPDATEYAWRATE_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONHPUPDATEYAWRATE_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/MissionHpUpdateYawRateRequest.h>
#include <dji_osdk_ros/MissionHpUpdateYawRateResponse.h>


namespace dji_osdk_ros
{

struct MissionHpUpdateYawRate
{

typedef MissionHpUpdateYawRateRequest Request;
typedef MissionHpUpdateYawRateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MissionHpUpdateYawRate
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRate > {
  static const char* value()
  {
    return "e4b46552667899a74d58ef421a1fe415";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRate&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::MissionHpUpdateYawRate > {
  static const char* value()
  {
    return "dji_osdk_ros/MissionHpUpdateYawRate";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRate&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRateRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRate > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRate >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionHpUpdateYawRateRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionHpUpdateYawRate > 
template<>
struct DataType< ::dji_osdk_ros::MissionHpUpdateYawRateRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionHpUpdateYawRate >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRateResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRate > 
template<>
struct MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MissionHpUpdateYawRate >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MissionHpUpdateYawRateResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::MissionHpUpdateYawRate > 
template<>
struct DataType< ::dji_osdk_ros::MissionHpUpdateYawRateResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MissionHpUpdateYawRate >::value();
  }
  static const char* value(const ::dji_osdk_ros::MissionHpUpdateYawRateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONHPUPDATEYAWRATE_H
