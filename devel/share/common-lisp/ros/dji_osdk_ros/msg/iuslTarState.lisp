; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-msg)


;//! \htmlinclude iuslTarState.msg.html

(cl:defclass <iuslTarState> (roslisp-msg-protocol:ros-message)
  ((tar_OK
    :reader tar_OK
    :initarg :tar_OK
    :type cl:boolean
    :initform cl:nil)
   (is_laser_measured
    :reader is_laser_measured
    :initarg :is_laser_measured
    :type cl:boolean
    :initform cl:nil)
   (tar_x
    :reader tar_x
    :initarg :tar_x
    :type cl:float
    :initform 0.0)
   (tar_y
    :reader tar_y
    :initarg :tar_y
    :type cl:float
    :initform 0.0)
   (tar_z
    :reader tar_z
    :initarg :tar_z
    :type cl:float
    :initform 0.0)
   (tar_vx
    :reader tar_vx
    :initarg :tar_vx
    :type cl:float
    :initform 0.0)
   (tar_vy
    :reader tar_vy
    :initarg :tar_vy
    :type cl:float
    :initform 0.0)
   (est_dis
    :reader est_dis
    :initarg :est_dis
    :type cl:float
    :initform 0.0))
)

(cl:defclass iuslTarState (<iuslTarState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslTarState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslTarState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-msg:<iuslTarState> is deprecated: use dji_osdk_ros-msg:iuslTarState instead.")))

(cl:ensure-generic-function 'tar_OK-val :lambda-list '(m))
(cl:defmethod tar_OK-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_OK-val is deprecated.  Use dji_osdk_ros-msg:tar_OK instead.")
  (tar_OK m))

(cl:ensure-generic-function 'is_laser_measured-val :lambda-list '(m))
(cl:defmethod is_laser_measured-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:is_laser_measured-val is deprecated.  Use dji_osdk_ros-msg:is_laser_measured instead.")
  (is_laser_measured m))

(cl:ensure-generic-function 'tar_x-val :lambda-list '(m))
(cl:defmethod tar_x-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_x-val is deprecated.  Use dji_osdk_ros-msg:tar_x instead.")
  (tar_x m))

(cl:ensure-generic-function 'tar_y-val :lambda-list '(m))
(cl:defmethod tar_y-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_y-val is deprecated.  Use dji_osdk_ros-msg:tar_y instead.")
  (tar_y m))

(cl:ensure-generic-function 'tar_z-val :lambda-list '(m))
(cl:defmethod tar_z-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_z-val is deprecated.  Use dji_osdk_ros-msg:tar_z instead.")
  (tar_z m))

(cl:ensure-generic-function 'tar_vx-val :lambda-list '(m))
(cl:defmethod tar_vx-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_vx-val is deprecated.  Use dji_osdk_ros-msg:tar_vx instead.")
  (tar_vx m))

(cl:ensure-generic-function 'tar_vy-val :lambda-list '(m))
(cl:defmethod tar_vy-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:tar_vy-val is deprecated.  Use dji_osdk_ros-msg:tar_vy instead.")
  (tar_vy m))

(cl:ensure-generic-function 'est_dis-val :lambda-list '(m))
(cl:defmethod est_dis-val ((m <iuslTarState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_dis-val is deprecated.  Use dji_osdk_ros-msg:est_dis instead.")
  (est_dis m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslTarState>) ostream)
  "Serializes a message object of type '<iuslTarState>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'tar_OK) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_laser_measured) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tar_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tar_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tar_z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tar_vx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tar_vy))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_dis))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <iuslTarState>) istream)
  "Deserializes a message object of type '<iuslTarState>"
    (cl:setf (cl:slot-value msg 'tar_OK) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_laser_measured) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tar_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tar_y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tar_z) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tar_vx) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tar_vy) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_dis) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<iuslTarState>)))
  "Returns string type for a message object of type '<iuslTarState>"
  "dji_osdk_ros/iuslTarState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslTarState)))
  "Returns string type for a message object of type 'iuslTarState"
  "dji_osdk_ros/iuslTarState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<iuslTarState>)))
  "Returns md5sum for a message object of type '<iuslTarState>"
  "fa6098269c9336e18e8e70250407c05a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslTarState)))
  "Returns md5sum for a message object of type 'iuslTarState"
  "fa6098269c9336e18e8e70250407c05a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslTarState>)))
  "Returns full string definition for message of type '<iuslTarState>"
  (cl:format cl:nil "# estimated target UAV state~%bool tar_OK~%bool is_laser_measured~%~%float64 tar_x~%float64 tar_y~%float64 tar_z~%float64 tar_vx~%float64 tar_vy~%~%float64 est_dis~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslTarState)))
  "Returns full string definition for message of type 'iuslTarState"
  (cl:format cl:nil "# estimated target UAV state~%bool tar_OK~%bool is_laser_measured~%~%float64 tar_x~%float64 tar_y~%float64 tar_z~%float64 tar_vx~%float64 tar_vy~%~%float64 est_dis~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslTarState>))
  (cl:+ 0
     1
     1
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslTarState>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslTarState
    (cl:cons ':tar_OK (tar_OK msg))
    (cl:cons ':is_laser_measured (is_laser_measured msg))
    (cl:cons ':tar_x (tar_x msg))
    (cl:cons ':tar_y (tar_y msg))
    (cl:cons ':tar_z (tar_z msg))
    (cl:cons ':tar_vx (tar_vx msg))
    (cl:cons ':tar_vy (tar_vy msg))
    (cl:cons ':est_dis (est_dis msg))
))
