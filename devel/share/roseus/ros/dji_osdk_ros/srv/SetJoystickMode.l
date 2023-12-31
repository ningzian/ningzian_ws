;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::SetJoystickMode)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'SetJoystickMode (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::SETJOYSTICKMODE")
  (make-package "DJI_OSDK_ROS::SETJOYSTICKMODE"))
(unless (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST")
  (make-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(unless (find-package "DJI_OSDK_ROS::SETJOYSTICKMODERESPONSE")
  (make-package "DJI_OSDK_ROS::SETJOYSTICKMODERESPONSE"))

(in-package "ROS")





(intern "*HORIZONTAL_ANGLE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_ANGLE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_ANGLE* 0)
(intern "*HORIZONTAL_VELOCITY*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_VELOCITY* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_VELOCITY* 1)
(intern "*HORIZONTAL_POSITION*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_POSITION* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_POSITION* 2)
(intern "*HORIZONTAL_ANGULAR_RATE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_ANGULAR_RATE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_ANGULAR_RATE* 3)
(intern "*VERTICAL_VELOCITY*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*VERTICAL_VELOCITY* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*VERTICAL_VELOCITY* 0)
(intern "*VERTICAL_POSITION*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*VERTICAL_POSITION* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*VERTICAL_POSITION* 1)
(intern "*VERTICAL_THRUST*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*VERTICAL_THRUST* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*VERTICAL_THRUST* 2)
(intern "*YAW_ANGLE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*YAW_ANGLE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*YAW_ANGLE* 0)
(intern "*YAW_RATE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*YAW_RATE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*YAW_RATE* 1)
(intern "*HORIZONTAL_GROUND*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_GROUND* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_GROUND* 0)
(intern "*HORIZONTAL_BODY*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*HORIZONTAL_BODY* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*HORIZONTAL_BODY* 1)
(intern "*STABLE_DISABLE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*STABLE_DISABLE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*STABLE_DISABLE* 0)
(intern "*STABLE_ENABLE*" (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(shadow '*STABLE_ENABLE* (find-package "DJI_OSDK_ROS::SETJOYSTICKMODEREQUEST"))
(defconstant dji_osdk_ros::SetJoystickModeRequest::*STABLE_ENABLE* 1)
(defclass dji_osdk_ros::SetJoystickModeRequest
  :super ros::object
  :slots (_horizontal_mode _vertical_mode _yaw_mode _horizontal_coordinate _stable_mode ))

(defmethod dji_osdk_ros::SetJoystickModeRequest
  (:init
   (&key
    ((:horizontal_mode __horizontal_mode) 0)
    ((:vertical_mode __vertical_mode) 0)
    ((:yaw_mode __yaw_mode) 0)
    ((:horizontal_coordinate __horizontal_coordinate) 0)
    ((:stable_mode __stable_mode) 0)
    )
   (send-super :init)
   (setq _horizontal_mode (round __horizontal_mode))
   (setq _vertical_mode (round __vertical_mode))
   (setq _yaw_mode (round __yaw_mode))
   (setq _horizontal_coordinate (round __horizontal_coordinate))
   (setq _stable_mode (round __stable_mode))
   self)
  (:horizontal_mode
   (&optional __horizontal_mode)
   (if __horizontal_mode (setq _horizontal_mode __horizontal_mode)) _horizontal_mode)
  (:vertical_mode
   (&optional __vertical_mode)
   (if __vertical_mode (setq _vertical_mode __vertical_mode)) _vertical_mode)
  (:yaw_mode
   (&optional __yaw_mode)
   (if __yaw_mode (setq _yaw_mode __yaw_mode)) _yaw_mode)
  (:horizontal_coordinate
   (&optional __horizontal_coordinate)
   (if __horizontal_coordinate (setq _horizontal_coordinate __horizontal_coordinate)) _horizontal_coordinate)
  (:stable_mode
   (&optional __stable_mode)
   (if __stable_mode (setq _stable_mode __stable_mode)) _stable_mode)
  (:serialization-length
   ()
   (+
    ;; uint8 _horizontal_mode
    1
    ;; uint8 _vertical_mode
    1
    ;; uint8 _yaw_mode
    1
    ;; uint8 _horizontal_coordinate
    1
    ;; uint8 _stable_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _horizontal_mode
       (write-byte _horizontal_mode s)
     ;; uint8 _vertical_mode
       (write-byte _vertical_mode s)
     ;; uint8 _yaw_mode
       (write-byte _yaw_mode s)
     ;; uint8 _horizontal_coordinate
       (write-byte _horizontal_coordinate s)
     ;; uint8 _stable_mode
       (write-byte _stable_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _horizontal_mode
     (setq _horizontal_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _vertical_mode
     (setq _vertical_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _yaw_mode
     (setq _yaw_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _horizontal_coordinate
     (setq _horizontal_coordinate (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _stable_mode
     (setq _stable_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dji_osdk_ros::SetJoystickModeResponse
  :super ros::object
  :slots (_result ))

(defmethod dji_osdk_ros::SetJoystickModeResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dji_osdk_ros::SetJoystickMode
  :super ros::object
  :slots ())

(setf (get dji_osdk_ros::SetJoystickMode :md5sum-) "c55e9c9164f1a634e9bf9721aa4cb437")
(setf (get dji_osdk_ros::SetJoystickMode :datatype-) "dji_osdk_ros/SetJoystickMode")
(setf (get dji_osdk_ros::SetJoystickMode :request) dji_osdk_ros::SetJoystickModeRequest)
(setf (get dji_osdk_ros::SetJoystickMode :response) dji_osdk_ros::SetJoystickModeResponse)

(defmethod dji_osdk_ros::SetJoystickModeRequest
  (:response () (instance dji_osdk_ros::SetJoystickModeResponse :init)))

(setf (get dji_osdk_ros::SetJoystickModeRequest :md5sum-) "c55e9c9164f1a634e9bf9721aa4cb437")
(setf (get dji_osdk_ros::SetJoystickModeRequest :datatype-) "dji_osdk_ros/SetJoystickModeRequest")
(setf (get dji_osdk_ros::SetJoystickModeRequest :definition-)
      "





uint8 HORIZONTAL_ANGLE = 0




uint8 HORIZONTAL_VELOCITY = 1



uint8 HORIZONTAL_POSITION = 2



uint8 HORIZONTAL_ANGULAR_RATE = 3





uint8 VERTICAL_VELOCITY = 0


uint8 VERTICAL_POSITION = 1


uint8 VERTICAL_THRUST = 2





uint8 YAW_ANGLE = 0



uint8 YAW_RATE = 1


uint8 HORIZONTAL_GROUND = 0

uint8 HORIZONTAL_BODY = 1


uint8 STABLE_DISABLE = 0

uint8 STABLE_ENABLE = 1






uint8 horizontal_mode





uint8 vertical_mode
uint8 yaw_mode
uint8 horizontal_coordinate








uint8 stable_mode
---

bool result
")

(setf (get dji_osdk_ros::SetJoystickModeResponse :md5sum-) "c55e9c9164f1a634e9bf9721aa4cb437")
(setf (get dji_osdk_ros::SetJoystickModeResponse :datatype-) "dji_osdk_ros/SetJoystickModeResponse")
(setf (get dji_osdk_ros::SetJoystickModeResponse :definition-)
      "





uint8 HORIZONTAL_ANGLE = 0




uint8 HORIZONTAL_VELOCITY = 1



uint8 HORIZONTAL_POSITION = 2



uint8 HORIZONTAL_ANGULAR_RATE = 3





uint8 VERTICAL_VELOCITY = 0


uint8 VERTICAL_POSITION = 1


uint8 VERTICAL_THRUST = 2





uint8 YAW_ANGLE = 0



uint8 YAW_RATE = 1


uint8 HORIZONTAL_GROUND = 0

uint8 HORIZONTAL_BODY = 1


uint8 STABLE_DISABLE = 0

uint8 STABLE_ENABLE = 1






uint8 horizontal_mode





uint8 vertical_mode
uint8 yaw_mode
uint8 horizontal_coordinate








uint8 stable_mode
---

bool result
")



(provide :dji_osdk_ros/SetJoystickMode "c55e9c9164f1a634e9bf9721aa4cb437")


