// Generated by gencpp from file dji_osdk_ros/SetJoystickModeRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SETJOYSTICKMODEREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_SETJOYSTICKMODEREQUEST_H


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
struct SetJoystickModeRequest_
{
  typedef SetJoystickModeRequest_<ContainerAllocator> Type;

  SetJoystickModeRequest_()
    : horizontal_mode(0)
    , vertical_mode(0)
    , yaw_mode(0)
    , horizontal_coordinate(0)
    , stable_mode(0)  {
    }
  SetJoystickModeRequest_(const ContainerAllocator& _alloc)
    : horizontal_mode(0)
    , vertical_mode(0)
    , yaw_mode(0)
    , horizontal_coordinate(0)
    , stable_mode(0)  {
  (void)_alloc;
    }



   typedef uint8_t _horizontal_mode_type;
  _horizontal_mode_type horizontal_mode;

   typedef uint8_t _vertical_mode_type;
  _vertical_mode_type vertical_mode;

   typedef uint8_t _yaw_mode_type;
  _yaw_mode_type yaw_mode;

   typedef uint8_t _horizontal_coordinate_type;
  _horizontal_coordinate_type horizontal_coordinate;

   typedef uint8_t _stable_mode_type;
  _stable_mode_type stable_mode;



  enum {
    HORIZONTAL_ANGLE = 0u,
    HORIZONTAL_VELOCITY = 1u,
    HORIZONTAL_POSITION = 2u,
    HORIZONTAL_ANGULAR_RATE = 3u,
    VERTICAL_VELOCITY = 0u,
    VERTICAL_POSITION = 1u,
    VERTICAL_THRUST = 2u,
    YAW_ANGLE = 0u,
    YAW_RATE = 1u,
    HORIZONTAL_GROUND = 0u,
    HORIZONTAL_BODY = 1u,
    STABLE_DISABLE = 0u,
    STABLE_ENABLE = 1u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJoystickModeRequest_

typedef ::dji_osdk_ros::SetJoystickModeRequest_<std::allocator<void> > SetJoystickModeRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::SetJoystickModeRequest > SetJoystickModeRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::SetJoystickModeRequest const> SetJoystickModeRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ceb88ab65abad757e3f8c63ab37f9f7d";
  }

  static const char* value(const ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xceb88ab65abad757ULL;
  static const uint64_t static_value2 = 0xe3f8c63ab37f9f7dULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/SetJoystickModeRequest";
  }

  static const char* value(const ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
uint8 HORIZONTAL_ANGLE = 0\n\
\n\
\n\
\n\
\n\
uint8 HORIZONTAL_VELOCITY = 1\n\
\n\
\n\
\n\
uint8 HORIZONTAL_POSITION = 2\n\
\n\
\n\
\n\
uint8 HORIZONTAL_ANGULAR_RATE = 3\n\
\n\
\n\
\n\
\n\
\n\
uint8 VERTICAL_VELOCITY = 0\n\
\n\
\n\
uint8 VERTICAL_POSITION = 1\n\
\n\
\n\
uint8 VERTICAL_THRUST = 2\n\
\n\
\n\
\n\
\n\
\n\
uint8 YAW_ANGLE = 0\n\
\n\
\n\
\n\
uint8 YAW_RATE = 1\n\
\n\
\n\
uint8 HORIZONTAL_GROUND = 0\n\
\n\
uint8 HORIZONTAL_BODY = 1\n\
\n\
\n\
uint8 STABLE_DISABLE = 0\n\
\n\
uint8 STABLE_ENABLE = 1\n\
\n\
\n\
\n\
\n\
\n\
\n\
uint8 horizontal_mode\n\
\n\
\n\
\n\
\n\
\n\
uint8 vertical_mode\n\
uint8 yaw_mode\n\
uint8 horizontal_coordinate\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
uint8 stable_mode\n\
";
  }

  static const char* value(const ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.horizontal_mode);
      stream.next(m.vertical_mode);
      stream.next(m.yaw_mode);
      stream.next(m.horizontal_coordinate);
      stream.next(m.stable_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJoystickModeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::SetJoystickModeRequest_<ContainerAllocator>& v)
  {
    s << indent << "horizontal_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horizontal_mode);
    s << indent << "vertical_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vertical_mode);
    s << indent << "yaw_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw_mode);
    s << indent << "horizontal_coordinate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horizontal_coordinate);
    s << indent << "stable_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stable_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SETJOYSTICKMODEREQUEST_H