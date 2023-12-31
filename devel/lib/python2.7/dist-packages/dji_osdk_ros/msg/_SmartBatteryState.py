# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/SmartBatteryState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SmartBatteryState(genpy.Message):
  _md5sum = "2a0ddaf2e9bc1f4b0e5e1567435f698e"
  _type = "dji_osdk_ros/SmartBatteryState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 cellBreak                  # 0:normal;other:Undervoltage core index(0x01-0x1F)
uint8 selfCheckError             # enum-type: DJISmartBatterySelfCheck
uint8 batteryClosedReason        # enum-type: DJI_BETTERY_CLOSED_REASON
uint8 batSOHState                # enum-type: DJISmartBatterySohState*/
uint8 maxCycleLimit              # APP:cycle_limit*10*/
uint8 batteryCommunicationAbnormal
uint8 hasCellBreak
uint8 heatState                  # enum-type: DJISmartBatteryHeatState"""
  __slots__ = ['cellBreak','selfCheckError','batteryClosedReason','batSOHState','maxCycleLimit','batteryCommunicationAbnormal','hasCellBreak','heatState']
  _slot_types = ['uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cellBreak,selfCheckError,batteryClosedReason,batSOHState,maxCycleLimit,batteryCommunicationAbnormal,hasCellBreak,heatState

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SmartBatteryState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cellBreak is None:
        self.cellBreak = 0
      if self.selfCheckError is None:
        self.selfCheckError = 0
      if self.batteryClosedReason is None:
        self.batteryClosedReason = 0
      if self.batSOHState is None:
        self.batSOHState = 0
      if self.maxCycleLimit is None:
        self.maxCycleLimit = 0
      if self.batteryCommunicationAbnormal is None:
        self.batteryCommunicationAbnormal = 0
      if self.hasCellBreak is None:
        self.hasCellBreak = 0
      if self.heatState is None:
        self.heatState = 0
    else:
      self.cellBreak = 0
      self.selfCheckError = 0
      self.batteryClosedReason = 0
      self.batSOHState = 0
      self.maxCycleLimit = 0
      self.batteryCommunicationAbnormal = 0
      self.hasCellBreak = 0
      self.heatState = 0

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
      buff.write(_get_struct_8B().pack(_x.cellBreak, _x.selfCheckError, _x.batteryClosedReason, _x.batSOHState, _x.maxCycleLimit, _x.batteryCommunicationAbnormal, _x.hasCellBreak, _x.heatState))
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
      end += 8
      (_x.cellBreak, _x.selfCheckError, _x.batteryClosedReason, _x.batSOHState, _x.maxCycleLimit, _x.batteryCommunicationAbnormal, _x.hasCellBreak, _x.heatState,) = _get_struct_8B().unpack(str[start:end])
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
      buff.write(_get_struct_8B().pack(_x.cellBreak, _x.selfCheckError, _x.batteryClosedReason, _x.batSOHState, _x.maxCycleLimit, _x.batteryCommunicationAbnormal, _x.hasCellBreak, _x.heatState))
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
      end += 8
      (_x.cellBreak, _x.selfCheckError, _x.batteryClosedReason, _x.batSOHState, _x.maxCycleLimit, _x.batteryCommunicationAbnormal, _x.hasCellBreak, _x.heatState,) = _get_struct_8B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8B = None
def _get_struct_8B():
    global _struct_8B
    if _struct_8B is None:
        _struct_8B = struct.Struct("<8B")
    return _struct_8B
