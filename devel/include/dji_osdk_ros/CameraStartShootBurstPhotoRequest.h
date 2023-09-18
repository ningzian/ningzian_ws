// Generated by gencpp from file dji_osdk_ros/CameraStartShootBurstPhotoRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTBURSTPHOTOREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTBURSTPHOTOREQUEST_H


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
struct CameraStartShootBurstPhotoRequest_
{
  typedef CameraStartShootBurstPhotoRequest_<ContainerAllocator> Type;

  CameraStartShootBurstPhotoRequest_()
    : payload_index(0)
    , photo_burst_count(0)  {
    }
  CameraStartShootBurstPhotoRequest_(const ContainerAllocator& _alloc)
    : payload_index(0)
    , photo_burst_count(0)  {
  (void)_alloc;
    }



   typedef uint8_t _payload_index_type;
  _payload_index_type payload_index;

   typedef uint8_t _photo_burst_count_type;
  _photo_burst_count_type photo_burst_count;





  typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraStartShootBurstPhotoRequest_

typedef ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<std::allocator<void> > CameraStartShootBurstPhotoRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest > CameraStartShootBurstPhotoRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest const> CameraStartShootBurstPhotoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1f3cf51e41d600bc9081e0c1ed4b8da";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1f3cf51e41d600bULL;
  static const uint64_t static_value2 = 0xc9081e0c1ed4b8daULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/CameraStartShootBurstPhotoRequest";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 payload_index\n\
uint8 photo_burst_count\n\
";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload_index);
      stream.next(m.photo_burst_count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraStartShootBurstPhotoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::CameraStartShootBurstPhotoRequest_<ContainerAllocator>& v)
  {
    s << indent << "payload_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.payload_index);
    s << indent << "photo_burst_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.photo_burst_count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTBURSTPHOTOREQUEST_H
