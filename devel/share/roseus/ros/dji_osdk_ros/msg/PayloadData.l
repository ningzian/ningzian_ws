;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::PayloadData)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'PayloadData (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::PAYLOADDATA")
  (make-package "DJI_OSDK_ROS::PAYLOADDATA"))

(in-package "ROS")
;;//! \htmlinclude PayloadData.msg.html


(defclass dji_osdk_ros::PayloadData
  :super ros::object
  :slots (_data ))

(defmethod dji_osdk_ros::PayloadData
  (:init
   (&key
    ((:data __data) (make-array 0 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _data __data)
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; uint8[] _data
    (* 1    (length _data)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8[] _data
     (write-long (length _data) s)
     (princ _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8[] _data
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _data (make-array n :element-type :char))
     (replace _data buf :start2 ptr-) (incf ptr- n))
   ;;
   self)
  )

(setf (get dji_osdk_ros::PayloadData :md5sum-) "f43a8e1b362b75baa741461b46adc7e0")
(setf (get dji_osdk_ros::PayloadData :datatype-) "dji_osdk_ros/PayloadData")
(setf (get dji_osdk_ros::PayloadData :definition-)
      "uint8[] data
")



(provide :dji_osdk_ros/PayloadData "f43a8e1b362b75baa741461b46adc7e0")


