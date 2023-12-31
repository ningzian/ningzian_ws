# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/MissionWaypointTask.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dji_osdk_ros.msg

class MissionWaypointTask(genpy.Message):
  _md5sum = "c869e0f592c937d8202723285e6957d0"
  _type = "dji_osdk_ros/MissionWaypointTask"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# constant for action_on_finish
uint8 FINISH_NO_ACTION       = 0  # no action
uint8 FINISH_RETURN_TO_HOME  = 1  # return to home
uint8 FINISH_AUTO_LANDING    = 2  # auto landing
uint8 FINISH_RETURN_TO_POINT = 3  # return to point 0
uint8 FINISH_NO_EXIT         = 4  # infinite mode， no exit

# constant for yaw_mode
uint8 YAW_MODE_AUTO     = 0       # auto mode (point to next waypoint)
uint8 YAW_MODE_LOCK     = 1       # lock as an initial value
uint8 YAW_MODE_RC       = 2       # controlled by RC
uint8 YAW_MODE_WAYPOINT = 3       # use waypoint's yaw(tgt_yaw)

# constant for trace_mode
uint8 TRACE_POINT       = 0       # point to point, after reaching the target waypoint hover, complete waypt action (if any), then fly to the next waypt
uint8 TRACE_COORDINATED = 1       # 1: Coordinated turn mode, smooth transition between waypts, no waypts task

# constants for action_on_rc_lost
uint8 ACTION_FREE       = 0       # exit waypoint and failsafe
uint8 ACTION_AUTO       = 1       # continue the waypoint

# constants for gimbal_pitch_mode
uint8 GIMBAL_PITCH_FREE = 0       # free mode, no control on gimbal
uint8 GIMBAL_PITCH_AUTO = 1       # auto mode, Smooth transition between waypoints on gimbal

float32 velocity_range    # Maximum speed joystick input(2~15m)
float32 idle_velocity     # Cruising Speed (without joystick input, no more than vel_cmd_range)
uint8 action_on_finish    # See constants above for possible actions
uint8 mission_exec_times  # 1: once ; 2: twice
uint8 yaw_mode            # see constants above for possible yaw modes
uint8 trace_mode          # see constants above for possible trace modes
uint8 action_on_rc_lost   # see constants above for possible actions
uint8 gimbal_pitch_mode   # see constants above for pissible gimbal modes
MissionWaypoint[] mission_waypoint  # a vector of waypoints


================================================================================
MSG: dji_osdk_ros/MissionWaypoint
float64 latitude          # degree
float64 longitude         # degree
float32 altitude          # relative altitude from takeoff point
float32 damping_distance  # Bend length (effective coordinated turn mode only)
int16 target_yaw          # Yaw (degree)
int16 target_gimbal_pitch # Gimbal pitch
uint8 turn_mode           # 0: clockwise, 1: counter-clockwise
uint8 has_action          # 0: no, 1: yes
uint16 action_time_limit
MissionWaypointAction waypoint_action

