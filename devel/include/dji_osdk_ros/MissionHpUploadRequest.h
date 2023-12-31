// Generated by gencpp from file dji_osdk_ros/MissionHpUploadRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONHPUPLOADREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONHPUPLOADREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/MissionHotpointTask.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct MissionHpUploadRequest_
{
  typedef MissionHpUploadRequest_<ContainerAllocator> Type;

  MissionHpUploadRequest_()
    : hotpoint_task()  {
    }
  MissionHpUploadRequest_(const ContainerAllocator& _alloc)
    : hotpoint_task(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dji_osdk_ros::MissionHotpointTask_<ContainerAllocator>  _hotpoint_task_type;
  _hotpoint_task_type hotpoint_task;





  typedef boost::shared_ptr< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MissionHpUploadRequest_

typedef ::dji_osdk_ros::MissionHpUploadRequest_<std::allocator<void> > MissionHpUploadRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::MissionHpUploadRequest > MissionHpUploadRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::MissionHpUploadRequest const> MissionHpUploadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e36e66ca170c4d03ee023ad56c6bb5a0";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe36e66ca170c4d03ULL;
  static const uint64_t static_value2 = 0xee023ad56c6bb5a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/MissionHpUploadRequest";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MissionHotpointTask hotpoint_task\n\
\n\
================================================================================\n\
MSG: dji_osdk_ros/MissionHotpointTask\n\
float64 latitude  # degree\n\
float64 longitude # degree\n\
float64 altitude  # meter\n\
float64 radius    # meter\n\
float32 angular_speed #deg/s\n\
uint8 is_clockwise\n\
uint8 start_point\n\
uint8 yaw_mode\n\
";
  }

  static const char* value(const ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hotpoint_task);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionHpUploadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::MissionHpUploadRequest_<ContainerAllocator>& v)
  {
    s << indent << "hotpoint_task: ";
    s << std::endl;
    Printer< ::dji_osdk_ros::MissionHotpointTask_<ContainerAllocator> >::stream(s, indent + "  ", v.hotpoint_task);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONHPUPLOADREQUEST_H
