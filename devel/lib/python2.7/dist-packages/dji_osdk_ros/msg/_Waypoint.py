# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/Waypoint.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Waypoint(genpy.Message):
  _md5sum = "1d0881fabe75ce713c47829a8aa66d90"
  _type = "dji_osdk_ros/Waypoint"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 latitude      # in degree
float64 longitude     # in degree
float32 altitude
int16 heading         #heading is in [-180,180]
uint16 staytime       # in second

"""
  __slots__ = ['latitude','longitude','altitude','heading','staytime']
  _slot_types = ['float64','float64','float32','int16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       latitude,longitude,altitude,heading,staytime

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Waypoint, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.latitude is None:
        self.latitude = 0.
      if self.longitude is None:
        self.longitude = 0.
      if self.altitude is None:
        self.altitude = 0.
      if self.heading is None:
        self.heading = 0
      if self.staytime is None:
        self.staytime = 0
    else:
      self.latitude = 0.
      self.longitude = 0.
      self.altitude = 0.
      self.heading = 0
      self.staytime = 0

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
      buff.write(_get_struct_2dfhH().pack(_x.latitude, _x.longitude, _x.altitude, _x.heading, _x.staytime))
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
      end += 24
      (_x.latitude, _x.longitude, _x.altitude, _x.heading, _x.staytime,) = _get_struct_2dfhH().unpack(str[start:end])
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
      buff.write(_get_struct_2dfhH().pack(_x.latitude, _x.longitude, _x.altitude, _x.heading, _x.staytime))
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
      end += 24
      (_x.latitude, _x.longitude, _x.altitude, _x.heading, _x.staytime,) = _get_struct_2dfhH().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2dfhH = None
def _get_struct_2dfhH():
    global _struct_2dfhH
    if _struct_2dfhH is None:
        _struct_2dfhH = struct.Struct("<2dfhH")
    return _struct_2dfhH
