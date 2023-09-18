; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-msg)


;//! \htmlinclude iuslMyState.msg.html

(cl:defclass <iuslMyState> (roslisp-msg-protocol:ros-message)
  ((time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0)
   (UAV_lat
    :reader UAV_lat
    :initarg :UAV_lat
    :type cl:float
    :initform 0.0)
   (UAV_lon
    :reader UAV_lon
    :initarg :UAV_lon
    :type cl:float
    :initform 0.0)
   (UAV_alt
    :reader UAV_alt
    :initarg :UAV_alt
    :type cl:float
    :initform 0.0)
   (UAV_yaw
    :reader UAV_yaw
    :initarg :UAV_yaw
    :type cl:float
    :initform 0.0)
   (UAV_vx
    :reader UAV_vx
    :initarg :UAV_vx
    :type cl:float
    :initform 0.0)
   (UAV_vy
    :reader UAV_vy
    :initarg :UAV_vy
    :type cl:float
    :initform 0.0)
   (cam_x
    :reader cam_x
    :initarg :cam_x
    :type cl:float
    :initform 0.0)
   (cam_y
    :reader cam_y
    :initarg :cam_y
    :type cl:float
    :initform 0.0)
   (cam_z
    :reader cam_z
    :initarg :cam_z
    :type cl:float
    :initform 0.0))
)

(cl:defclass iuslMyState (<iuslMyState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslMyState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslMyState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-msg:<iuslMyState> is deprecated: use dji_osdk_ros-msg:iuslMyState instead.")))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:time-val is deprecated.  Use dji_osdk_ros-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'UAV_lat-val :lambda-list '(m))
(cl:defmethod UAV_lat-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_lat-val is deprecated.  Use dji_osdk_ros-msg:UAV_lat instead.")
  (UAV_lat m))

(cl:ensure-generic-function 'UAV_lon-val :lambda-list '(m))
(cl:defmethod UAV_lon-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_lon-val is deprecated.  Use dji_osdk_ros-msg:UAV_lon instead.")
  (UAV_lon m))

(cl:ensure-generic-function 'UAV_alt-val :lambda-list '(m))
(cl:defmethod UAV_alt-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_alt-val is deprecated.  Use dji_osdk_ros-msg:UAV_alt instead.")
  (UAV_alt m))

(cl:ensure-generic-function 'UAV_yaw-val :lambda-list '(m))
(cl:defmethod UAV_yaw-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_yaw-val is deprecated.  Use dji_osdk_ros-msg:UAV_yaw instead.")
  (UAV_yaw m))

(cl:ensure-generic-function 'UAV_vx-val :lambda-list '(m))
(cl:defmethod UAV_vx-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_vx-val is deprecated.  Use dji_osdk_ros-msg:UAV_vx instead.")
  (UAV_vx m))

(cl:ensure-generic-function 'UAV_vy-val :lambda-list '(m))
(cl:defmethod UAV_vy-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:UAV_vy-val is deprecated.  Use dji_osdk_ros-msg:UAV_vy instead.")
  (UAV_vy m))

(cl:ensure-generic-function 'cam_x-val :lambda-list '(m))
(cl:defmethod cam_x-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:cam_x-val is deprecated.  Use dji_osdk_ros-msg:cam_x instead.")
  (cam_x m))

(cl:ensure-generic-function 'cam_y-val :lambda-list '(m))
(cl:defmethod cam_y-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:cam_y-val is deprecated.  Use dji_osdk_ros-msg:cam_y instead.")
  (cam_y m))

(cl:ensure-generic-function 'cam_z-val :lambda-list '(m))
(cl:defmethod cam_z-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:cam_z-val is deprecated.  Use dji_osdk_ros-msg:cam_z instead.")
  (cam_z m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslMyState>) ostream)
  "Serializes a message object of type '<iuslMyState>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_lat))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_lon))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_alt))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_vx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'UAV_vy))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cam_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cam_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cam_z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <iuslMyState>) istream)
  "Deserializes a message object of type '<iuslMyState>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_lat) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_lon) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_alt) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_yaw) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_vx) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UAV_vy) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cam_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cam_y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cam_z) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<iuslMyState>)))
  "Returns string type for a message object of type '<iuslMyState>"
  "dji_osdk_ros/iuslMyState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslMyState)))
  "Returns string type for a message object of type 'iuslMyState"
  "dji_osdk_ros/iuslMyState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<iuslMyState>)))
  "Returns md5sum for a message object of type '<iuslMyState>"
  "27d296a0eab46d69158326fe8e2a6ff1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslMyState)))
  "Returns md5sum for a message object of type 'iuslMyState"
  "27d296a0eab46d69158326fe8e2a6ff1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslMyState>)))
  "Returns full string definition for message of type '<iuslMyState>"
  (cl:format cl:nil "~%float64 time~%~%float64 UAV_lat~%float64 UAV_lon~%float64 UAV_alt~%float64 UAV_yaw~%float64 UAV_vx~%float64 UAV_vy~%float64 cam_x~%float64 cam_y~%float64 cam_z~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslMyState)))
  "Returns full string definition for message of type 'iuslMyState"
  (cl:format cl:nil "~%float64 time~%~%float64 UAV_lat~%float64 UAV_lon~%float64 UAV_alt~%float64 UAV_yaw~%float64 UAV_vx~%float64 UAV_vy~%float64 cam_x~%float64 cam_y~%float64 cam_z~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslMyState>))
  (cl:+ 0
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslMyState>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslMyState
    (cl:cons ':time (time msg))
    (cl:cons ':UAV_lat (UAV_lat msg))
    (cl:cons ':UAV_lon (UAV_lon msg))
    (cl:cons ':UAV_alt (UAV_alt msg))
    (cl:cons ':UAV_yaw (UAV_yaw msg))
    (cl:cons ':UAV_vx (UAV_vx msg))
    (cl:cons ':UAV_vy (UAV_vy msg))
    (cl:cons ':cam_x (cam_x msg))
    (cl:cons ':cam_y (cam_y msg))
    (cl:cons ':cam_z (cam_z msg))
))
