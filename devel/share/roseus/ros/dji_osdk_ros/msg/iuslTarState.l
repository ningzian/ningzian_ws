;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslTarState)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslTarState (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLTARSTATE")
  (make-package "DJI_OSDK_ROS::IUSLTARSTATE"))

(in-package "ROS")
;;//! \htmlinclude iuslTarState.msg.html


(defclass dji_osdk_ros::iuslTarState
  :super ros::object
  :slots (_tar_OK _is_laser_measured _tar_x _tar_y _tar_z _tar_vx _tar_vy _fuse_dis ))

(defmethod dji_osdk_ros::iuslTarState
  (:init
   (&key
    ((:tar_OK __tar_OK) nil)
    ((:is_laser_measured __is_laser_measured) nil)
    ((:tar_x __tar_x) 0.0)
    ((:tar_y __tar_y) 0.0)
    ((:tar_z __tar_z) 0.0)
    ((:tar_vx __tar_vx) 0.0)
    ((:tar_vy __tar_vy) 0.0)
    ((:fuse_dis __fuse_dis) 0.0)
    )
   (send-super :init)
   (setq _tar_OK __tar_OK)
   (setq _is_laser_measured __is_laser_measured)
   (setq _tar_x (float __tar_x))
   (setq _tar_y (float __tar_y))
   (setq _tar_z (float __tar_z))
   (setq _tar_vx (float __tar_vx))
   (setq _tar_vy (float __tar_vy))
   (setq _fuse_dis (float __fuse_dis))
   self)
  (:tar_OK
   (&optional __tar_OK)
   (if __tar_OK (setq _tar_OK __tar_OK)) _tar_OK)
  (:is_laser_measured
   (&optional __is_laser_measured)
   (if __is_laser_measured (setq _is_laser_measured __is_laser_measured)) _is_laser_measured)
  (:tar_x
   (&optional __tar_x)
   (if __tar_x (setq _tar_x __tar_x)) _tar_x)
  (:tar_y
   (&optional __tar_y)
   (if __tar_y (setq _tar_y __tar_y)) _tar_y)
  (:tar_z
   (&optional __tar_z)
   (if __tar_z (setq _tar_z __tar_z)) _tar_z)
  (:tar_vx
   (&optional __tar_vx)
   (if __tar_vx (setq _tar_vx __tar_vx)) _tar_vx)
  (:tar_vy
   (&optional __tar_vy)
   (if __tar_vy (setq _tar_vy __tar_vy)) _tar_vy)
  (:fuse_dis
   (&optional __fuse_dis)
   (if __fuse_dis (setq _fuse_dis __fuse_dis)) _fuse_dis)
  (:serialization-length
   ()
   (+
    ;; bool _tar_OK
    1
    ;; bool _is_laser_measured
    1
    ;; float64 _tar_x
    8
    ;; float64 _tar_y
    8
    ;; float64 _tar_z
    8
    ;; float64 _tar_vx
    8
    ;; float64 _tar_vy
    8
    ;; float64 _fuse_dis
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _tar_OK
       (if _tar_OK (write-byte -1 s) (write-byte 0 s))
     ;; bool _is_laser_measured
       (if _is_laser_measured (write-byte -1 s) (write-byte 0 s))
     ;; float64 _tar_x
       (sys::poke _tar_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _tar_y
       (sys::poke _tar_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _tar_z
       (sys::poke _tar_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _tar_vx
       (sys::poke _tar_vx (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _tar_vy
       (sys::poke _tar_vy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _fuse_dis
       (sys::poke _fuse_dis (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _tar_OK
     (setq _tar_OK (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _is_laser_measured
     (setq _is_laser_measured (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _tar_x
     (setq _tar_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _tar_y
     (setq _tar_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _tar_z
     (setq _tar_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _tar_vx
     (setq _tar_vx (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _tar_vy
     (setq _tar_vy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _fuse_dis
     (setq _fuse_dis (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslTarState :md5sum-) "b55949212e6e57bd4195732ade60e369")
(setf (get dji_osdk_ros::iuslTarState :datatype-) "dji_osdk_ros/iuslTarState")
(setf (get dji_osdk_ros::iuslTarState :definition-)
      "# estimated target UAV state

bool tar_OK
bool is_laser_measured

float64 tar_x
float64 tar_y
float64 tar_z
float64 tar_vx
float64 tar_vy

float64 fuse_dis


")



(provide :dji_osdk_ros/iuslTarState "b55949212e6e57bd4195732ade60e369")


