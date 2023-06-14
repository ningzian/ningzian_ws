// Generated by gencpp from file dji_osdk_ros/WaypointV2CameraActuatorFocalLengthParam.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCALLENGTHPARAM_H
#define DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCALLENGTHPARAM_H


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
struct WaypointV2CameraActuatorFocalLengthParam_
{
  typedef WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> Type;

  WaypointV2CameraActuatorFocalLengthParam_()
    : focalLength(0)  {
    }
  WaypointV2CameraActuatorFocalLengthParam_(const ContainerAllocator& _alloc)
    : focalLength(0)  {
  (void)_alloc;
    }



   typedef uint16_t _focalLength_type;
  _focalLength_type focalLength;



  enum {
    retryTimes = 1u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointV2CameraActuatorFocalLengthParam_

typedef ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<std::allocator<void> > WaypointV2CameraActuatorFocalLengthParam;

typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam > WaypointV2CameraActuatorFocalLengthParamPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam const> WaypointV2CameraActuatorFocalLengthParamConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99efc948569c8b4d6dd86f463dafe65a";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99efc948569c8b4dULL;
  static const uint64_t static_value2 = 0x6dd86f463dafe65aULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/WaypointV2CameraActuatorFocalLengthParam";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This class defines a camera focal length operation for  ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam``.\n\
# Focal length of zoom lens. Valid range is [``DJICamera_DJICameraOpticalZoomSpec_minFocalLength``,\n\
# ``DJICamera_DJICameraOpticalZoomSpec_minFocalLength``] and must be a multiple of\n\
# ``DJICamera_DJICameraOpticalZoomSpec_focalLengthStep``.\n\
#  Only support by those camera ``DJICamera_CameraSettings_isOpticalZoomSupported`` return ``TRUE``.\n\
  uint16 focalLength\n\
\n\
  uint8 retryTimes = 1\n\
";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.focalLength);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointV2CameraActuatorFocalLengthParam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::WaypointV2CameraActuatorFocalLengthParam_<ContainerAllocator>& v)
  {
    s << indent << "focalLength: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.focalLength);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_WAYPOINTV2CAMERAACTUATORFOCALLENGTHPARAM_H