# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/HMSPushInfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class HMSPushInfo(genpy.Message):
  _md5sum = "ce70d5cd1d8f70130b2a622841cf2bac"
  _type = "dji_osdk_ros/HMSPushInfo"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 alarmID     #/*! error code*/
uint8  sensorIndex #/*! fault sensor's index*/
uint8  reportLevel #/*! fault level ,0-4,0 is no error,4 is highest*/"""
  __slots__ = ['alarmID','sensorIndex','reportLevel']
  _slot_types = ['uint32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       alarmID,sensorIndex,reportLevel

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HMSPushInfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.alarmID is None:
        self.alarmID = 0
      if self.sensorIndex is None:
        self.sensorIndex = 0
      if self.reportLevel is None:
        self.reportLevel = 0
    else:
      self.alarmID = 0
      self.sensorIndex = 0
      self.reportLevel = 0

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
      buff.write(_get_struct_I2B().pack(_x.alarmID, _x.sensorIndex, _x.reportLevel))
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
      end += 6
      (_x.alarmID, _x.sensorIndex, _x.reportLevel,) = _get_struct_I2B().unpack(str[start:end])
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
      buff.write(_get_struct_I2B().pack(_x.alarmID, _x.sensorIndex, _x.reportLevel))
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
      end += 6
      (_x.alarmID, _x.sensorIndex, _x.reportLevel,) = _get_struct_I2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I2B = None
def _get_struct_I2B():
    global _struct_I2B
    if _struct_I2B is None:
        _struct_I2B = struct.Struct("<I2B")
    return _struct_I2B
