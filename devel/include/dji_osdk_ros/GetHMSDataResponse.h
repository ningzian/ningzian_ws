// Generated by gencpp from file dji_osdk_ros/GetHMSDataResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GETHMSDATARESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_GETHMSDATARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/HMSPushInfo.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct GetHMSDataResponse_
{
  typedef GetHMSDataResponse_<ContainerAllocator> Type;

  GetHMSDataResponse_()
    : result(false)
    , deviceIndex(0)
    , errList()
    , timeStamp(0)  {
    }
  GetHMSDataResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , deviceIndex(0)
    , errList(_alloc)
    , timeStamp(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef uint8_t _deviceIndex_type;
  _deviceIndex_type deviceIndex;

   typedef std::vector< ::dji_osdk_ros::HMSPushInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dji_osdk_ros::HMSPushInfo_<ContainerAllocator> >::other >  _errList_type;
  _errList_type errList;

   typedef uint32_t _timeStamp_type;
  _timeStamp_type timeStamp;





  typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetHMSDataResponse_

typedef ::dji_osdk_ros::GetHMSDataResponse_<std::allocator<void> > GetHMSDataResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataResponse > GetHMSDataResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataResponse const> GetHMSDataResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'dji_osdk_ros': ['/home/dji/ningzian_ws/src/Onboard-SDK-ROS/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b1a3ca4f52c03bc8e0bd4ba84b0e67d";
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b1a3ca4f52c03bcULL;
  static const uint64_t static_value2 = 0x8e0bd4ba84b0e67dULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/GetHMSDataResponse";
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool result\n\
uint8 deviceIndex\n\
\n\
HMSPushInfo[] errList\n\
uint32 timeStamp\n\
\n\
================================================================================\n\
MSG: dji_osdk_ros/HMSPushInfo\n\
uint32 alarmID     #/*! error code*/\n\
uint8  sensorIndex #/*! fault sensor's index*/\n\
uint8  reportLevel #/*! fault level ,0-4,0 is no error,4 is highest*/\n\
";
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.deviceIndex);
      stream.next(m.errList);
      stream.next(m.timeStamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetHMSDataResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::GetHMSDataResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "deviceIndex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.deviceIndex);
    s << indent << "errList[]" << std::endl;
    for (size_t i = 0; i < v.errList.size(); ++i)
    {
      s << indent << "  errList[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dji_osdk_ros::HMSPushInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.errList[i]);
    }
    s << indent << "timeStamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timeStamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GETHMSDATARESPONSE_H
