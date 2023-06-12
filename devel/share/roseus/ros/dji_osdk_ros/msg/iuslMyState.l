;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslMyState)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslMyState (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLMYSTATE")
  (make-package "DJI_OSDK_ROS::IUSLMYSTATE"))

(in-package "ROS")
;;//! \htmlinclude iuslMyState.msg.html


(defclass dji_osdk_ros::iuslMyState
  :super ros::object
  :slots (_my_UAV_x _my_UAV_y _my_UAV_z _my_UAV_vx _my_UAV_vy ))

(defmethod dji_osdk_ros::iuslMyState
  (:init
   (&key
    ((:my_UAV_x __my_UAV_x) 0.0)
    ((:my_UAV_y __my_UAV_y) 0.0)
    ((:my_UAV_z __my_UAV_z) 0.0)
    ((:my_UAV_vx __my_UAV_vx) 0.0)
    ((:my_UAV_vy __my_UAV_vy) 0.0)
    )
   (send-super :init)
   (setq _my_UAV_x (float __my_UAV_x))
   (setq _my_UAV_y (float __my_UAV_y))
   (setq _my_UAV_z (float __my_UAV_z))
   (setq _my_UAV_vx (float __my_UAV_vx))
   (setq _my_UAV_vy (float __my_UAV_vy))
   self)
  (:my_UAV_x
   (&optional __my_UAV_x)
   (if __my_UAV_x (setq _my_UAV_x __my_UAV_x)) _my_UAV_x)
  (:my_UAV_y
   (&optional __my_UAV_y)
   (if __my_UAV_y (setq _my_UAV_y __my_UAV_y)) _my_UAV_y)
  (:my_UAV_z
   (&optional __my_UAV_z)
   (if __my_UAV_z (setq _my_UAV_z __my_UAV_z)) _my_UAV_z)
  (:my_UAV_vx
   (&optional __my_UAV_vx)
   (if __my_UAV_vx (setq _my_UAV_vx __my_UAV_vx)) _my_UAV_vx)
  (:my_UAV_vy
   (&optional __my_UAV_vy)
   (if __my_UAV_vy (setq _my_UAV_vy __my_UAV_vy)) _my_UAV_vy)
  (:serialization-length
   ()
   (+
    ;; float64 _my_UAV_x
    8
    ;; float64 _my_UAV_y
    8
    ;; float64 _my_UAV_z
    8
    ;; float64 _my_UAV_vx
    8
    ;; float64 _my_UAV_vy
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _my_UAV_x
       (sys::poke _my_UAV_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _my_UAV_y
       (sys::poke _my_UAV_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _my_UAV_z
       (sys::poke _my_UAV_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _my_UAV_vx
       (sys::poke _my_UAV_vx (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _my_UAV_vy
       (sys::poke _my_UAV_vy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _my_UAV_x
     (setq _my_UAV_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _my_UAV_y
     (setq _my_UAV_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _my_UAV_z
     (setq _my_UAV_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _my_UAV_vx
     (setq _my_UAV_vx (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _my_UAV_vy
     (setq _my_UAV_vy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslMyState :md5sum-) "300d4f75ca62584d1d351cb6e7c982b6")
(setf (get dji_osdk_ros::iuslMyState :datatype-) "dji_osdk_ros/iuslMyState")
(setf (get dji_osdk_ros::iuslMyState :definition-)
      "float64 my_UAV_x
float64 my_UAV_y
float64 my_UAV_z
float64 my_UAV_vx
float64 my_UAV_vy

")



(provide :dji_osdk_ros/iuslMyState "300d4f75ca62584d1d351cb6e7c982b6")


