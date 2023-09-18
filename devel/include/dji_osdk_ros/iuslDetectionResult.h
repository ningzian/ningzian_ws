// Generated by gencpp from file dji_osdk_ros/iuslDetectionResult.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_IUSLDETECTIONRESULT_H
#define DJI_OSDK_ROS_MESSAGE_IUSLDETECTIONRESULT_H


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
struct iuslDetectionResult_
{
  typedef iuslDetectionResult_<ContainerAllocator> Type;

  iuslDetectionResult_()
    : time(0.0)
    , center_x(0)
    , center_y(0)
    , box_width(0)
    , box_height(0)
    , max_length(0)
    , UAV_lat(0.0)
    , UAV_lon(0.0)
    , UAV_alt(0.0)
    , UAV_roll(0.0)
    , UAV_pitch(0.0)
    , UAV_yaw(0.0)
    , cam_roll(0.0)
    , cam_pitch(0.0)
    , cam_yaw(0.0)
    , laser_dis(0.0)  {
    }
  iuslDetectionResult_(const ContainerAllocator& _alloc)
    : time(0.0)
    , center_x(0)
    , center_y(0)
    , box_width(0)
    , box_height(0)
    , max_length(0)
    , UAV_lat(0.0)
    , UAV_lon(0.0)
    , UAV_alt(0.0)
    , UAV_roll(0.0)
    , UAV_pitch(0.0)
    , UAV_yaw(0.0)
    , cam_roll(0.0)
    , cam_pitch(0.0)
    , cam_yaw(0.0)
    , laser_dis(0.0)  {
  (void)_alloc;
    }



   typedef double _time_type;
  _time_type time;

   typedef int64_t _center_x_type;
  _center_x_type center_x;

   typedef int64_t _center_y_type;
  _center_y_type center_y;

   typedef int64_t _box_width_type;
  _box_width_type box_width;

   typedef int64_t _box_height_type;
  _box_height_type box_height;

   typedef int64_t _max_length_type;
  _max_length_type max_length;

   typedef double _UAV_lat_type;
  _UAV_lat_type UAV_lat;

   typedef double _UAV_lon_type;
  _UAV_lon_type UAV_lon;

   typedef double _UAV_alt_type;
  _UAV_alt_type UAV_alt;

   typedef double _UAV_roll_type;
  _UAV_roll_type UAV_roll;

   typedef double _UAV_pitch_type;
  _UAV_pitch_type UAV_pitch;

   typedef double _UAV_yaw_type;
  _UAV_yaw_type UAV_yaw;

   typedef double _cam_roll_type;
  _cam_roll_type cam_roll;

   typedef double _cam_pitch_type;
  _cam_pitch_type cam_pitch;

   typedef double _cam_yaw_type;
  _cam_yaw_type cam_yaw;

   typedef double _laser_dis_type;
  _laser_dis_type laser_dis;





  typedef boost::shared_ptr< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> const> ConstPtr;

}; // struct iuslDetectionResult_

typedef ::dji_osdk_ros::iuslDetectionResult_<std::allocator<void> > iuslDetectionResult;

typedef boost::shared_ptr< ::dji_osdk_ros::iuslDetectionResult > iuslDetectionResultPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::iuslDetectionResult const> iuslDetectionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a683b81585e7917ba9c237fbbd81b74";
  }

  static const char* value(const ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a683b81585e7917ULL;
  static const uint64_t static_value2 = 0xba9c237fbbd81b74ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/iuslDetectionResult";
  }

  static const char* value(const ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# time\n\
float64 time\n\
\n\
# boundingbox\n\
int64 center_x\n\
int64 center_y\n\
int64 box_width\n\
int64 box_height\n\
int64 max_length\n\
\n\
# camera state\n\
float64 UAV_lat\n\
float64 UAV_lon\n\
float64 UAV_alt\n\
float64 UAV_roll\n\
float64 UAV_pitch\n\
float64 UAV_yaw\n\
float64 cam_roll\n\
float64 cam_pitch\n\
float64 cam_yaw\n\
\n\
# laser state\n\
float64 laser_dis\n\
\n\
";
  }

  static const char* value(const ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.center_x);
      stream.next(m.center_y);
      stream.next(m.box_width);
      stream.next(m.box_height);
      stream.next(m.max_length);
      stream.next(m.UAV_lat);
      stream.next(m.UAV_lon);
      stream.next(m.UAV_alt);
      stream.next(m.UAV_roll);
      stream.next(m.UAV_pitch);
      stream.next(m.UAV_yaw);
      stream.next(m.cam_roll);
      stream.next(m.cam_pitch);
      stream.next(m.cam_yaw);
      stream.next(m.laser_dis);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct iuslDetectionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::iuslDetectionResult_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "center_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.center_x);
    s << indent << "center_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.center_y);
    s << indent << "box_width: ";
    Printer<int64_t>::stream(s, indent + "  ", v.box_width);
    s << indent << "box_height: ";
    Printer<int64_t>::stream(s, indent + "  ", v.box_height);
    s << indent << "max_length: ";
    Printer<int64_t>::stream(s, indent + "  ", v.max_length);
    s << indent << "UAV_lat: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_lat);
    s << indent << "UAV_lon: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_lon);
    s << indent << "UAV_alt: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_alt);
    s << indent << "UAV_roll: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_roll);
    s << indent << "UAV_pitch: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_pitch);
    s << indent << "UAV_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.UAV_yaw);
    s << indent << "cam_roll: ";
    Printer<double>::stream(s, indent + "  ", v.cam_roll);
    s << indent << "cam_pitch: ";
    Printer<double>::stream(s, indent + "  ", v.cam_pitch);
    s << indent << "cam_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.cam_yaw);
    s << indent << "laser_dis: ";
    Printer<double>::stream(s, indent + "  ", v.laser_dis);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_IUSLDETECTIONRESULT_H
