; Auto-generated. Do not edit!


(cl:in-package dji_osdk_ros-srv)


;//! \htmlinclude iuslSetRtkEnable-request.msg.html

(cl:defclass <iuslSetRtkEnable-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass iuslSetRtkEnable-request (<iuslSetRtkEnable-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslSetRtkEnable-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslSetRtkEnable-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-srv:<iuslSetRtkEnable-request> is deprecated: use dji_osdk_ros-srv:iuslSetRtkEnable-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslSetRtkEnable-request>) ostream)
  "Serializes a message object of type '<iuslSetRtkEnable-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <iuslSetRtkEnable-request>) istream)
  "Deserializes a message object of type '<iuslSetRtkEnable-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<iuslSetRtkEnable-request>)))
  "Returns string type for a service object of type '<iuslSetRtkEnable-request>"
  "dji_osdk_ros/iuslSetRtkEnableRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslSetRtkEnable-request)))
  "Returns string type for a service object of type 'iuslSetRtkEnable-request"
  "dji_osdk_ros/iuslSetRtkEnableRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<iuslSetRtkEnable-request>)))
  "Returns md5sum for a message object of type '<iuslSetRtkEnable-request>"
  "eb13ac1f1354ccecb7941ee8fa2192e8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslSetRtkEnable-request)))
  "Returns md5sum for a message object of type 'iuslSetRtkEnable-request"
  "eb13ac1f1354ccecb7941ee8fa2192e8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslSetRtkEnable-request>)))
  "Returns full string definition for message of type '<iuslSetRtkEnable-request>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslSetRtkEnable-request)))
  "Returns full string definition for message of type 'iuslSetRtkEnable-request"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslSetRtkEnable-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslSetRtkEnable-request>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslSetRtkEnable-request
))
;//! \htmlinclude iuslSetRtkEnable-response.msg.html

(cl:defclass <iuslSetRtkEnable-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass iuslSetRtkEnable-response (<iuslSetRtkEnable-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <iuslSetRtkEnable-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'iuslSetRtkEnable-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_osdk_ros-srv:<iuslSetRtkEnable-response> is deprecated: use dji_osdk_ros-srv:iuslSetRtkEnable-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <iuslSetRtkEnable-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_osdk_ros-srv:result-val is deprecated.  Use dji_osdk_ros-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <iuslSetRtkEnable-response>) ostream)
  "Serializes a message object of type '<iuslSetRtkEnable-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <iuslSetRtkEnable-response>) istream)
  "Deserializes a message object of type '<iuslSetRtkEnable-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<iuslSetRtkEnable-response>)))
  "Returns string type for a service object of type '<iuslSetRtkEnable-response>"
  "dji_osdk_ros/iuslSetRtkEnableResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslSetRtkEnable-response)))
  "Returns string type for a service object of type 'iuslSetRtkEnable-response"
  "dji_osdk_ros/iuslSetRtkEnableResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<iuslSetRtkEnable-response>)))
  "Returns md5sum for a message object of type '<iuslSetRtkEnable-response>"
  "eb13ac1f1354ccecb7941ee8fa2192e8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'iuslSetRtkEnable-response)))
  "Returns md5sum for a message object of type 'iuslSetRtkEnable-response"
  "eb13ac1f1354ccecb7941ee8fa2192e8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<iuslSetRtkEnable-response>)))
  "Returns full string definition for message of type '<iuslSetRtkEnable-response>"
  (cl:format cl:nil "bool result~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'iuslSetRtkEnable-response)))
  "Returns full string definition for message of type 'iuslSetRtkEnable-response"
  (cl:format cl:nil "bool result~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <iuslSetRtkEnable-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <iuslSetRtkEnable-response>))
  "Converts a ROS message object to a list"
  (cl:list 'iuslSetRtkEnable-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'iuslSetRtkEnable)))
  'iuslSetRtkEnable-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'iuslSetRtkEnable)))
  'iuslSetRtkEnable-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'iuslSetRtkEnable)))
  "Returns string type for a service object of type '<iuslSetRtkEnable>"
  "dji_osdk_ros/iuslSetRtkEnable")