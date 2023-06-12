# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/iuslEstimateState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class iuslEstimateState(genpy.Message):
  _md5sum = "57b0b6b128ef5651ce9b3fe0084e19a4"
  _type = "dji_osdk_ros/iuslEstimateState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# estimated target UAV state
bool est_ekf_OK
float64 est_tar_x
float64 est_tar_y
float64 est_tar_z
float64 est_tar_vx
float64 est_tar_vy

"""
  __slots__ = ['est_ekf_OK','est_tar_x','est_tar_y','est_tar_z','est_tar_vx','est_tar_vy']
  _slot_types = ['bool','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       est_ekf_OK,est_tar_x,est_tar_y,est_tar_z,est_tar_vx,est_tar_vy

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(iuslEstimateState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.est_ekf_OK is None:
        self.est_ekf_OK = False
      if self.est_tar_x is None:
        self.est_tar_x = 0.
      if self.est_tar_y is None:
        self.est_tar_y = 0.
      if self.est_tar_z is None:
        self.est_tar_z = 0.
      if self.est_tar_vx is None:
        self.est_tar_vx = 0.
      if self.est_tar_vy is None:
        self.est_tar_vy = 0.
    else:
      self.est_ekf_OK = False
      self.est_tar_x = 0.
      self.est_tar_y = 0.
      self.est_tar_z = 0.
      self.est_tar_vx = 0.
      self.est_tar_vy = 0.

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
      buff.write(_get_struct_B5d().pack(_x.est_ekf_OK, _x.est_tar_x, _x.est_tar_y, _x.est_tar_z, _x.est_tar_vx, _x.est_tar_vy))
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
      end += 41
      (_x.est_ekf_OK, _x.est_tar_x, _x.est_tar_y, _x.est_tar_z, _x.est_tar_vx, _x.est_tar_vy,) = _get_struct_B5d().unpack(str[start:end])
      self.est_ekf_OK = bool(self.est_ekf_OK)
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
      buff.write(_get_struct_B5d().pack(_x.est_ekf_OK, _x.est_tar_x, _x.est_tar_y, _x.est_tar_z, _x.est_tar_vx, _x.est_tar_vy))
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
      end += 41
      (_x.est_ekf_OK, _x.est_tar_x, _x.est_tar_y, _x.est_tar_z, _x.est_tar_vx, _x.est_tar_vy,) = _get_struct_B5d().unpack(str[start:end])
      self.est_ekf_OK = bool(self.est_ekf_OK)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B5d = None
def _get_struct_B5d():
    global _struct_B5d
    if _struct_B5d is None:
        _struct_B5d = struct.Struct("<B5d")
    return _struct_B5d
