;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslGimbalCmd)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslGimbalCmd (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLGIMBALCMD")
  (make-package "DJI_OSDK_ROS::IUSLGIMBALCMD"))

(in-package "ROS")
;;//! \htmlinclude iuslGimbalCmd.msg.html


(defclass dji_osdk_ros::iuslGimbalCmd
  :super ros::object
  :slots (_mode _pitch _roll _yaw _time ))

(defmethod dji_osdk_ros::iuslGimbalCmd
  (:init
   (&key
    ((:mode __mode) 0)
    ((:pitch __pitch) 0.0)
    ((:roll __roll) 0.0)
    ((:yaw __yaw) 0.0)
    ((:time __time) 0.0)
    )
   (send-super :init)
   (setq _mode (round __mode))
   (setq _pitch (float __pitch))
   (setq _roll (float __roll))
   (setq _yaw (float __yaw))
   (setq _time (float __time))
   self)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:roll
   (&optional __roll)
   (if __roll (setq _roll __roll)) _roll)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:serialization-length
   ()
   (+
    ;; int8 _mode
    1
    ;; float64 _pitch
    8
    ;; float64 _roll
    8
    ;; float64 _yaw
    8
    ;; float64 _time
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _mode
       (write-byte _mode s)
     ;; float64 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _roll
       (sys::poke _roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _time
       (sys::poke _time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _mode 127) (setq _mode (- _mode 256)))
   ;; float64 _pitch
     (setq _pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _roll
     (setq _roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw
     (setq _yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _time
     (setq _time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslGimbalCmd :md5sum-) "60c32efa40c7049d37a43f7259ece1c9")
(setf (get dji_osdk_ros::iuslGimbalCmd :datatype-) "dji_osdk_ros/iuslGimbalCmd")
(setf (get dji_osdk_ros::iuslGimbalCmd :definition-)
      "int8 mode    # 0,global fram;   1,local fram
float64 pitch
float64 roll
float64 yaw
float64 time  # seconds

")



(provide :dji_osdk_ros/iuslGimbalCmd "60c32efa40c7049d37a43f7259ece1c9")


