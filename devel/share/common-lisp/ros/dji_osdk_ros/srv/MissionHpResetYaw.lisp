; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-srv)


;//! \htmlinclude MissionHpResetYaw-request.msg.html

(cl:defclass <MissionHpResetYaw-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass MissionHpResetYaw-request (<MissionHpResetYaw-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionHpResetYaw-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionHpResetYaw-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-srv:<MissionHpResetYaw-request> is deprecated: use dji_osdk_ros-srv:MissionHpResetYaw-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionHpResetYaw-request>) ostream)
  "Serializes a message object of type '<MissionHpResetYaw-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionHpResetYaw-request>) istream)
  "Deserializes a message object of type '<MissionHpResetYaw-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionHpResetYaw-request>)))
  "Returns string type for a service object of type '<MissionHpResetYaw-request>"
  "dji_osdk_ros/MissionHpResetYawRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionHpResetYaw-request)))
  "Returns string type for a service object of type 'MissionHpResetYaw-request"
  "dji_osdk_ros/MissionHpResetYawRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionHpResetYaw-request>)))
  "Returns md5sum for a message object of type '<MissionHpResetYaw-request>"
  "f03b0bc279b265c40946c1011df83013")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionHpResetYaw-request)))
  "Returns md5sum for a message object of type 'MissionHpResetYaw-request"
  "f03b0bc279b265c40946c1011df83013")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionHpResetYaw-request>)))
  "Returns full string definition for message of type '<MissionHpResetYaw-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionHpResetYaw-request)))
  "Returns full string definition for message of type 'MissionHpResetYaw-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionHpResetYaw-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionHpResetYaw-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionHpResetYaw-request
))
;//! \htmlinclude MissionHpResetYaw-response.msg.html

(cl:defclass <MissionHpResetYaw-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil)
   (cmd_set
    :reader cmd_set
    :initarg :cmd_set
    :type cl:fixnum
    :initform 0)
   (cmd_id
    :reader cmd_id
    :initarg :cmd_id
    :type cl:fixnum
    :initform 0)
   (ack_data
    :reader ack_data
    :initarg :ack_data
    :type cl:integer
    :initform 0))
)

(cl:defclass MissionHpResetYaw-response (<MissionHpResetYaw-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionHpResetYaw-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionHpResetYaw-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-srv:<MissionHpResetYaw-response> is deprecated: use dji_osdk_ros-srv:MissionHpResetYaw-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <MissionHpResetYaw-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-srv:result-val is deprecated.  Use dji_osdk_ros-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'cmd_set-val :lambda-list '(m))
(cl:defmethod cmd_set-val ((m <MissionHpResetYaw-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-srv:cmd_set-val is deprecated.  Use dji_osdk_ros-srv:cmd_set instead.")
  (cmd_set m))

(cl:ensure-generic-function 'cmd_id-val :lambda-list '(m))
(cl:defmethod cmd_id-val ((m <MissionHpResetYaw-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-srv:cmd_id-val is deprecated.  Use dji_osdk_ros-srv:cmd_id instead.")
  (cmd_id m))

(cl:ensure-generic-function 'ack_data-val :lambda-list '(m))
(cl:defmethod ack_data-val ((m <MissionHpResetYaw-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-srv:ack_data-val is deprecated.  Use dji_osdk_ros-srv:ack_data instead.")
  (ack_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionHpResetYaw-response>) ostream)
  "Serializes a message object of type '<MissionHpResetYaw-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_set)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ack_data)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ack_data)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'ack_data)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'ack_data)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionHpResetYaw-response>) istream)
  "Deserializes a message object of type '<MissionHpResetYaw-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_set)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cmd_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ack_data)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ack_data)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'ack_data)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'ack_data)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionHpResetYaw-response>)))
  "Returns string type for a service object of type '<MissionHpResetYaw-response>"
  "dji_osdk_ros/MissionHpResetYawResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionHpResetYaw-response)))
  "Returns string type for a service object of type 'MissionHpResetYaw-response"
  "dji_osdk_ros/MissionHpResetYawResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionHpResetYaw-response>)))
  "Returns md5sum for a message object of type '<MissionHpResetYaw-response>"
  "f03b0bc279b265c40946c1011df83013")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionHpResetYaw-response)))
  "Returns md5sum for a message object of type 'MissionHpResetYaw-response"
  "f03b0bc279b265c40946c1011df83013")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionHpResetYaw-response>)))
  "Returns full string definition for message of type '<MissionHpResetYaw-response>"
  (cl:format cl:nil "bool result~%~%uint8 cmd_set~%uint8 cmd_id~%uint32 ack_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionHpResetYaw-response)))
  "Returns full string definition for message of type 'MissionHpResetYaw-response"
  (cl:format cl:nil "bool result~%~%uint8 cmd_set~%uint8 cmd_id~%uint32 ack_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionHpResetYaw-response>))
  (cl:+ 0
     1
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionHpResetYaw-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionHpResetYaw-response
    (cl:cons ':result (result msg))
    (cl:cons ':cmd_set (cmd_set msg))
    (cl:cons ':cmd_id (cmd_id msg))
    (cl:cons ':ack_data (ack_data msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MissionHpResetYaw)))
  'MissionHpResetYaw-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MissionHpResetYaw)))
  'MissionHpResetYaw-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionHpResetYaw)))
  "Returns string type for a service object of type '<MissionHpResetYaw>"
  "dji_osdk_ros/MissionHpResetYaw")