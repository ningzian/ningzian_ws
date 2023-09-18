;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslUAVCtrlCmd)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslUAVCtrlCmd (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLUAVCTRLCMD")
  (make-package "DJI_OSDK_ROS::IUSLUAVCTRLCMD"))

(in-package "ROS")
;;//! \htmlinclude iuslUAVCtrlCmd.msg.html


(defclass dji_osdk_ros::iuslUAVCtrlCmd
  :super ros::object
  :slots (_task _mode _x _y _z _yaw ))

(defmethod dji_osdk_ros::iuslUAVCtrlCmd
  (:init
   (&key
    ((:task __task) 0)
    ((:mode __mode) 0)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:yaw __yaw) 0.0)
    )
   (send-super :init)
   (setq _task (round __task))
   (setq _mode (round __mode))
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _yaw (float __yaw))
   self)
  (:task
   (&optional __task)
   (if __task (setq _task __task)) _task)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:serialization-length
   ()
   (+
    ;; uint8 _task
    1
    ;; uint8 _mode
    1
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _z
    8
    ;; float64 _yaw
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _task
       (write-byte _task s)
     ;; uint8 _mode
       (write-byte _mode s)
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z
       (sys::poke _z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _task
     (setq _task (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z
     (setq _z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw
     (setq _yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslUAVCtrlCmd :md5sum-) "201171de9b3e844efb0e68535a9bcbe9")
(setf (get dji_osdk_ros::iuslUAVCtrlCmd :datatype-) "dji_osdk_ros/iuslUAVCtrlCmd")
(setf (get dji_osdk_ros::iuslUAVCtrlCmd :definition-)
      "# for flight task
uint8 task  # 1 takeoff, 2 gohome, 3 hover, 4 ctrl

# for horizontal control
uint8 mode  # 1 for pos ctrl, 2 for vel ctrl
float64 x
float64 y

# altitude cmd
float64 z

# global yaw cmd
float64 yaw




")



(provide :dji_osdk_ros/iuslUAVCtrlCmd "201171de9b3e844efb0e68535a9bcbe9")


