# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/MissionHpGetInfoRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MissionHpGetInfoRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "dji_osdk_ros/MissionHpGetInfoRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MissionHpGetInfoRequest, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
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
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/MissionHpGetInfoResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dji_osdk_ros.msg

class MissionHpGetInfoResponse(genpy.Message):
  _md5sum = "8c08f93488e030961f6001dc630fd2c2"
  _type = "dji_osdk_ros/MissionHpGetInfoResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """MissionHotpointTask hotpoint_task

uint8 cmd_set
uint8 cmd_id
uint32 ack_data

================================================================================
MSG: dji_osdk_ros/MissionHotpointTask
float64 latitude  # degree
float64 longitude # degree
float64 altitude  # meter
float64 radius    # meter
float32 angular_speed #deg/s
uint8 is_clockwise
uint8 start_point
uint8 yaw_mode
"""
  __slots__ = ['hotpoint_task','cmd_set','cmd_id','ack_data']
  _slot_types = ['dji_osdk_ros/MissionHotpointTask','uint8','uint8','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       hotpoint_task,cmd_set,cmd_id,ack_data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MissionHpGetInfoResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.hotpoint_task is None:
        self.hotpoint_task = dji_osdk_ros.msg.MissionHotpointTask()
      if self.cmd_set is None:
        self.cmd_set = 0
      if self.cmd_id is None:
        self.cmd_id = 0
      if self.ack_data is None:
        self.ack_data = 0
    else:
      self.hotpoint_task = dji_osdk_ros.msg.MissionHotpointTask()
      self.cmd_set = 0
      self.cmd_id = 0
      self.ack_data = 0

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
      buff.write(_get_struct_4df5BI().pack(_x.hotpoint_task.latitude, _x.hotpoint_task.longitude, _x.hotpoint_task.altitude, _x.hotpoint_task.radius, _x.hotpoint_task.angular_speed, _x.hotpoint_task.is_clockwise, _x.hotpoint_task.start_point, _x.hotpoint_task.yaw_mode, _x.cmd_set, _x.cmd_id, _x.ack_data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.hotpoint_task is None:
        self.hotpoint_task = dji_osdk_ros.msg.MissionHotpointTask()
      end = 0
      _x = self
      start = end
      end += 45
      (_x.hotpoint_task.latitude, _x.hotpoint_task.longitude, _x.hotpoint_task.altitude, _x.hotpoint_task.radius, _x.hotpoint_task.angular_speed, _x.hotpoint_task.is_clockwise, _x.hotpoint_task.start_point, _x.hotpoint_task.yaw_mode, _x.cmd_set, _x.cmd_id, _x.ack_data,) = _get_struct_4df5BI().unpack(str[start:end])
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
      buff.write(_get_struct_4df5BI().pack(_x.hotpoint_task.latitude, _x.hotpoint_task.longitude, _x.hotpoint_task.altitude, _x.hotpoint_task.radius, _x.hotpoint_task.angular_speed, _x.hotpoint_task.is_clockwise, _x.hotpoint_task.start_point, _x.hotpoint_task.yaw_mode, _x.cmd_set, _x.cmd_id, _x.ack_data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.hotpoint_task is None:
        self.hotpoint_task = dji_osdk_ros.msg.MissionHotpointTask()
      end = 0
      _x = self
      start = end
      end += 45
      (_x.hotpoint_task.latitude, _x.hotpoint_task.longitude, _x.hotpoint_task.altitude, _x.hotpoint_task.radius, _x.hotpoint_task.angular_speed, _x.hotpoint_task.is_clockwise, _x.hotpoint_task.start_point, _x.hotpoint_task.yaw_mode, _x.cmd_set, _x.cmd_id, _x.ack_data,) = _get_struct_4df5BI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4df5BI = None
def _get_struct_4df5BI():
    global _struct_4df5BI
    if _struct_4df5BI is None:
        _struct_4df5BI = struct.Struct("<4df5BI")
    return _struct_4df5BI
class MissionHpGetInfo(object):
  _type          = 'dji_osdk_ros/MissionHpGetInfo'
  _md5sum = '8c08f93488e030961f6001dc630fd2c2'
  _request_class  = MissionHpGetInfoRequest
  _response_class = MissionHpGetInfoResponse
