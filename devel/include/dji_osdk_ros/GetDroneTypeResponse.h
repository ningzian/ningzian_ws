// Generated by gencpp from file dji_osdk_ros/GetDroneTypeResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GETDRONETYPERESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_GETDRONETYPERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct GetDroneTypeResponse_
{
  typedef GetDroneTypeResponse_<ContainerAllocator> Type;

  GetDroneTypeResponse_()
    : drone_type(0)  {
    }
  GetDroneTypeResponse_(const ContainerAllocator& _alloc)
    : drone_type(0)  {
  (void)_alloc;
    }



   typedef uint8_t _drone_type_type;
  _drone_type_type drone_type;





  typedef boost::shared_ptr< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDroneTypeResponse_

typedef ::dji_osdk_ros::GetDroneTypeResponse_<std::allocator<void> > GetDroneTypeResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::GetDroneTypeResponse > GetDroneTypeResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::GetDroneTypeResponse const> GetDroneTypeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'dji_osdk_ros': ['/home/dji/ningzian_ws/src/Onboard-SDK-ROS/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87cc5c5bc9c0355af48cf3dac961c235";
  }

  static const char* value(const ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87cc5c5bc9c0355aULL;
  static const uint64_t static_value2 = 0xf48cf3dac961c235ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/GetDroneTypeResponse";
  }

  static const char* value(const ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 drone_type\n\
";
  }

  static const char* value(const ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.drone_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDroneTypeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::GetDroneTypeResponse_<ContainerAllocator>& v)
  {
    s << indent << "drone_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.drone_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GETDRONETYPERESPONSE_H
