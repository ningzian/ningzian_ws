# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/DroneArmControlRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DroneArmControlRequest(genpy.Message):
  _md5sum = "4a248cc5dda0e00340ef213205619580"
  _type = "dji_osdk_ros/DroneArmControlRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
uint8 DISARM_COMMAND = 0
uint8 ARM_COMMAND    = 1


uint8 arm
"""
  # Pseudo-constants
  DISARM_COMMAND = 0
  ARM_COMMAND = 1

  __slots__ = ['arm']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       arm

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DroneArmControlRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.arm is None:
        self.arm = 0
    else:
      self.arm = 0

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
      buff.write(_get_struct_B().pack(self.arm))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.arm,) = _get_struct_B().unpack(str[start:end])
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
      buff.write(_get_struct_B().pack(self.arm))
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
      start = end
      end += 1
      (self.arm,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/DroneArmControlResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DroneArmControlResponse(genpy.Message):
  _md5sum = "f03b0bc279b265c40946c1011df83013"
  _type = "dji_osdk_ros/DroneArmControlResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool result

uint8 cmd_set
uint8 cmd_id
uint32 ack_data

"""
  __slots__ = ['result','cmd_set','cmd_id','ack_data']
  _slot_types = ['bool','uint8','uint8','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result,cmd_set,cmd_id,ack_data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DroneArmControlResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = False
      if self.cmd_set is None:
        self.cmd_set = 0
      if self.cmd_id is None:
        self.cmd_id = 0
      if self.ack_data is None:
        self.ack_data = 0
    else:
      self.result = False
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
      buff.write(_get_struct_3BI().pack(_x.result, _x.cmd_set, _x.cmd_id, _x.ack_data))
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
      end += 7
      (_x.result, _x.cmd_set, _x.cmd_id, _x.ack_data,) = _get_struct_3BI().unpack(str[start:end])
      self.result = bool(self.result)
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
      buff.write(_get_struct_3BI().pack(_x.result, _x.cmd_set, _x.cmd_id, _x.ack_data))
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
      end += 7
      (_x.result, _x.cmd_set, _x.cmd_id, _x.ack_data,) = _get_struct_3BI().unpack(str[start:end])
      self.result = bool(self.result)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3BI = None
def _get_struct_3BI():
    global _struct_3BI
    if _struct_3BI is None:
        _struct_3BI = struct.Struct("<3BI")
    return _struct_3BI
class DroneArmControl(object):
  _type          = 'dji_osdk_ros/DroneArmControl'
  _md5sum = '0a8071a11c3d6b34ba24869e069f733c'
  _request_class  = DroneArmControlRequest
  _response_class = DroneArmControlResponse
