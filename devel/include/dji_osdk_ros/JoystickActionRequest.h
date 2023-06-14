// Generated by gencpp from file dji_osdk_ros/JoystickActionRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_JOYSTICKACTIONREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_JOYSTICKACTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/JoystickParams.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct JoystickActionRequest_
{
  typedef JoystickActionRequest_<ContainerAllocator> Type;

  JoystickActionRequest_()
    : joystickCommand()  {
    }
  JoystickActionRequest_(const ContainerAllocator& _alloc)
    : joystickCommand(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dji_osdk_ros::JoystickParams_<ContainerAllocator>  _joystickCommand_type;
  _joystickCommand_type joystickCommand;





  typedef boost::shared_ptr< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JoystickActionRequest_

typedef ::dji_osdk_ros::JoystickActionRequest_<std::allocator<void> > JoystickActionRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::JoystickActionRequest > JoystickActionRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::JoystickActionRequest const> JoystickActionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d0516ab007c0bcbdc94fddf88e942057";
  }

  static const char* value(const ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd0516ab007c0bcbdULL;
  static const uint64_t static_value2 = 0xc94fddf88e942057ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/JoystickActionRequest";
  }

  static const char* value(const ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
JoystickParams joystickCommand\n\
\n\
================================================================================\n\
MSG: dji_osdk_ros/JoystickParams\n\
float32 x   # Control with respect to the x axis of the\n\
            # DJI::OSDK::Control::HorizontalCoordinate.\n\
float32 y   # Control with respect to the y axis of the\n\
            # DJI::OSDK::Control::HorizontalCoordinate.\n\
float32 z   # Control with respect to the z axis, up is positive.\n\
float32 yaw #Yaw position/velocity control w.r.t. the ground frame.\n\
";
  }

  static const char* value(const ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joystickCommand);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JoystickActionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::JoystickActionRequest_<ContainerAllocator>& v)
  {
    s << indent << "joystickCommand: ";
    s << std::endl;
    Printer< ::dji_osdk_ros::JoystickParams_<ContainerAllocator> >::stream(s, indent + "  ", v.joystickCommand);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_JOYSTICKACTIONREQUEST_H