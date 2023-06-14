# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/iuslUAVCtrlCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class iuslUAVCtrlCmd(genpy.Message):
  _md5sum = "201171de9b3e844efb0e68535a9bcbe9"
  _type = "dji_osdk_ros/iuslUAVCtrlCmd"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# for flight task
uint8 task  # 1 takeoff, 2 gohome, 3 hover, 4 ctrl

# for horizontal control
uint8 mode  # 1 for pos ctrl, 2 for vel ctrl
float64 x
float64 y

# altitude cmd
float64 z

# global yaw cmd
float64 yaw



"""
  __slots__ = ['task','mode','x','y','z','yaw']
  _slot_types = ['uint8','uint8','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       task,mode,x,y,z,yaw

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(iuslUAVCtrlCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.task is None:
        self.task = 0
      if self.mode is None:
        self.mode = 0
      if self.x is None:
        self.x = 0.
      if self.y is None:
        self.y = 0.
      if self.z is None:
        self.z = 0.
      if self.yaw is None:
        self.yaw = 0.
    else:
      self.task = 0
      self.mode = 0
      self.x = 0.
      self.y = 0.
      self.z = 0.
      self.yaw = 0.

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
      buff.write(_get_struct_2B4d().pack(_x.task, _x.mode, _x.x, _x.y, _x.z, _x.yaw))
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
      end += 34
      (_x.task, _x.mode, _x.x, _x.y, _x.z, _x.yaw,) = _get_struct_2B4d().unpack(str[start:end])
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
      buff.write(_get_struct_2B4d().pack(_x.task, _x.mode, _x.x, _x.y, _x.z, _x.yaw))
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
      end += 34
      (_x.task, _x.mode, _x.x, _x.y, _x.z, _x.yaw,) = _get_struct_2B4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B4d = None
def _get_struct_2B4d():
    global _struct_2B4d
    if _struct_2B4d is None:
        _struct_2B4d = struct.Struct("<2B4d")
    return _struct_2B4d