================================================================================
MSG: dji_osdk_ros/MissionWaypointAction
# action_repeat
# lower 4 bit: Total number of actions
# hight 4 bit: Total running times
uint8 action_repeat
uint8[16] command_list
uint16[16] command_parameter
"""
  # Pseudo-constants
  FINISH_NO_ACTION = 0
  FINISH_RETURN_TO_HOME = 1
  FINISH_AUTO_LANDING = 2
  FINISH_RETURN_TO_POINT = 3
  FINISH_NO_EXIT = 4
  YAW_MODE_AUTO = 0
  YAW_MODE_LOCK = 1
  YAW_MODE_RC = 2
  YAW_MODE_WAYPOINT = 3
  TRACE_POINT = 0
  TRACE_COORDINATED = 1
  ACTION_FREE = 0
  ACTION_AUTO = 1
  GIMBAL_PITCH_FREE = 0
  GIMBAL_PITCH_AUTO = 1

  __slots__ = ['velocity_range','idle_velocity','action_on_finish','mission_exec_times','yaw_mode','trace_mode','action_on_rc_lost','gimbal_pitch_mode','mission_waypoint']
  _slot_types = ['float32','float32','uint8','uint8','uint8','uint8','uint8','uint8','dji_osdk_ros/MissionWaypoint[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       velocity_range,idle_velocity,action_on_finish,mission_exec_times,yaw_mode,trace_mode,action_on_rc_lost,gimbal_pitch_mode,mission_waypoint

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MissionWaypointTask, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.velocity_range is None:
        self.velocity_range = 0.
      if self.idle_velocity is None:
        self.idle_velocity = 0.
      if self.action_on_finish is None:
        self.action_on_finish = 0
      if self.mission_exec_times is None:
        self.mission_exec_times = 0
      if self.yaw_mode is None:
        self.yaw_mode = 0
      if self.trace_mode is None:
        self.trace_mode = 0
      if self.action_on_rc_lost is None:
        self.action_on_rc_lost = 0
      if self.gimbal_pitch_mode is None:
        self.gimbal_pitch_mode = 0
      if self.mission_waypoint is None:
        self.mission_waypoint = []
    else:
      self.velocity_range = 0.
      self.idle_velocity = 0.
      self.action_on_finish = 0
      self.mission_exec_times = 0
      self.yaw_mode = 0
      self.trace_mode = 0
      self.action_on_rc_lost = 0
      self.gimbal_pitch_mode = 0
      self.mission_waypoint = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2f6B().pack(_x.velocity_range, _x.idle_velocity, _x.action_on_finish, _x.mission_exec_times, _x.yaw_mode, _x.trace_mode, _x.action_on_rc_lost, _x.gimbal_pitch_mode))
      length = len(self.mission_waypoint)
      buff.write(_struct_I.pack(length))
      for val1 in self.mission_waypoint:
        _x = val1
        buff.write(_get_struct_2d2f2h2BH().pack(_x.latitude, _x.longitude, _x.altitude, _x.damping_distance, _x.target_yaw, _x.target_gimbal_pitch, _x.turn_mode, _x.has_action, _x.action_time_limit))
        _v1 = val1.waypoint_action
        buff.write(_get_struct_B().pack(_v1.action_repeat))
        _x = _v1.command_list
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_get_struct_16B().pack(*_x))
        else:
          buff.write(_get_struct_16s().pack(_x))
        buff.write(_get_struct_16H().pack(*_v1.command_parameter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.mission_waypoint is None:
        self.mission_waypoint = None
      end = 0
      _x = self
      start = end
      end += 14
      (_x.velocity_range, _x.idle_velocity, _x.action_on_finish, _x.mission_exec_times, _x.yaw_mode, _x.trace_mode, _x.action_on_rc_lost, _x.gimbal_pitch_mode,) = _get_struct_2f6B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.mission_waypoint = []
      for i in range(0, length):
        val1 = dji_osdk_ros.msg.MissionWaypoint()
        _x = val1
        start = end
        end += 32
        (_x.latitude, _x.longitude, _x.altitude, _x.damping_distance, _x.target_yaw, _x.target_gimbal_pitch, _x.turn_mode, _x.has_action, _x.action_time_limit,) = _get_struct_2d2f2h2BH().unpack(str[start:end])
        _v2 = val1.waypoint_action
        start = end
        end += 1
        (_v2.action_repeat,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 16
        _v2.command_list = str[start:end]
        start = end
        end += 32
        _v2.command_parameter = _get_struct_16H().unpack(str[start:end])
        self.mission_waypoint.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2f6B().pack(_x.velocity_range, _x.idle_velocity, _x.action_on_finish, _x.mission_exec_times, _x.yaw_mode, _x.trace_mode, _x.action_on_rc_lost, _x.gimbal_pitch_mode))
      length = len(self.mission_waypoint)
      buff.write(_struct_I.pack(length))
      for val1 in self.mission_waypoint:
        _x = val1
        buff.write(_get_struct_2d2f2h2BH().pack(_x.latitude, _x.longitude, _x.altitude, _x.damping_distance, _x.target_yaw, _x.target_gimbal_pitch, _x.turn_mode, _x.has_action, _x.action_time_limit))
        _v3 = val1.waypoint_action
        buff.write(_get_struct_B().pack(_v3.action_repeat))
        _x = _v3.command_list
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_get_struct_16B().pack(*_x))
        else:
          buff.write(_get_struct_16s().pack(_x))
        buff.write(_v3.command_parameter.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.mission_waypoint is None:
        self.mission_waypoint = None
      end = 0
      _x = self
      start = end
      end += 14
      (_x.velocity_range, _x.idle_velocity, _x.action_on_finish, _x.mission_exec_times, _x.yaw_mode, _x.trace_mode, _x.action_on_rc_lost, _x.gimbal_pitch_mode,) = _get_struct_2f6B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.mission_waypoint = []
      for i in range(0, length):
        val1 = dji_osdk_ros.msg.MissionWaypoint()
        _x = val1
        start = end
        end += 32
        (_x.latitude, _x.longitude, _x.altitude, _x.damping_distance, _x.target_yaw, _x.target_gimbal_pitch, _x.turn_mode, _x.has_action, _x.action_time_limit,) = _get_struct_2d2f2h2BH().unpack(str[start:end])
        _v4 = val1.waypoint_action
        start = end
        end += 1
        (_v4.action_repeat,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 16
        _v4.command_list = str[start:end]
        start = end
        end += 32
        _v4.command_parameter = numpy.frombuffer(str[start:end], dtype=numpy.uint16, count=16)
        self.mission_waypoint.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2d2f2h2BH = None
def _get_struct_2d2f2h2BH():
    global _struct_2d2f2h2BH
    if _struct_2d2f2h2BH is None:
        _struct_2d2f2h2BH = struct.Struct("<2d2f2h2BH")
    return _struct_2d2f2h2BH
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_16H = None
def _get_struct_16H():
    global _struct_16H
    if _struct_16H is None:
        _struct_16H = struct.Struct("<16H")
    return _struct_16H
_struct_16B = None
def _get_struct_16B():
    global _struct_16B
    if _struct_16B is None:
        _struct_16B = struct.Struct("<16B")
    return _struct_16B
_struct_2f6B = None
def _get_struct_2f6B():
    global _struct_2f6B
    if _struct_2f6B is None:
        _struct_2f6B = struct.Struct("<2f6B")
    return _struct_2f6B
_struct_16s = None
def _get_struct_16s():
    global _struct_16s
    if _struct_16s is None:
        _struct_16s = struct.Struct("<16s")
    return _struct_16s
