// Generated by gencpp from file dji_osdk_ros/iuslMyState.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_IUSLMYSTATE_H
#define DJI_OSDK_ROS_MESSAGE_IUSLMYSTATE_H


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
struct iuslMyState_
{
  typedef iuslMyState_<ContainerAllocator> Type;

  iuslMyState_()
    : UAV_lat(0.0)
    , UAV_lon(0.0)
    , UAV_alt(0.0)
    , UAV_yaw(0.0)
    , UAV_vx(0.0)
    , UAV_vy(0.0)
    , cam_x(0.0)
    , cam_y(0.0)
    , cam_z(0.0)  {
    }
  iuslMyState_(const ContainerAllocator& _alloc)
    : UAV_lat(0.0)
    , UAV_lon(0.0)
    , UAV_alt(0.0)
    , UAV_yaw(0.0)
    , UAV_vx(0.0)
    , UAV_vy(0.0)
    , cam_x(0.0)
    , cam_y(0.0)
    , cam_z(0.0)  {
  (void)_alloc;
    }



   typedef double _UAV_lat_type;
  _UAV_lat_type UAV_lat;

   typedef double _UAV_lon_type;
  _UAV_lon_type UAV_lon;

   typedef double _UAV_alt_type;
  _UAV_alt_type UAV_alt;

   typedef double _UAV_yaw_type;
  _UAV_yaw_type UAV_yaw;

   typedef double _UAV_vx_type;
  _UAV_vx_type UAV_vx;

   typedef double _UAV_vy_type;
  _UAV_vy_type UAV_vy;

   typedef double _cam_x_type;
  _cam_x_type cam_x;

   typedef double _cam_y_type;
  _cam_y_type cam_y;

   typedef double _cam_z_type;
  _cam_z_type cam_z;





  typedef boost::shared_ptr< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> const> ConstPtr;

}; // struct iuslMyState_

typedef ::dji_osdk_ros::iuslMyState_<std::allocator<void> > iuslMyState;

typedef boost::shared_ptr< ::dji_osdk_ros::iuslMyState > iuslMyStatePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::iuslMyState const> iuslMyStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::iuslMyState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "acb74560be271ca4b46ca1a39952dd6b";
  }

  static const char* value(const ::dji_osdk_ros::iuslMyState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xacb74560be271ca4ULL;
  static const uint64_t static_value2 = 0xb46ca1a39952dd6bULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/iuslMyState";
  }

  static const char* value(const ::dji_osdk_ros::iuslMyState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 UAV_lat\n\
float64 UAV_lon\n\
float64 UAV_alt\n\
float64 UAV_yaw\n\
float64 UAV_vx\n\
float64 UAV_vy\n\
float64 cam_x\n\
float64 cam_y\n\
float64 cam_z\n\
\n\
";
  }

  static const char* value(const ::dji_osdk_ros::iuslMyState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.UAV_lat);
      stream.next(m.UAV_lon);
      stream.next(m.UAV_alt);
      stream.next(m.UAV_yaw);
      stream.next(m.UAV_vx);
      stream.next(m.UAV_vy);
      stream.next(m.cam_x);
      stream.next(m.cam_y);
      stream.next(m.cam_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct iuslMyState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::iuslMyState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::iuslMyState_<ContainerAllocator>& v)
  {
    s << indent << "UAV_lat: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_lat);
    s << indent << "UAV_lon: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_lon);
    s << indent << "UAV_alt: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_alt);
    s << indent << "UAV_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_yaw);
    s << indent << "UAV_vx: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_vx);
    s << indent << "UAV_vy: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_vy);
    s << indent << "cam_x: ";
    Printer<double>::stream(s, indent + "  ", v.cam_x);
    s << indent << "cam_y: ";
    Printer<double>::stream(s, indent + "  ", v.cam_y);
    s << indent << "cam_z: ";
    Printer<double>::stream(s, indent + "  ", v.cam_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_IUSLMYSTATE_H
