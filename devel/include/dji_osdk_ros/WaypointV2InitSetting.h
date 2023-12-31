// Generated by gencpp from file dji_osdk_ros/WaypointV2InitSetting.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_WAYPOINTV2INITSETTING_H
#define DJI_OSDK_ROS_MESSAGE_WAYPOINTV2INITSETTING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/WaypointV2.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct WaypointV2InitSetting_
{
  typedef WaypointV2InitSetting_<ContainerAllocator> Type;

  WaypointV2InitSetting_()
    : missionID(0)
    , missTotalLen(0)
    , repeatTimes(0)
    , finishedAction(0)
    , maxFlightSpeed(0.0)
    , autoFlightSpeed(0.0)
    , exitMissionOnRCSignalLost(0)
    , gotoFirstWaypointMode(0)
    , mission()  {
    }
  WaypointV2InitSetting_(const ContainerAllocator& _alloc)
    : missionID(0)
    , missTotalLen(0)
    , repeatTimes(0)
    , finishedAction(0)
    , maxFlightSpeed(0.0)
    , autoFlightSpeed(0.0)
    , exitMissionOnRCSignalLost(0)
    , gotoFirstWaypointMode(0)
    , mission(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _missionID_type;
  _missionID_type missionID;

   typedef uint16_t _missTotalLen_type;
  _missTotalLen_type missTotalLen;

   typedef uint8_t _repeatTimes_type;
  _repeatTimes_type repeatTimes;

   typedef uint8_t _finishedAction_type;
  _finishedAction_type finishedAction;

   typedef float _maxFlightSpeed_type;
  _maxFlightSpeed_type maxFlightSpeed;

   typedef float _autoFlightSpeed_type;
  _autoFlightSpeed_type autoFlightSpeed;

   typedef uint8_t _exitMissionOnRCSignalLost_type;
  _exitMissionOnRCSignalLost_type exitMissionOnRCSignalLost;

   typedef uint8_t _gotoFirstWaypointMode_type;
  _gotoFirstWaypointMode_type gotoFirstWaypointMode;

   typedef std::vector< ::dji_osdk_ros::WaypointV2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dji_osdk_ros::WaypointV2_<ContainerAllocator> >::other >  _mission_type;
  _mission_type mission;



  enum {
    DJIWaypointV2MissionFinishedNoAction = 0u,
    DJIWaypointV2MissionFinishedGoHome = 1u,
    DJIWaypointV2MissionFinishedAutoLanding = 2u,
    DJIWaypointV2MissionFinishedGoToFirstWaypoint = 3u,
    DJIWaypointV2MissionFinishedContinueUntilStop = 4u,
    DJIWaypointV2MissionGotoFirstWaypointModeSafely = 0u,
    DJIWaypointV2MissionGotoFirstWaypointModePointToPoint = 1u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointV2InitSetting_

typedef ::dji_osdk_ros::WaypointV2InitSetting_<std::allocator<void> > WaypointV2InitSetting;

typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2InitSetting > WaypointV2InitSettingPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2InitSetting const> WaypointV2InitSettingConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'dji_osdk_ros': ['/home/dji/ningzian_ws/src/Onboard-SDK-ROS/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fffdae5151f5e22d80b65f645433d20c";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfffdae5151f5e22dULL;
  static const uint64_t static_value2 = 0x80b65f645433d20cULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/WaypointV2InitSetting";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# @brief Waypoint V2 Mission Initialization settings\n\
# @details This is one of the few structs in the OSDK codebase that\n\
# is used in both a sending and a receiving API.\n\
\n\
#constant for finishedAction\n\
uint8 DJIWaypointV2MissionFinishedNoAction = 0  # No further action will be taken.\n\
                                                # The aircraft can be controlled by the remote controller.\n\
uint8 DJIWaypointV2MissionFinishedGoHome = 1    # Goes home when the mission is finished. The aircraft will\n\
                                                # land directly if it is within 20 meters away from the home point.\n\
uint8 DJIWaypointV2MissionFinishedAutoLanding = 2  # The aircraft will land automatically at the last waypoint.\n\
uint8 DJIWaypointV2MissionFinishedGoToFirstWaypoint = 3  # The aircraft will go back to the first waypoint and hover.\n\
uint8 DJIWaypointV2MissionFinishedContinueUntilStop = 4  #  When the aircraft reaches its final waypoint, it will hover without ending the\n\
                                                         # mission. The joystick  can still be used to pull the aircraft back along its\n\
                                                         # previous waypoints. The only way this mission  can end is if stopMission is\n\
                                                         # called\n\
\n\
#constant for gotoFirstWaypintMode\n\
uint8 DJIWaypointV2MissionGotoFirstWaypointModeSafely = 0 # Go to the waypoint safely. The aircraft will rise to the same altitude of the\n\
                                                          # waypoint if the current  altitude is lower then the waypoint altitude. It then\n\
                                                          # goes to the waypoint coordinate from the current  altitude, and proceeds to the\n\
                                                          # altitude of the waypoint.\n\
uint8 DJIWaypointV2MissionGotoFirstWaypointModePointToPoint = 1 # Go to the waypoint from the current aircraft point to the waypoint directly.\n\
\n\
\n\
uint32 missionID    # The Mission ID. Use to distinguish　different mission\n\
uint16 missTotalLen # The Mission waypoint total length, could not exceed 65535\n\
uint8 repeatTimes   # Mission execution can be repeated more than once. A value of 0 means the mission\n\
                    # only executes once, and does not repeat. A value of 1 means the mission will\n\
                    # execute a total of two times.\n\
uint8 finishedAction # Action the aircraft will take when the waypoint mission is complete.\n\
\n\
# While the aircraft is travelling between waypoints, you can offset its speed by\n\
# using the throttle joystick  on the remote controller. `maxFlightSpeed` is this\n\
# offset when the joystick is pushed  to maximum deflection. For example, If\n\
# maxFlightSpeed is 10 m/s, then pushing the throttle joystick all the  way up\n\
# will add 10 m/s to the aircraft speed, while pushing down will subtract 10 m/s\n\
# from the aircraft  speed. If the remote controller stick is not at maximum\n\
# deflection, then the offset speed will be  interpolated between [0,\n\
# `maxFlightSpeed`] with a resolution of 1000 steps. If the  offset speed is\n\
# negative, then the aircraft will fly backwards to previous waypoints. When it\n\
# reaches the  first waypoint, it will then hover in place until a positive speed\n\
# is  applied. `maxFlightSpeed` has a range of [2,15] m/s.\n\
# unit: m/s\n\
float32 maxFlightSpeed\n\
\n\
# The base automatic speed of the aircraft as it moves between waypoints with\n\
# range [-15, 15] m/s. The  aircraft's actual speed is a combination of the base\n\
# automatic speed, and the speed control given by  the throttle joystick on the\n\
# remote controller. If `autoFlightSpeed` >0: Actual  speed is `autoFlightSpeed` +\n\
# Joystick Speed (with combined max  of `maxFlightSpeed`) If `autoFlightSpeed` =0:\n\
# Actual speed is  controlled only by the remote controller joystick. If\n\
# `autoFlightSpeed` <0 and the  aircraft is at the first waypoint, the aircraft\n\
# will hover in place until the speed is made positive by  the remote controller\n\
# joystick.\n\
# unit: m/s\n\
float32 autoFlightSpeed\n\
\n\
uint8 exitMissionOnRCSignalLost    # Determines whether the mission should stop when connection between the  aircraft\n\
                                   # and remote controller is lost. Default is `NO`.\n\
\n\
uint8 gotoFirstWaypointMode        # Defines how the aircraft will go to the first waypoint from its current\n\
                                   # position. Default  is ``DJIWaypointV2MissionV2_DJIWaypointV2MissionGotoWaypointMode_Safely``.\n\
\n\
WaypointV2[] mission\n\
================================================================================\n\
MSG: dji_osdk_ros/WaypointV2\n\
# The struct represents a target point in the waypoint mission. For a waypoint\n\
\n\
#constant for flightpathMode\n\
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurve = 0  #In the mission, the aircraft will go to the waypoint along a curve and fly past the waypoint.\n\
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurveAndStop = 1 #In the mission, the aircraft will go to the waypoint along a curve and stop at the waypoint.\n\
uint8 DJIWaypointV2FlightPathModeGoToPointInAStraightLineAndStop = 2  #In the mission, the aircraft will go to the waypoint along a straight line and stop at the waypoint.\n\
uint8 DJIWaypointV2FlightPathModeCoordinateTurn = 3   #In the mission, the aircraft will fly from the previous waypoint to the next waypoint along a smooth curve without stopping at this waypoint.\n\
                                                      #the next in a curved motion,  adhering to the ``DJIWaypointV2_dampingDistance``, which is\n\
                                                      #set in ``DJIWaypointV2``.\n\
uint8 DJIWaypointV2FlightPathModeGoToFirstPointAlongAStraightLine = 4  # In the mission, the aircraft will go to the first waypoint along a straight line.\n\
                                                                       # This is only valid for the first waypoint.\n\
uint8 DJIWaypointV2FlightPathModeStraightOut = 5   # Straight exit the Last waypoint, Only valid for last waypoint.\n\
uint8 DJIWaypointV2FlightPathModeUnknown = 255    # Unknown\n\
\n\
#constant for headMode\n\
uint8 DJIWaypointV2HeadingModeAuto = 0    # Aircraft's heading will always be in the direction of flight.\n\
uint8 DJIWaypointV2HeadingFixed    = 1    # Aircraft's heading will be set to the heading when reaching the first waypoint.\n\
                                          # Before reaching the first waypoint, the aircraft's heading can be controlled by\n\
                                          # the remote controller. When the aircraft reaches the first waypoint, its\n\
                                          # heading will be fixed.\n\
uint8 DJIWaypointV2HeadingManual   = 2    # The aircraft's heading in the mission can be controlled by the remote controller.\n\
uint8 DJIWaypointV2HeadingWaypointCustom = 3  # In the mission, the aircraft's heading will change dynamically and adapt to the heading set at the next waypoint.\n\
                                               # See ``DJIWaypointV2_heading`` to preset the heading.\n\
uint8 DJIWaypointV2HeadingTowardPointOfInterest = 4 # Aircraft's heading will always toward point of interest.\n\
                                                    # using ``DJIWaypointV2_pointOfInterest`` setting point of interest coordiate and ``DJIWaypointV2_pointOfInterestAltitude``\n\
                                                    # setting point of interset altitute.\n\
uint8 DJIWaypointV2HeadingGimbalYawFollow  = 5   # The aircraft's heading rotate simultaneously with its gimbal's yaw.\n\
uint8 DJIWaypointV2HeadingUnknown = 255         # Unknown.\n\
\n\
#constant for turnMode\n\
uint8 DJIWaypointV2TurnModeClockwise = 0  # The aircraft's heading rotates clockwise.\n\
uint8 DJIWaypointV2TurnModeCounterClockwise = 1   # The aircraft's heading rotates counterclockwise.\n\
uint8 DJIWaypointV2TurnModeUnknown = 255    # Changes the heading of the aircraft by rotating the aircraft anti-clockwise.\n\
\n\
\n\
\n\
#  mission, a flight route  consists of multiple `WaypointV2` objects.\n\
float64 longitude  # waypoint position relative to WayPointV2InitSettings's reference point.unit: m\n\
float64 latitude\n\
float32 relativeHeight  # relative to takeoff height\n\
uint8   waypointType    # Waypoint flight path mode\n\
uint8   headingMode     # Represents current aircraft's heading mode on current waypoint.\n\
WaypointV2Config  config          # Represents current waypoint's speed config.\n\
uint16  dampingDistance\n\
float32 heading         # The heading to which the aircraft will rotate by the time it reaches the\n\
                        # waypoint. The aircraft heading  will gradually change between two waypoints with\n\
                        # different headings if the waypoint  mission's `headingMode` is set  to\n\
                        # 'DJIWaypointV2_DJIWaypointV2HeadingMode_WaypointCustom`. A heading has a range of\n\
                        # [-180, 180] degrees, where 0 represents True North.\n\
uint8 turnMode          # Determines whether the aircraft will turn clockwise or anticlockwise when\n\
                        # changing its heading.\n\
# Property is used when ``DJIWaypointV2_headingMode`` is\n\
# ``DJIWaypointV2_DJIWaypointV2HeadingMode_TowardPointOfInterest``.\n\
# Aircraft will always be heading to point while executing mission. Default is\n\
# \"kCLLocationCoordinate2DInvalid\".\n\
float32 positionX       # X distance to reference point, North is positive\n\
float32 positionY       # Y distance to reference point, East is positive\n\
float32 positionZ       # Z distance to reference point, UP is positive\n\
\n\
# While the aircraft is travelling between waypoints, you can offset its speed by\n\
# using the throttle joystick on the remote controller. \"maxFlightSpeed\" is this\n\
# offset when the joystick is pushed to maximum deflection. For example, If\n\
# maxFlightSpeed is 10 m/s, then pushing the throttle joystick all the way up will\n\
# add 10 m/s to the aircraft speed, while pushing down will subtract 10 m/s from\n\
# the aircraft speed. If the remote controller stick is not at maximum deflection,\n\
# then the offset speed will be interpolated between \"[0, maxFlightSpeed]\"\" with a\n\
# resolution of 1000 steps. If the offset speed is negative, then the aircraft\n\
# will fly backwards to previous waypoints. When it reaches the first waypoint, it\n\
# will then hover in place until a positive speed is applied. \"maxFlightSpeed\" has\n\
# a range of [2,15] m/s.\n\
float32 maxFlightSpeed\n\
\n\
# The base automatic speed of the aircraft as it moves between waypoints with\n\
# range [-15, 15] m/s. The aircraft's actual speed is a combination of the base\n\
# automatic speed, and the speed control given by the throttle joystick on the\n\
# remote controller. If \"autoFlightSpeed >0\": Actual speed is \"autoFlightSpeed\" +\n\
# Joystick Speed (with combined max of \"maxFlightSpeed\") If \"autoFlightSpeed =0\":\n\
# Actual speed is controlled only by the remote controller joystick. If\n\
# autoFlightSpeed <0\" and the aircraft is at the first waypoint, the aircraft\n\
# will hover in place until the speed is made positive by the remote controller\n\
# joystick. In flight controller firmware 3.2.10.0 or above, different speeds\n\
# between individual waypoints can also be set in waypoint objects which will\n\
# overwrite \"autoFlightSpeed\".\n\
float32 autoFlightSpeed\n\
================================================================================\n\
MSG: dji_osdk_ros/WaypointV2Config\n\
# Represents current waypoint's speed config.\n\
# 0: set local waypoint's cruise speed,\n\
# 1: unset global waypoint's cruise speed*/\n\
uint8  useLocalCruiseVel\n\
# 0: set local waypoint's max speed,\n\
# 1: unset global waypoint's max speed*/\n\
uint8  useLocalMaxVel\n\
";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.missionID);
      stream.next(m.missTotalLen);
      stream.next(m.repeatTimes);
      stream.next(m.finishedAction);
      stream.next(m.maxFlightSpeed);
      stream.next(m.autoFlightSpeed);
      stream.next(m.exitMissionOnRCSignalLost);
      stream.next(m.gotoFirstWaypointMode);
      stream.next(m.mission);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointV2InitSetting_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::WaypointV2InitSetting_<ContainerAllocator>& v)
  {
    s << indent << "missionID: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.missionID);
    s << indent << "missTotalLen: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.missTotalLen);
    s << indent << "repeatTimes: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.repeatTimes);
    s << indent << "finishedAction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.finishedAction);
    s << indent << "maxFlightSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.maxFlightSpeed);
    s << indent << "autoFlightSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.autoFlightSpeed);
    s << indent << "exitMissionOnRCSignalLost: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exitMissionOnRCSignalLost);
    s << indent << "gotoFirstWaypointMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gotoFirstWaypointMode);
    s << indent << "mission[]" << std::endl;
    for (size_t i = 0; i < v.mission.size(); ++i)
    {
      s << indent << "  mission[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dji_osdk_ros::WaypointV2_<ContainerAllocator> >::stream(s, indent + "    ", v.mission[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_WAYPOINTV2INITSETTING_H
