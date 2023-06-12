; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-msg)


;//! \htmlinclude iuslMyState.msg.html

(cl:defclass <iuslMyState> (roslisp-msg-protocol:ros-message)
  ((my_UAV_x
    :reader my_UAV_x
    :initarg :my_UAV_x
    :type cl:float
    :initform 0.0)
   (my_UAV_y
    :reader my_UAV_y
    :initarg :my_UAV_y
    :type cl:float
    :initform 0.0)
   (my_UAV_z
    :reader my_UAV_z
    :initarg :my_UAV_z
    :type cl:float
    :initform 0.0)
   (my_UAV_vx
    :reader my_UAV_vx
    :initarg :my_UAV_vx
    :type cl:float
    :initform 0.0)
   (my_UAV_vy
    :reader my_UAV_vy
    :initarg :my_UAV_vy
    :type cl:float
    :initform 0.0))
)

(cl:defclass iuslMyState (<iuslMyState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslMyState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslMyState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-msg:<iuslMyState> is deprecated: use dji_osdk_ros-msg:iuslMyState instead.")))

(cl:ensure-generic-function 'my_UAV_x-val :lambda-list '(m))
(cl:defmethod my_UAV_x-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:my_UAV_x-val is deprecated.  Use dji_osdk_ros-msg:my_UAV_x instead.")
  (my_UAV_x m))

(cl:ensure-generic-function 'my_UAV_y-val :lambda-list '(m))
(cl:defmethod my_UAV_y-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:my_UAV_y-val is deprecated.  Use dji_osdk_ros-msg:my_UAV_y instead.")
  (my_UAV_y m))

(cl:ensure-generic-function 'my_UAV_z-val :lambda-list '(m))
(cl:defmethod my_UAV_z-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:my_UAV_z-val is deprecated.  Use dji_osdk_ros-msg:my_UAV_z instead.")
  (my_UAV_z m))

(cl:ensure-generic-function 'my_UAV_vx-val :lambda-list '(m))
(cl:defmethod my_UAV_vx-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:my_UAV_vx-val is deprecated.  Use dji_osdk_ros-msg:my_UAV_vx instead.")
  (my_UAV_vx m))

(cl:ensure-generic-function 'my_UAV_vy-val :lambda-list '(m))
(cl:defmethod my_UAV_vy-val ((m <iuslMyState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:my_UAV_vy-val is deprecated.  Use dji_osdk_ros-msg:my_UAV_vy instead.")
  (my_UAV_vy m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslMyState>) ostream)
  "Serializes a message object of type '<iuslMyState>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'my_UAV_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'my_UAV_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'my_UAV_z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'my_UAV_vx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'my_UAV_vy))))
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
    (cl:setf (cl:slot-value msg 'my_UAV_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'my_UAV_y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'my_UAV_z) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'my_UAV_vx) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'my_UAV_vy) (roslisp-utils:decode-double-float-bits bits)))
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
  "300d4f75ca62584d1d351cb6e7c982b6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslMyState)))
  "Returns md5sum for a message object of type 'iuslMyState"
  "300d4f75ca62584d1d351cb6e7c982b6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslMyState>)))
  "Returns full string definition for message of type '<iuslMyState>"
  (cl:format cl:nil "float64 my_UAV_x~%float64 my_UAV_y~%float64 my_UAV_z~%float64 my_UAV_vx~%float64 my_UAV_vy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslMyState)))
  "Returns full string definition for message of type 'iuslMyState"
  (cl:format cl:nil "float64 my_UAV_x~%float64 my_UAV_y~%float64 my_UAV_z~%float64 my_UAV_vx~%float64 my_UAV_vy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslMyState>))
  (cl:+ 0
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslMyState>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslMyState
    (cl:cons ':my_UAV_x (my_UAV_x msg))
    (cl:cons ':my_UAV_y (my_UAV_y msg))
    (cl:cons ':my_UAV_z (my_UAV_z msg))
    (cl:cons ':my_UAV_vx (my_UAV_vx msg))
    (cl:cons ':my_UAV_vy (my_UAV_vy msg))
))
