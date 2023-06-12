; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-msg)


;//! \htmlinclude iuslEstimateState.msg.html

(cl:defclass <iuslEstimateState> (roslisp-msg-protocol:ros-message)
  ((est_ekf_OK
    :reader est_ekf_OK
    :initarg :est_ekf_OK
    :type cl:boolean
    :initform cl:nil)
   (est_tar_x
    :reader est_tar_x
    :initarg :est_tar_x
    :type cl:float
    :initform 0.0)
   (est_tar_y
    :reader est_tar_y
    :initarg :est_tar_y
    :type cl:float
    :initform 0.0)
   (est_tar_z
    :reader est_tar_z
    :initarg :est_tar_z
    :type cl:float
    :initform 0.0)
   (est_tar_vx
    :reader est_tar_vx
    :initarg :est_tar_vx
    :type cl:float
    :initform 0.0)
   (est_tar_vy
    :reader est_tar_vy
    :initarg :est_tar_vy
    :type cl:float
    :initform 0.0))
)

(cl:defclass iuslEstimateState (<iuslEstimateState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslEstimateState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslEstimateState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-msg:<iuslEstimateState> is deprecated: use dji_osdk_ros-msg:iuslEstimateState instead.")))

(cl:ensure-generic-function 'est_ekf_OK-val :lambda-list '(m))
(cl:defmethod est_ekf_OK-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_ekf_OK-val is deprecated.  Use dji_osdk_ros-msg:est_ekf_OK instead.")
  (est_ekf_OK m))

(cl:ensure-generic-function 'est_tar_x-val :lambda-list '(m))
(cl:defmethod est_tar_x-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_tar_x-val is deprecated.  Use dji_osdk_ros-msg:est_tar_x instead.")
  (est_tar_x m))

(cl:ensure-generic-function 'est_tar_y-val :lambda-list '(m))
(cl:defmethod est_tar_y-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_tar_y-val is deprecated.  Use dji_osdk_ros-msg:est_tar_y instead.")
  (est_tar_y m))

(cl:ensure-generic-function 'est_tar_z-val :lambda-list '(m))
(cl:defmethod est_tar_z-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_tar_z-val is deprecated.  Use dji_osdk_ros-msg:est_tar_z instead.")
  (est_tar_z m))

(cl:ensure-generic-function 'est_tar_vx-val :lambda-list '(m))
(cl:defmethod est_tar_vx-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_tar_vx-val is deprecated.  Use dji_osdk_ros-msg:est_tar_vx instead.")
  (est_tar_vx m))

(cl:ensure-generic-function 'est_tar_vy-val :lambda-list '(m))
(cl:defmethod est_tar_vy-val ((m <iuslEstimateState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-msg:est_tar_vy-val is deprecated.  Use dji_osdk_ros-msg:est_tar_vy instead.")
  (est_tar_vy m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslEstimateState>) ostream)
  "Serializes a message object of type '<iuslEstimateState>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'est_ekf_OK) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_tar_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_tar_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_tar_z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_tar_vx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'est_tar_vy))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <iuslEstimateState>) istream)
  "Deserializes a message object of type '<iuslEstimateState>"
    (cl:setf (cl:slot-value msg 'est_ekf_OK) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_tar_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_tar_y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_tar_z) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_tar_vx) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'est_tar_vy) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<iuslEstimateState>)))
  "Returns string type for a message object of type '<iuslEstimateState>"
  "dji_osdk_ros/iuslEstimateState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslEstimateState)))
  "Returns string type for a message object of type 'iuslEstimateState"
  "dji_osdk_ros/iuslEstimateState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<iuslEstimateState>)))
  "Returns md5sum for a message object of type '<iuslEstimateState>"
  "57b0b6b128ef5651ce9b3fe0084e19a4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslEstimateState)))
  "Returns md5sum for a message object of type 'iuslEstimateState"
  "57b0b6b128ef5651ce9b3fe0084e19a4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslEstimateState>)))
  "Returns full string definition for message of type '<iuslEstimateState>"
  (cl:format cl:nil "# estimated target UAV state~%bool est_ekf_OK~%float64 est_tar_x~%float64 est_tar_y~%float64 est_tar_z~%float64 est_tar_vx~%float64 est_tar_vy~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslEstimateState)))
  "Returns full string definition for message of type 'iuslEstimateState"
  (cl:format cl:nil "# estimated target UAV state~%bool est_ekf_OK~%float64 est_tar_x~%float64 est_tar_y~%float64 est_tar_z~%float64 est_tar_vx~%float64 est_tar_vy~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslEstimateState>))
  (cl:+ 0
     1
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslEstimateState>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslEstimateState
    (cl:cons ':est_ekf_OK (est_ekf_OK msg))
    (cl:cons ':est_tar_x (est_tar_x msg))
    (cl:cons ':est_tar_y (est_tar_y msg))
    (cl:cons ':est_tar_z (est_tar_z msg))
    (cl:cons ':est_tar_vx (est_tar_vx msg))
    (cl:cons ':est_tar_vy (est_tar_vy msg))
))
