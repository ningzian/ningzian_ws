// Generated by gencpp from file dji_osdk_ros/MFIOSetValue.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MFIOSETVALUE_H
#define DJI_OSDK_ROS_MESSAGE_MFIOSETVALUE_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/MFIOSetValueRequest.h>
#include <dji_osdk_ros/MFIOSetValueResponse.h>


namespace dji_osdk_ros
{

struct MFIOSetValue
{

typedef MFIOSetValueRequest Request;
typedef MFIOSetValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MFIOSetValue
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::MFIOSetValue > {
  static const char* value()
  {
    return "7a1c84fd096204723ecbb1a57b618e28";
  }

  static const char* value(const ::dji_osdk_ros::MFIOSetValue&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::MFIOSetValue > {
  static const char* value()
  {
    return "dji_osdk_ros/MFIOSetValue";
  }

  static const char* value(const ::dji_osdk_ros::MFIOSetValue&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::MFIOSetValueRequest> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MFIOSetValue > 
template<>
struct MD5Sum< ::dji_osdk_ros::MFIOSetValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_osdk_ros::MFIOSetValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MFIOSetValueRequest> should match 
// service_traits::DataType< ::dji_osdk_ros::MFIOSetValue > 
template<>
struct DataType< ::dji_osdk_ros::MFIOSetValueRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_osdk_ros::MFIOSetValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::MFIOSetValueResponse> should match 
// service_traits::MD5Sum< ::dji_osdk_ros::MFIOSetValue > 
template<>
struct MD5Sum< ::dji_osdk_ros::MFIOSetValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_osdk_ros::MFIOSetValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::MFIOSetValueResponse> should match 
// service_traits::DataType< ::dji_osdk_ros::MFIOSetValue > 
template<>
struct DataType< ::dji_osdk_ros::MFIOSetValueResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_osdk_ros::MFIOSetValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MFIOSETVALUE_H
