// Generated by gencpp from file dji_osdk_ros/Stereo240pSubscriptionRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_STEREO240PSUBSCRIPTIONREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_STEREO240PSUBSCRIPTIONREQUEST_H


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
struct Stereo240pSubscriptionRequest_
{
  typedef Stereo240pSubscriptionRequest_<ContainerAllocator> Type;

  Stereo240pSubscriptionRequest_()
    : front_right_240p(0)
    , front_left_240p(0)
    , down_front_240p(0)
    , down_back_240p(0)
    , unsubscribe_240p(0)  {
    }
  Stereo240pSubscriptionRequest_(const ContainerAllocator& _alloc)
    : front_right_240p(0)
    , front_left_240p(0)
    , down_front_240p(0)
    , down_back_240p(0)
    , unsubscribe_240p(0)  {
  (void)_alloc;
    }



   typedef uint8_t _front_right_240p_type;
  _front_right_240p_type front_right_240p;

   typedef uint8_t _front_left_240p_type;
  _front_left_240p_type front_left_240p;

   typedef uint8_t _down_front_240p_type;
  _down_front_240p_type down_front_240p;

   typedef uint8_t _down_back_240p_type;
  _down_back_240p_type down_back_240p;

   typedef uint8_t _unsubscribe_240p_type;
  _unsubscribe_240p_type unsubscribe_240p;





  typedef boost::shared_ptr< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Stereo240pSubscriptionRequest_

typedef ::dji_osdk_ros::Stereo240pSubscriptionRequest_<std::allocator<void> > Stereo240pSubscriptionRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::Stereo240pSubscriptionRequest > Stereo240pSubscriptionRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::Stereo240pSubscriptionRequest const> Stereo240pSubscriptionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f676e2d64f211783ff9d6cc8a69aa395";
  }

  static const char* value(const ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf676e2d64f211783ULL;
  static const uint64_t static_value2 = 0xff9d6cc8a69aa395ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/Stereo240pSubscriptionRequest";
  }

  static const char* value(const ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 front_right_240p\n\
uint8 front_left_240p\n\
uint8 down_front_240p\n\
uint8 down_back_240p\n\
\n\
\n\
\n\
uint8 unsubscribe_240p\n\
\n\
";
  }

  static const char* value(const ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.front_right_240p);
      stream.next(m.front_left_240p);
      stream.next(m.down_front_240p);
      stream.next(m.down_back_240p);
      stream.next(m.unsubscribe_240p);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Stereo240pSubscriptionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::Stereo240pSubscriptionRequest_<ContainerAllocator>& v)
  {
    s << indent << "front_right_240p: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.front_right_240p);
    s << indent << "front_left_240p: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.front_left_240p);
    s << indent << "down_front_240p: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.down_front_240p);
    s << indent << "down_back_240p: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.down_back_240p);
    s << indent << "unsubscribe_240p: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.unsubscribe_240p);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_STEREO240PSUBSCRIPTIONREQUEST_H
