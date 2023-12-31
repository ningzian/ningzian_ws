# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/WaypointV2MissionEventPush.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WaypointV2MissionEventPush(genpy.Message):
  _md5sum = "c77093b1b7454aae16109cab2468e222"
  _type = "dji_osdk_ros/WaypointV2MissionEventPush"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 event
uint32 FCTimestamp
#ID:0x01
uint8 interruptReason #0x00:rc triggered interrupt

#ID:0x02
uint8 recoverProcess #0x00:finished pause recover

#ID:0x03
uint8 finishReason #0x00:finished normally; 0x10:External user trigger ended successfully

#ID:0x10
uint16 waypointIndex

#ID:0x11
uint8 currentMissionExecNum
uint8 finishedAllExecNum  #0:not finished; 1:finished all exec num"""
  __slots__ = ['event','FCTimestamp','interruptReason','recoverProcess','finishReason','waypointIndex','currentMissionExecNum','finishedAllExecNum']
  _slot_types = ['uint8','uint32','uint8','uint8','uint8','uint16','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       event,FCTimestamp,interruptReason,recoverProcess,finishReason,waypointIndex,currentMissionExecNum,finishedAllExecNum

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WaypointV2MissionEventPush, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.event is None:
        self.event = 0
      if self.FCTimestamp is None:
        self.FCTimestamp = 0
      if self.interruptReason is None:
        self.interruptReason = 0
      if self.recoverProcess is None:
        self.recoverProcess = 0
      if self.finishReason is None:
        self.finishReason = 0
      if self.waypointIndex is None:
        self.waypointIndex = 0
      if self.currentMissionExecNum is None:
        self.currentMissionExecNum = 0
      if self.finishedAllExecNum is None:
        self.finishedAllExecNum = 0
    else:
      self.event = 0
      self.FCTimestamp = 0
      self.interruptReason = 0
      self.recoverProcess = 0
      self.finishReason = 0
      self.waypointIndex = 0
      self.currentMissionExecNum = 0
      self.finishedAllExecNum = 0

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
      buff.write(_get_struct_BI3BH2B().pack(_x.event, _x.FCTimestamp, _x.interruptReason, _x.recoverProcess, _x.finishReason, _x.waypointIndex, _x.currentMissionExecNum, _x.finishedAllExecNum))
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
      end += 12
      (_x.event, _x.FCTimestamp, _x.interruptReason, _x.recoverProcess, _x.finishReason, _x.waypointIndex, _x.currentMissionExecNum, _x.finishedAllExecNum,) = _get_struct_BI3BH2B().unpack(str[start:end])
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
      buff.write(_get_struct_BI3BH2B().pack(_x.event, _x.FCTimestamp, _x.interruptReason, _x.recoverProcess, _x.finishReason, _x.waypointIndex, _x.currentMissionExecNum, _x.finishedAllExecNum))
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
      end += 12
      (_x.event, _x.FCTimestamp, _x.interruptReason, _x.recoverProcess, _x.finishReason, _x.waypointIndex, _x.currentMissionExecNum, _x.finishedAllExecNum,) = _get_struct_BI3BH2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_BI3BH2B = None
def _get_struct_BI3BH2B():
    global _struct_BI3BH2B
    if _struct_BI3BH2B is None:
        _struct_BI3BH2B = struct.Struct("<BI3BH2B")
    return _struct_BI3BH2B
