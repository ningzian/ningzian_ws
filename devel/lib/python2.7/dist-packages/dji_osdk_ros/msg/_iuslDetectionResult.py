# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/iuslDetectionResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class iuslDetectionResult(genpy.Message):
  _md5sum = "dae7cd9d9df656963a2f88cef4458177"
  _type = "dji_osdk_ros/iuslDetectionResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# time
float64 time

# boundingbox
int64 center_x
int64 center_y
int64 box_width
int64 box_height
int64 max_length

# camera state
float64 cam_pitch
float64 cam_yaw
float64 cam_roll
float64 cam_x
float64 cam_y
float64 cam_z

# laser state
float64 laser_dis

"""
  __slots__ = ['time','center_x','center_y','box_width','box_height','max_length','cam_pitch','cam_yaw','cam_roll','cam_x','cam_y','cam_z','laser_dis']
  _slot_types = ['float64','int64','int64','int64','int64','int64','float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       time,center_x,center_y,box_width,box_height,max_length,cam_pitch,cam_yaw,cam_roll,cam_x,cam_y,cam_z,laser_dis

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(iuslDetectionResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.time is None:
        self.time = 0.
      if self.center_x is None:
        self.center_x = 0
      if self.center_y is None:
        self.center_y = 0
      if self.box_width is None:
        self.box_width = 0
      if self.box_height is None:
        self.box_height = 0
      if self.max_length is None:
        self.max_length = 0
      if self.cam_pitch is None:
        self.cam_pitch = 0.
      if self.cam_yaw is None:
        self.cam_yaw = 0.
      if self.cam_roll is None:
        self.cam_roll = 0.
      if self.cam_x is None:
        self.cam_x = 0.
      if self.cam_y is None:
        self.cam_y = 0.
      if self.cam_z is None:
        self.cam_z = 0.
      if self.laser_dis is None:
        self.laser_dis = 0.
    else:
      self.time = 0.
      self.center_x = 0
      self.center_y = 0
      self.box_width = 0
      self.box_height = 0
      self.max_length = 0
      self.cam_pitch = 0.
      self.cam_yaw = 0.
      self.cam_roll = 0.
      self.cam_x = 0.
      self.cam_y = 0.
      self.cam_z = 0.
      self.laser_dis = 0.

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
      buff.write(_get_struct_d5q7d().pack(_x.time, _x.center_x, _x.center_y, _x.box_width, _x.box_height, _x.max_length, _x.cam_pitch, _x.cam_yaw, _x.cam_roll, _x.cam_x, _x.cam_y, _x.cam_z, _x.laser_dis))
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
      end += 104
      (_x.time, _x.center_x, _x.center_y, _x.box_width, _x.box_height, _x.max_length, _x.cam_pitch, _x.cam_yaw, _x.cam_roll, _x.cam_x, _x.cam_y, _x.cam_z, _x.laser_dis,) = _get_struct_d5q7d().unpack(str[start:end])
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
      buff.write(_get_struct_d5q7d().pack(_x.time, _x.center_x, _x.center_y, _x.box_width, _x.box_height, _x.max_length, _x.cam_pitch, _x.cam_yaw, _x.cam_roll, _x.cam_x, _x.cam_y, _x.cam_z, _x.laser_dis))
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
      end += 104
      (_x.time, _x.center_x, _x.center_y, _x.box_width, _x.box_height, _x.max_length, _x.cam_pitch, _x.cam_yaw, _x.cam_roll, _x.cam_x, _x.cam_y, _x.cam_z, _x.laser_dis,) = _get_struct_d5q7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_d5q7d = None
def _get_struct_d5q7d():
    global _struct_d5q7d
    if _struct_d5q7d is None:
        _struct_d5q7d = struct.Struct("<d5q7d")
    return _struct_d5q7d