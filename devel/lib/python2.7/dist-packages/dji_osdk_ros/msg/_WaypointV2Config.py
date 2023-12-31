# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/WaypointV2Config.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WaypointV2Config(genpy.Message):
  _md5sum = "32f75247c8f43b9a30c17e7ebb7bf75b"
  _type = "dji_osdk_ros/WaypointV2Config"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Represents current waypoint's speed config.
# 0: set local waypoint's cruise speed,
# 1: unset global waypoint's cruise speed*/
uint8  useLocalCruiseVel
# 0: set local waypoint's max speed,
# 1: unset global waypoint's max speed*/
uint8  useLocalMaxVel"""
  __slots__ = ['useLocalCruiseVel','useLocalMaxVel']
  _slot_types = ['uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       useLocalCruiseVel,useLocalMaxVel

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WaypointV2Config, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.useLocalCruiseVel is None:
        self.useLocalCruiseVel = 0
      if self.useLocalMaxVel is None:
        self.useLocalMaxVel = 0
    else:
      self.useLocalCruiseVel = 0
      self.useLocalMaxVel = 0

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
      buff.write(_get_struct_2B().pack(_x.useLocalCruiseVel, _x.useLocalMaxVel))
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
      end += 2
      (_x.useLocalCruiseVel, _x.useLocalMaxVel,) = _get_struct_2B().unpack(str[start:end])
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
      buff.write(_get_struct_2B().pack(_x.useLocalCruiseVel, _x.useLocalMaxVel))
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
      end += 2
      (_x.useLocalCruiseVel, _x.useLocalMaxVel,) = _get_struct_2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
