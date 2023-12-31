// Generated by gencpp from file dji_osdk_ros/SendMobileData.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATA_H
#define DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATA_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/SendMobileDataRequest.h>
#include <dji_osdk_ros/SendMobileDataResponse.h>


namespace dji_osdk_ros
{

struct SendMobileData
{

typedef SendMobileDataRequest Request;
typedef SendMobileDataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendMobileData
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::SendMobileData > {
  static const char* value()
  {
    return "1c25dff3462ed6a8f6df1c148c7b6a1e";
  }

  static const char* value(const ::dji_osdk_ros::SendMobileData&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::SendMobileData > {
  static const char* value()
  {
    return "dji_osdk_ros/SendMobileData";
  }

  static const char* value(const ::dji_osdk_ros::SendMobileData&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::SendMobileDataRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::SendMobileData > 
template<>
struct MD5Sum< ::dji_osdk_ros::SendMobileDataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SendMobileData >::value();
  }
  static const char* value(const ::dji_osdk_ros::SendMobileDataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SendMobileDataRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::SendMobileData > 
template<>
struct DataType< ::dji_osdk_ros::SendMobileDataRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SendMobileData >::value();
  }
  static const char* value(const ::dji_osdk_ros::SendMobileDataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::SendMobileDataResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::SendMobileData > 
template<>
struct MD5Sum< ::dji_osdk_ros::SendMobileDataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SendMobileData >::value();
  }
  static const char* value(const ::dji_osdk_ros::SendMobileDataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SendMobileDataResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::SendMobileData > 
template<>
struct DataType< ::dji_osdk_ros::SendMobileDataResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SendMobileData >::value();
  }
  static const char* value(const ::dji_osdk_ros::SendMobileDataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SENDMOBILEDATA_H
