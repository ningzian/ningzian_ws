// Generated by gencpp from file dji_osdk_ros/FlightTaskControl.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_FLIGHTTASKCONTROL_H
#define DJI_OSDK_ROS_MESSAGE_FLIGHTTASKCONTROL_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/FlightTaskControlRequest.h>
#include <dji_osdk_ros/FlightTaskControlResponse.h>


namespace dji_osdk_ros
{

struct FlightTaskControl
{

typedef FlightTaskControlRequest Request;
typedef FlightTaskControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FlightTaskControl
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::FlightTaskControl > {
  static const char* value()
  {
    return "6c2d7ee9a1feaa8383a6f0a485b64e2a";
  }

  static const char* value(const ::dji_osdk_ros::FlightTaskControl&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::FlightTaskControl > {
  static const char* value()
  {
    return "dji_osdk_ros/FlightTaskControl";
  }

  static const char* value(const ::dji_osdk_ros::FlightTaskControl&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::FlightTaskControlRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::FlightTaskControl > 
template<>
struct MD5Sum< ::dji_osdk_ros::FlightTaskControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::FlightTaskControl >::value();
  }
  static const char* value(const ::dji_osdk_ros::FlightTaskControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::FlightTaskControlRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::FlightTaskControl > 
template<>
struct DataType< ::dji_osdk_ros::FlightTaskControlRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::FlightTaskControl >::value();
  }
  static const char* value(const ::dji_osdk_ros::FlightTaskControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::FlightTaskControlResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::FlightTaskControl > 
template<>
struct MD5Sum< ::dji_osdk_ros::FlightTaskControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::FlightTaskControl >::value();
  }
  static const char* value(const ::dji_osdk_ros::FlightTaskControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::FlightTaskControlResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::FlightTaskControl > 
template<>
struct DataType< ::dji_osdk_ros::FlightTaskControlResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::FlightTaskControl >::value();
  }
  static const char* value(const ::dji_osdk_ros::FlightTaskControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_FLIGHTTASKCONTROL_H