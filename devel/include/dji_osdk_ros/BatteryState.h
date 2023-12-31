// Generated by gencpp from file dji_osdk_ros/BatteryState.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_BATTERYSTATE_H
#define DJI_OSDK_ROS_MESSAGE_BATTERYSTATE_H


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
struct BatteryState_
{
  typedef BatteryState_<ContainerAllocator> Type;

  BatteryState_()
    : voltageNotSafety(0)
    , veryLowVoltageAlarm(0)
    , LowVoltageAlarm(0)
    , seriousLowCapacityAlarm(0)
    , LowCapacityAlarm(0)  {
    }
  BatteryState_(const ContainerAllocator& _alloc)
    : voltageNotSafety(0)
    , veryLowVoltageAlarm(0)
    , LowVoltageAlarm(0)
    , seriousLowCapacityAlarm(0)
    , LowCapacityAlarm(0)  {
  (void)_alloc;
    }



   typedef uint8_t _voltageNotSafety_type;
  _voltageNotSafety_type voltageNotSafety;

   typedef uint8_t _veryLowVoltageAlarm_type;
  _veryLowVoltageAlarm_type veryLowVoltageAlarm;

   typedef uint8_t _LowVoltageAlarm_type;
  _LowVoltageAlarm_type LowVoltageAlarm;

   typedef uint8_t _seriousLowCapacityAlarm_type;
  _seriousLowCapacityAlarm_type seriousLowCapacityAlarm;

   typedef uint8_t _LowCapacityAlarm_type;
  _LowCapacityAlarm_type LowCapacityAlarm;





  typedef boost::shared_ptr< ::dji_osdk_ros::BatteryState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::BatteryState_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryState_

typedef ::dji_osdk_ros::BatteryState_<std::allocator<void> > BatteryState;

typedef boost::shared_ptr< ::dji_osdk_ros::BatteryState > BatteryStatePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::BatteryState const> BatteryStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::BatteryState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::BatteryState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::BatteryState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::BatteryState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5243c6a8356e946f828c69a991da7334";
  }

  static const char* value(const ::dji_osdk_ros::BatteryState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5243c6a8356e946fULL;
  static const uint64_t static_value2 = 0x828c69a991da7334ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/BatteryState";
  }

  static const char* value(const ::dji_osdk_ros::BatteryState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 voltageNotSafety # Generally caused by low temperature, the battery has electricity,\n\
                       # but the battery voltage is too low.\n\
uint8 veryLowVoltageAlarm\n\
uint8 LowVoltageAlarm\n\
uint8 seriousLowCapacityAlarm\n\
uint8 LowCapacityAlarm\n\
";
  }

  static const char* value(const ::dji_osdk_ros::BatteryState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.voltageNotSafety);
      stream.next(m.veryLowVoltageAlarm);
      stream.next(m.LowVoltageAlarm);
      stream.next(m.seriousLowCapacityAlarm);
      stream.next(m.LowCapacityAlarm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::BatteryState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::BatteryState_<ContainerAllocator>& v)
  {
    s << indent << "voltageNotSafety: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.voltageNotSafety);
    s << indent << "veryLowVoltageAlarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.veryLowVoltageAlarm);
    s << indent << "LowVoltageAlarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LowVoltageAlarm);
    s << indent << "seriousLowCapacityAlarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.seriousLowCapacityAlarm);
    s << indent << "LowCapacityAlarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LowCapacityAlarm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_BATTERYSTATE_H
