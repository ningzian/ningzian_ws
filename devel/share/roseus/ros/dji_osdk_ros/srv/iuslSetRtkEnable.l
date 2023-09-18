;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslSetRtkEnable)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslSetRtkEnable (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLSETRTKENABLE")
  (make-package "DJI_OSDK_ROS::IUSLSETRTKENABLE"))
(unless (find-package "DJI_OSDK_ROS::IUSLSETRTKENABLEREQUEST")
  (make-package "DJI_OSDK_ROS::IUSLSETRTKENABLEREQUEST"))
(unless (find-package "DJI_OSDK_ROS::IUSLSETRTKENABLERESPONSE")
  (make-package "DJI_OSDK_ROS::IUSLSETRTKENABLERESPONSE"))

(in-package "ROS")





(defclass dji_osdk_ros::iuslSetRtkEnableRequest
  :super ros::object
  :slots ())

(defmethod dji_osdk_ros::iuslSetRtkEnableRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass dji_osdk_ros::iuslSetRtkEnableResponse
  :super ros::object
  :slots (_result ))

(defmethod dji_osdk_ros::iuslSetRtkEnableResponse
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

(defclass dji_osdk_ros::iuslSetRtkEnable
  :super ros::object
  :slots ())

(setf (get dji_osdk_ros::iuslSetRtkEnable :md5sum-) "eb13ac1f1354ccecb7941ee8fa2192e8")
(setf (get dji_osdk_ros::iuslSetRtkEnable :datatype-) "dji_osdk_ros/iuslSetRtkEnable")
(setf (get dji_osdk_ros::iuslSetRtkEnable :request) dji_osdk_ros::iuslSetRtkEnableRequest)
(setf (get dji_osdk_ros::iuslSetRtkEnable :response) dji_osdk_ros::iuslSetRtkEnableResponse)

(defmethod dji_osdk_ros::iuslSetRtkEnableRequest
  (:response () (instance dji_osdk_ros::iuslSetRtkEnableResponse :init)))

(setf (get dji_osdk_ros::iuslSetRtkEnableRequest :md5sum-) "eb13ac1f1354ccecb7941ee8fa2192e8")
(setf (get dji_osdk_ros::iuslSetRtkEnableRequest :datatype-) "dji_osdk_ros/iuslSetRtkEnableRequest")
(setf (get dji_osdk_ros::iuslSetRtkEnableRequest :definition-)
      "
---
bool result


")

(setf (get dji_osdk_ros::iuslSetRtkEnableResponse :md5sum-) "eb13ac1f1354ccecb7941ee8fa2192e8")
(setf (get dji_osdk_ros::iuslSetRtkEnableResponse :datatype-) "dji_osdk_ros/iuslSetRtkEnableResponse")
(setf (get dji_osdk_ros::iuslSetRtkEnableResponse :definition-)
      "
---
bool result


")



(provide :dji_osdk_ros/iuslSetRtkEnable "eb13ac1f1354ccecb7941ee8fa2192e8")


