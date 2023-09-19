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
  :slots (_time _UAV_lat _UAV_lon _UAV_alt _UAV_yaw _UAV_vx _UAV_vy _cam_x _cam_y _cam_z ))

(defmethod dji_osdk_ros::iuslMyState
  (:init
   (&key
    ((:time __time) 0.0)
    ((:UAV_lat __UAV_lat) 0.0)
    ((:UAV_lon __UAV_lon) 0.0)
    ((:UAV_alt __UAV_alt) 0.0)
    ((:UAV_yaw __UAV_yaw) 0.0)
    ((:UAV_vx __UAV_vx) 0.0)
    ((:UAV_vy __UAV_vy) 0.0)
    ((:cam_x __cam_x) 0.0)
    ((:cam_y __cam_y) 0.0)
    ((:cam_z __cam_z) 0.0)
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _UAV_lat (float __UAV_lat))
   (setq _UAV_lon (float __UAV_lon))
   (setq _UAV_alt (float __UAV_alt))
   (setq _UAV_yaw (float __UAV_yaw))
   (setq _UAV_vx (float __UAV_vx))
   (setq _UAV_vy (float __UAV_vy))
   (setq _cam_x (float __cam_x))
   (setq _cam_y (float __cam_y))
   (setq _cam_z (float __cam_z))
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:UAV_lat
   (&optional __UAV_lat)
   (if __UAV_lat (setq _UAV_lat __UAV_lat)) _UAV_lat)
  (:UAV_lon
   (&optional __UAV_lon)
   (if __UAV_lon (setq _UAV_lon __UAV_lon)) _UAV_lon)
  (:UAV_alt
   (&optional __UAV_alt)
   (if __UAV_alt (setq _UAV_alt __UAV_alt)) _UAV_alt)
  (:UAV_yaw
   (&optional __UAV_yaw)
   (if __UAV_yaw (setq _UAV_yaw __UAV_yaw)) _UAV_yaw)
  (:UAV_vx
   (&optional __UAV_vx)
   (if __UAV_vx (setq _UAV_vx __UAV_vx)) _UAV_vx)
  (:UAV_vy
   (&optional __UAV_vy)
   (if __UAV_vy (setq _UAV_vy __UAV_vy)) _UAV_vy)
  (:cam_x
   (&optional __cam_x)
   (if __cam_x (setq _cam_x __cam_x)) _cam_x)
  (:cam_y
   (&optional __cam_y)
   (if __cam_y (setq _cam_y __cam_y)) _cam_y)
  (:cam_z
   (&optional __cam_z)
   (if __cam_z (setq _cam_z __cam_z)) _cam_z)
  (:serialization-length
   ()
   (+
    ;; float64 _time
    8
    ;; float64 _UAV_lat
    8
    ;; float64 _UAV_lon
    8
    ;; float64 _UAV_alt
    8
    ;; float64 _UAV_yaw
    8
    ;; float64 _UAV_vx
    8
    ;; float64 _UAV_vy
    8
    ;; float64 _cam_x
    8
    ;; float64 _cam_y
    8
    ;; float64 _cam_z
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _time
       (sys::poke _time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_lat
       (sys::poke _UAV_lat (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_lon
       (sys::poke _UAV_lon (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_alt
       (sys::poke _UAV_alt (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_yaw
       (sys::poke _UAV_yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_vx
       (sys::poke _UAV_vx (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_vy
       (sys::poke _UAV_vy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_x
       (sys::poke _cam_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_y
       (sys::poke _cam_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_z
       (sys::poke _cam_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _time
     (setq _time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_lat
     (setq _UAV_lat (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_lon
     (setq _UAV_lon (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_alt
     (setq _UAV_alt (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_yaw
     (setq _UAV_yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_vx
     (setq _UAV_vx (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_vy
     (setq _UAV_vy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_x
     (setq _cam_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_y
     (setq _cam_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_z
     (setq _cam_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslMyState :md5sum-) "27d296a0eab46d69158326fe8e2a6ff1")
(setf (get dji_osdk_ros::iuslMyState :datatype-) "dji_osdk_ros/iuslMyState")
(setf (get dji_osdk_ros::iuslMyState :definition-)
      "
float64 time

float64 UAV_lat
float64 UAV_lon
float64 UAV_alt
float64 UAV_yaw
float64 UAV_vx
float64 UAV_vy
float64 cam_x
float64 cam_y
float64 cam_z


")



(provide :dji_osdk_ros/iuslMyState "27d296a0eab46d69158326fe8e2a6ff1")


