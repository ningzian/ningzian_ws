# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/WaypointV2GimbalActuatorRotationParam.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WaypointV2GimbalActuatorRotationParam(genpy.Message):
  _md5sum = "d6369db5b1897817b8aad8457ecdbd81"
  _type = "dji_osdk_ros/WaypointV2GimbalActuatorRotationParam"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """  int16 x             # gimbal roll angle,  unit: 0.1 deg,range:[-3600, 3600]*/
  int16 y             # gimbal pitch angle, unit: 0.1 deg,range:[-3600, 3600]*/
  int16 z             # gimbal yaw angle,   unit: 0.1 deg,range:[-3600, 3600]*/
  uint8 ctrl_mode     # 0: absolute position control, 1:relative position control*/
  uint8 rollCmdIgnore # 0: roll command normal,  1: roll command ignore*/
  uint8 pitchCmdIgnore# 0: pitch command normal,  1: pitch command ignore*/
  uint8 yawCmdIgnore  # 0: yaw command normal,  1: yaw command ignore*/
  uint8 absYawModeRef # 0: absoluate rotate yaw relative to aircraft,
                      #  1: absoluate rotate yaw relative to North*/
  uint8 duationTime    # 0: rotate time,unit:0.1s, range[1,255]*/"""
  __slots__ = ['x','y','z','ctrl_mode','rollCmdIgnore','pitchCmdIgnore','yawCmdIgnore','absYawModeRef','duationTime']
  _slot_types = ['int16','int16','int16','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x,y,z,ctrl_mode,rollCmdIgnore,pitchCmdIgnore,yawCmdIgnore,absYawModeRef,duationTime

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WaypointV2GimbalActuatorRotationParam, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.z is None:
        self.z = 0
      if self.ctrl_mode is None:
        self.ctrl_mode = 0
      if self.rollCmdIgnore is None:
        self.rollCmdIgnore = 0
      if self.pitchCmdIgnore is None:
        self.pitchCmdIgnore = 0
      if self.yawCmdIgnore is None:
        self.yawCmdIgnore = 0
      if self.absYawModeRef is None:
        self.absYawModeRef = 0
      if self.duationTime is None:
        self.duationTime = 0
    else:
      self.x = 0
      self.y = 0
      self.z = 0
      self.ctrl_mode = 0
      self.rollCmdIgnore = 0
      self.pitchCmdIgnore = 0
      self.yawCmdIgnore = 0
      self.absYawModeRef = 0
      self.duationTime = 0

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
      buff.write(_get_struct_3h6B().pack(_x.x, _x.y, _x.z, _x.ctrl_mode, _x.rollCmdIgnore, _x.pitchCmdIgnore, _x.yawCmdIgnore, _x.absYawModeRef, _x.duationTime))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.x, _x.y, _x.z, _x.ctrl_mode, _x.rollCmdIgnore, _x.pitchCmdIgnore, _x.yawCmdIgnore, _x.absYawModeRef, _x.duationTime,) = _get_struct_3h6B().unpack(str[start:end])
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
      buff.write(_get_struct_3h6B().pack(_x.x, _x.y, _x.z, _x.ctrl_mode, _x.rollCmdIgnore, _x.pitchCmdIgnore, _x.yawCmdIgnore, _x.absYawModeRef, _x.duationTime))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.x, _x.y, _x.z, _x.ctrl_mode, _x.rollCmdIgnore, _x.pitchCmdIgnore, _x.yawCmdIgnore, _x.absYawModeRef, _x.duationTime,) = _get_struct_3h6B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3h6B = None
def _get_struct_3h6B():
    global _struct_3h6B
    if _struct_3h6B is None:
        _struct_3h6B = struct.Struct("<3h6B")
    return _struct_3h6B
