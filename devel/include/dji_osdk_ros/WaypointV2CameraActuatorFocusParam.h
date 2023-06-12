// Generated by gencpp from file dji_osdk_ros/WaypointV2CameraActuatorFocusParam.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCUSPARAM_H
#define DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCUSPARAM_H


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
struct WaypointV2CameraActuatorFocusParam_
{
  typedef WaypointV2CameraActuatorFocusParam_<ContainerAllocator> Type;

  WaypointV2CameraActuatorFocusParam_()
    : x(0.0)
    , y(0.0)
    , regionType(0)
    , width(0.0)
    , height(0.0)  {
    }
  WaypointV2CameraActuatorFocusParam_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , regionType(0)
    , width(0.0)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef uint8_t _regionType_type;
  _regionType_type regionType;

   typedef float _width_type;
  _width_type width;

   typedef float _height_type;
  _height_type height;



  enum {
    retryTimes = 1u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointV2CameraActuatorFocusParam_

typedef ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<std::allocator<void> > WaypointV2CameraActuatorFocusParam;

typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam > WaypointV2CameraActuatorFocusParamPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam const> WaypointV2CameraActuatorFocusParamConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95b7a584dbbb8caef1fc7ac96e17cb2b";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95b7a584dbbb8caeULL;
  static const uint64_t static_value2 = 0xf1fc7ac96e17cb2bULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/WaypointV2CameraActuatorFocusParam";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This class defines a camera focus operation for ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam``.\n\
# The lens focus target point. When the focus mode is auto, the target point\n\
# is the focal point. When the focus mode is manual, the target point is the zoom\n\
# out area if the focus assistant is enabled for the manual mode.\n\
#  The range for x and y is from 0.0 to 1.0. The point [0.0, 0.0] represents the top-left angle of the screen.\n\
  \n\
  float32 x # x axis focus point value.range: [0,1]\n\
  float32 y # y axis focus point value.range: [0,1]\n\
  uint8 regionType #focus type:0:point focus,1:rectangle focus\n\
  float32 width #Normalized focus area width(0,1)\n\
  float32 height # Normalized focus area height(0,1)\n\
  uint8 retryTimes = 1\n\
";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.regionType);
      stream.next(m.width);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointV2CameraActuatorFocusParam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::WaypointV2CameraActuatorFocusParam_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "regionType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.regionType);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCUSPARAM_H
