// Generated by gencpp from file dji_osdk_ros/GetDroneType.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GETDRONETYPE_H
#define DJI_OSDK_ROS_MESSAGE_GETDRONETYPE_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/GetDroneTypeRequest.h>
#include <dji_osdk_ros/GetDroneTypeResponse.h>


namespace dji_osdk_ros
{

struct GetDroneType
{

typedef GetDroneTypeRequest Request;
typedef GetDroneTypeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDroneType
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::GetDroneType > {
  static const char* value()
  {
    return "87cc5c5bc9c0355af48cf3dac961c235";
  }

  static const char* value(const ::dji_osdk_ros::GetDroneType&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::GetDroneType > {
  static const char* value()
  {
    return "dji_osdk_ros/GetDroneType";
  }

  static const char* value(const ::dji_osdk_ros::GetDroneType&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::GetDroneTypeRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::GetDroneType > 
template<>
struct MD5Sum< ::dji_osdk_ros::GetDroneTypeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::GetDroneType >::value();
  }
  static const char* value(const ::dji_osdk_ros::GetDroneTypeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::GetDroneTypeRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::GetDroneType > 
template<>
struct DataType< ::dji_osdk_ros::GetDroneTypeRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::GetDroneType >::value();
  }
  static const char* value(const ::dji_osdk_ros::GetDroneTypeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::GetDroneTypeResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::GetDroneType > 
template<>
struct MD5Sum< ::dji_osdk_ros::GetDroneTypeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::GetDroneType >::value();
  }
  static const char* value(const ::dji_osdk_ros::GetDroneTypeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::GetDroneTypeResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::GetDroneType > 
template<>
struct DataType< ::dji_osdk_ros::GetDroneTypeResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::GetDroneType >::value();
  }
  static const char* value(const ::dji_osdk_ros::GetDroneTypeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GETDRONETYPE_H