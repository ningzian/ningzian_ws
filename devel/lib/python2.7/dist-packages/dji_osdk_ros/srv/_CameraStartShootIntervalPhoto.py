# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/CameraStartShootIntervalPhotoRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CameraStartShootIntervalPhotoRequest(genpy.Message):
  _md5sum = "1b60cc04bce35073619b77f1796df3f0"
  _type = "dji_osdk_ros/CameraStartShootIntervalPhotoRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
uint8 payload_index
uint8 photo_num_conticap
int16 time_interval
"""
  __slots__ = ['payload_index','photo_num_conticap','time_interval']
  _slot_types = ['uint8','uint8','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       payload_index,photo_num_conticap,time_interval

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CameraStartShootIntervalPhotoRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.payload_index is None:
        self.payload_index = 0
      if self.photo_num_conticap is None:
        self.photo_num_conticap = 0
      if self.time_interval is None:
        self.time_interval = 0
    else:
      self.payload_index = 0
      self.photo_num_conticap = 0
      self.time_interval = 0

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
      buff.write(_get_struct_2Bh().pack(_x.payload_index, _x.photo_num_conticap, _x.time_interval))
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
      end += 4
      (_x.payload_index, _x.photo_num_conticap, _x.time_interval,) = _get_struct_2Bh().unpack(str[start:end])
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
      buff.write(_get_struct_2Bh().pack(_x.payload_index, _x.photo_num_conticap, _x.time_interval))
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
      end += 4
      (_x.payload_index, _x.photo_num_conticap, _x.time_interval,) = _get_struct_2Bh().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2Bh = None
def _get_struct_2Bh():
    global _struct_2Bh
    if _struct_2Bh is None:
        _struct_2Bh = struct.Struct("<2Bh")
    return _struct_2Bh
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/CameraStartShootIntervalPhotoResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CameraStartShootIntervalPhotoResponse(genpy.Message):
  _md5sum = "eb13ac1f1354ccecb7941ee8fa2192e8"
  _type = "dji_osdk_ros/CameraStartShootIntervalPhotoResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
bool result
"""
  __slots__ = ['result']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CameraStartShootIntervalPhotoResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = False
    else:
      self.result = False

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
      buff.write(_get_struct_B().pack(self.result))
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
      (self.result,) = _get_struct_B().unpack(str[start:end])
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
      buff.write(_get_struct_B().pack(self.result))
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
      (self.result,) = _get_struct_B().unpack(str[start:end])
      self.result = bool(self.result)
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
class CameraStartShootIntervalPhoto(object):
  _type          = 'dji_osdk_ros/CameraStartShootIntervalPhoto'
  _md5sum = 'bb20f8f95cde73a4d8b41d0f5a0bdcdf'
  _request_class  = CameraStartShootIntervalPhotoRequest
  _response_class = CameraStartShootIntervalPhotoResponse
