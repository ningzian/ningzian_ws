// Generated by gencpp from file dji_osdk_ros/FlightAnomaly.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_FLIGHTANOMALY_H
#define DJI_OSDK_ROS_MESSAGE_FLIGHTANOMALY_H


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
struct FlightAnomaly_
{
  typedef FlightAnomaly_<ContainerAllocator> Type;

  FlightAnomaly_()
    : data(0)  {
    }
  FlightAnomaly_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef uint32_t _data_type;
  _data_type data;



  enum {
    IMPACT_IN_AIR = 1u,
    RANDOM_FLY = 2u,
    VERTICAL_CONTROL_FAIL = 4u,
    HORIZONTAL_CONTROL_FAIL = 8u,
    YAW_CONTROL_FAIL = 16u,
    AIRCRAFT_IS_FALLING = 32u,
    STRONG_WIND_LEVEL1 = 64u,
    STRONG_WIND_LEVEL2 = 128u,
    COMPASS_INSTALLATION_ERROR = 256u,
    IMU_INSTALLATION_ERROR = 512u,
    ESC_TEMPERATURE_HIGH = 1024u,
    ESC_DISCONNECTED = 2048u,
    GPS_YAW_ERROR = 4096u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> const> ConstPtr;

}; // struct FlightAnomaly_

typedef ::dji_osdk_ros::FlightAnomaly_<std::allocator<void> > FlightAnomaly;

typedef boost::shared_ptr< ::dji_osdk_ros::FlightAnomaly > FlightAnomalyPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::FlightAnomaly const> FlightAnomalyConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
{
  static const char* value()
  {
    return "098979ec2b2d91dd43226500118b8680";
  }

  static const char* value(const ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x098979ec2b2d91ddULL;
  static const uint64_t static_value2 = 0x43226500118b8680ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/FlightAnomaly";
  }

  static const char* value(const ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Here is an example how to use FlightAnomaly msg:\n\
#\n\
# void flightAnomalyCallback(const dji_osdk_ros::FlightAnomaly::ConstPtr & msg)\n\
# {\n\
#   uint32_t flightAnomalyData = msg->data;\n\
#   if(flightAnomalyData)\n\
#   {\n\
#     ROS_INFO(\"Flight Anomaly Reported by Flight Controller. Here are details:\");\n\
#     if(flightAnomalyData && dji_osdk_ros::FlightAnomaly::COMPASS_INSTALLATION_ERROR)\n\
#     {\n\
#         ROS_INFO(\"COMPASS_INSTALLATION_ERROR\");\n\
#     }\n\
#\n\
#     if(flightAnomalyData && dji_osdk_ros::FlightAnomaly::IMU_INSTALLATION_ERROR)\n\
#     {\n\
#         ROS_INFO(\"IMU_INSTALLATION_ERROR\");\n\
#     }\n\
#\n\
#     // etc...\n\
#   }\n\
# }\n\
#\n\
#\n\
\n\
# constants for anomaly details\n\
uint32 IMPACT_IN_AIR              = 1     #\n\
uint32 RANDOM_FLY                 = 2     #\n\
uint32 VERTICAL_CONTROL_FAIL      = 4     #\n\
uint32 HORIZONTAL_CONTROL_FAIL    = 8     #\n\
uint32 YAW_CONTROL_FAIL           = 16    #\n\
uint32 AIRCRAFT_IS_FALLING        = 32    #\n\
uint32 STRONG_WIND_LEVEL1         = 64    #\n\
uint32 STRONG_WIND_LEVEL2         = 128   #\n\
uint32 COMPASS_INSTALLATION_ERROR = 256   #\n\
uint32 IMU_INSTALLATION_ERROR     = 512   #\n\
uint32 ESC_TEMPERATURE_HIGH       = 1024  #\n\
uint32 ESC_DISCONNECTED           = 2048  #\n\
uint32 GPS_YAW_ERROR              = 4096  #\n\
\n\
#\n\
uint32 data\n\
\n\
";
  }

  static const char* value(const ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlightAnomaly_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::FlightAnomaly_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_FLIGHTANOMALY_H
