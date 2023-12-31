; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-msg)


;//! \htmlinclude Gimbal.msg.html

(cl:defclass <Gimbal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (ts
    :reader ts
    :initarg :ts
    :type cl:integer
    :initform 0)
   (mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0)
   (yaw
    :reader yaw
    :initarg :yaw
    :type cl:float
    :initform 0.0)
   (pitch
    :reader pitch
    :initarg :pitch
    :type cl:float
    :initform 0.0)
   (roll
    :reader roll
    :initarg :roll
    :type cl:float
    :initform 0.0))
)

(cl:defclass Gimbal (<Gimbal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Gimbal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Gimbal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-msg:<Gimbal> is deprecated: use dji_osdk_ros-msg:Gimbal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:header-val is deprecated.  Use dji_osdk_ros-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'ts-val :lambda-list '(m))
(cl:defmethod ts-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:ts-val is deprecated.  Use dji_osdk_ros-msg:ts instead.")
  (ts m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:mode-val is deprecated.  Use dji_osdk_ros-msg:mode instead.")
  (mode m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:yaw-val is deprecated.  Use dji_osdk_ros-msg:yaw instead.")
  (yaw m))

(cl:ensure-generic-function 'pitch-val :lambda-list '(m))
(cl:defmethod pitch-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:pitch-val is deprecated.  Use dji_osdk_ros-msg:pitch instead.")
  (pitch m))

(cl:ensure-generic-function 'roll-val :lambda-list '(m))
(cl:defmethod roll-val ((m <Gimbal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:roll-val is deprecated.  Use dji_osdk_ros-msg:roll instead.")
  (roll m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Gimbal>) ostream)
  "Serializes a message object of type '<Gimbal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'ts)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Gimbal>) istream)
  "Deserializes a message object of type '<Gimbal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ts) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'roll) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Gimbal>)))
  "Returns string type for a message object of type '<Gimbal>"
  "dji_osdk_ros/Gimbal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Gimbal)))
  "Returns string type for a message object of type 'Gimbal"
  "dji_osdk_ros/Gimbal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Gimbal>)))
  "Returns md5sum for a message object of type '<Gimbal>"
  "e914fc54aeccbeb342557d4bb7efa016")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Gimbal)))
  "Returns md5sum for a message object of type 'Gimbal"
  "e914fc54aeccbeb342557d4bb7efa016")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Gimbal>)))
  "Returns full string definition for message of type '<Gimbal>"
  (cl:format cl:nil "Header header~%# ts is the time it takes to achieve the desired angle,~%# so the shorter the time, the faster the gimbal rotates.~%int32 ts        # sec~%~%# Mode is 1 byte size:~%# Bit #:      | Set to 0:                             | Set to 1:~%# ----------- | ------------------------------------- | -------------------------------------~%# bit 0       | Incremental control,                  | Absolute control,~%#             | the angle reference is the            | the angle reference is~%#             | current Gimbal location               | related to configuration in DJI Go App~%# bit 1       | Gimbal will follow the command in Yaw | Gimbal will maintain position in Yaw~%# bit 2       | Roll invalid bit, the same as bit[1]  | Roll invalid bit, the same as bit[1]~%# bit 3       |Pitch invalid bit, the same as bit[1]  | Pitch invalid bit, the same as bit[1]~%# bit [4:7]   | bit [4:7]: reserved, set to be 0      |~%uint8 mode~%float32 yaw     # rads~%float32 pitch   # rads~%float32 roll    # rads~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Gimbal)))
  "Returns full string definition for message of type 'Gimbal"
  (cl:format cl:nil "Header header~%# ts is the time it takes to achieve the desired angle,~%# so the shorter the time, the faster the gimbal rotates.~%int32 ts        # sec~%~%# Mode is 1 byte size:~%# Bit #:      | Set to 0:                             | Set to 1:~%# ----------- | ------------------------------------- | -------------------------------------~%# bit 0       | Incremental control,                  | Absolute control,~%#             | the angle reference is the            | the angle reference is~%#             | current Gimbal location               | related to configuration in DJI Go App~%# bit 1       | Gimbal will follow the command in Yaw | Gimbal will maintain position in Yaw~%# bit 2       | Roll invalid bit, the same as bit[1]  | Roll invalid bit, the same as bit[1]~%# bit 3       |Pitch invalid bit, the same as bit[1]  | Pitch invalid bit, the same as bit[1]~%# bit [4:7]   | bit [4:7]: reserved, set to be 0      |~%uint8 mode~%float32 yaw     # rads~%float32 pitch   # rads~%float32 roll    # rads~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Gimbal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     1
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Gimbal>))
  "Converts a ROS message object to a list"
  (cl:list 'Gimbal
    (cl:cons ':header (header msg))
    (cl:cons ':ts (ts msg))
    (cl:cons ':mode (mode msg))
    (cl:cons ':yaw (yaw msg))
    (cl:cons ':pitch (pitch msg))
    (cl:cons ':roll (roll msg))
))
