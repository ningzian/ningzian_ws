// Generated by gencpp from file dji_osdk_ros/iuslTarState.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_IUSLTARSTATE_H
#define DJI_OSDK_ROS_MESSAGE_IUSLTARSTATE_H


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
struct iuslTarState_
{
  typedef iuslTarState_<ContainerAllocator> Type;

  iuslTarState_()
    : tar_OK(false)
    , tar_x(0.0)
    , tar_y(0.0)
    , tar_z(0.0)
    , tar_vx(0.0)
    , tar_vy(0.0)  {
    }
  iuslTarState_(const ContainerAllocator& _alloc)
    : tar_OK(false)
    , tar_x(0.0)
    , tar_y(0.0)
    , tar_z(0.0)
    , tar_vx(0.0)
    , tar_vy(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _tar_OK_type;
  _tar_OK_type tar_OK;

   typedef double _tar_x_type;
  _tar_x_type tar_x;

   typedef double _tar_y_type;
  _tar_y_type tar_y;

   typedef double _tar_z_type;
  _tar_z_type tar_z;

   typedef double _tar_vx_type;
  _tar_vx_type tar_vx;

   typedef double _tar_vy_type;
  _tar_vy_type tar_vy;





  typedef boost::shared_ptr< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> const> ConstPtr;

}; // struct iuslTarState_

typedef ::dji_osdk_ros::iuslTarState_<std::allocator<void> > iuslTarState;

typedef boost::shared_ptr< ::dji_osdk_ros::iuslTarState > iuslTarStatePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::iuslTarState const> iuslTarStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::iuslTarState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8205a9aaa333548ad9f16f1f7e2853f";
  }

  static const char* value(const ::dji_osdk_ros::iuslTarState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8205a9aaa333548ULL;
  static const uint64_t static_value2 = 0xad9f16f1f7e2853fULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/iuslTarState";
  }

  static const char* value(const ::dji_osdk_ros::iuslTarState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# estimated target UAV state\n\
bool tar_OK\n\
float64 tar_x\n\
float64 tar_y\n\
float64 tar_z\n\
float64 tar_vx\n\
float64 tar_vy\n\
\n\
";
  }

  static const char* value(const ::dji_osdk_ros::iuslTarState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tar_OK);
      stream.next(m.tar_x);
      stream.next(m.tar_y);
      stream.next(m.tar_z);
      stream.next(m.tar_vx);
      stream.next(m.tar_vy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct iuslTarState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::iuslTarState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::iuslTarState_<ContainerAllocator>& v)
  {
    s << indent << "tar_OK: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tar_OK);
    s << indent << "tar_x: ";
    Printer<double>::stream(s, indent + "  ", v.tar_x);
    s << indent << "tar_y: ";
    Printer<double>::stream(s, indent + "  ", v.tar_y);
    s << indent << "tar_z: ";
    Printer<double>::stream(s, indent + "  ", v.tar_z);
    s << indent << "tar_vx: ";
    Printer<double>::stream(s, indent + "  ", v.tar_vx);
    s << indent << "tar_vy: ";
    Printer<double>::stream(s, indent + "  ", v.tar_vy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_IUSLTARSTATE_H
