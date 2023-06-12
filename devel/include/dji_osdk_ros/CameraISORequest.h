// Generated by gencpp from file dji_osdk_ros/CameraISORequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERAISOREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_CAMERAISOREQUEST_H


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
struct CameraISORequest_
{
  typedef CameraISORequest_<ContainerAllocator> Type;

  CameraISORequest_()
    : payload_index(0)
    , exposure_mode(0)
    , iso_data(0)  {
    }
  CameraISORequest_(const ContainerAllocator& _alloc)
    : payload_index(0)
    , exposure_mode(0)
    , iso_data(0)  {
  (void)_alloc;
    }



   typedef uint8_t _payload_index_type;
  _payload_index_type payload_index;

   typedef uint8_t _exposure_mode_type;
  _exposure_mode_type exposure_mode;

   typedef uint8_t _iso_data_type;
  _iso_data_type iso_data;





  typedef boost::shared_ptr< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraISORequest_

typedef ::dji_osdk_ros::CameraISORequest_<std::allocator<void> > CameraISORequest;

typedef boost::shared_ptr< ::dji_osdk_ros::CameraISORequest > CameraISORequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::CameraISORequest const> CameraISORequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "69434281cf3358a0c720479e433c69a1";
  }

  static const char* value(const ::dji_osdk_ros::CameraISORequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x69434281cf3358a0ULL;
  static const uint64_t static_value2 = 0xc720479e433c69a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/CameraISORequest";
  }

  static const char* value(const ::dji_osdk_ros::CameraISORequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 payload_index\n\
uint8 exposure_mode\n\
uint8 iso_data\n\
";
  }

  static const char* value(const ::dji_osdk_ros::CameraISORequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload_index);
      stream.next(m.exposure_mode);
      stream.next(m.iso_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraISORequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::CameraISORequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::CameraISORequest_<ContainerAllocator>& v)
  {
    s << indent << "payload_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.payload_index);
    s << indent << "exposure_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exposure_mode);
    s << indent << "iso_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.iso_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERAISOREQUEST_H
