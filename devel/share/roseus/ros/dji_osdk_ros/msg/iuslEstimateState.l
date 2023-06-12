;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslEstimateState)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslEstimateState (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLESTIMATESTATE")
  (make-package "DJI_OSDK_ROS::IUSLESTIMATESTATE"))

(in-package "ROS")
;;//! \htmlinclude iuslEstimateState.msg.html


(defclass dji_osdk_ros::iuslEstimateState
  :super ros::object
  :slots (_est_ekf_OK _est_tar_x _est_tar_y _est_tar_z _est_tar_vx _est_tar_vy ))

(defmethod dji_osdk_ros::iuslEstimateState
  (:init
   (&key
    ((:est_ekf_OK __est_ekf_OK) nil)
    ((:est_tar_x __est_tar_x) 0.0)
    ((:est_tar_y __est_tar_y) 0.0)
    ((:est_tar_z __est_tar_z) 0.0)
    ((:est_tar_vx __est_tar_vx) 0.0)
    ((:est_tar_vy __est_tar_vy) 0.0)
    )
   (send-super :init)
   (setq _est_ekf_OK __est_ekf_OK)
   (setq _est_tar_x (float __est_tar_x))
   (setq _est_tar_y (float __est_tar_y))
   (setq _est_tar_z (float __est_tar_z))
   (setq _est_tar_vx (float __est_tar_vx))
   (setq _est_tar_vy (float __est_tar_vy))
   self)
  (:est_ekf_OK
   (&optional __est_ekf_OK)
   (if __est_ekf_OK (setq _est_ekf_OK __est_ekf_OK)) _est_ekf_OK)
  (:est_tar_x
   (&optional __est_tar_x)
   (if __est_tar_x (setq _est_tar_x __est_tar_x)) _est_tar_x)
  (:est_tar_y
   (&optional __est_tar_y)
   (if __est_tar_y (setq _est_tar_y __est_tar_y)) _est_tar_y)
  (:est_tar_z
   (&optional __est_tar_z)
   (if __est_tar_z (setq _est_tar_z __est_tar_z)) _est_tar_z)
  (:est_tar_vx
   (&optional __est_tar_vx)
   (if __est_tar_vx (setq _est_tar_vx __est_tar_vx)) _est_tar_vx)
  (:est_tar_vy
   (&optional __est_tar_vy)
   (if __est_tar_vy (setq _est_tar_vy __est_tar_vy)) _est_tar_vy)
  (:serialization-length
   ()
   (+
    ;; bool _est_ekf_OK
    1
    ;; float64 _est_tar_x
    8
    ;; float64 _est_tar_y
    8
    ;; float64 _est_tar_z
    8
    ;; float64 _est_tar_vx
    8
    ;; float64 _est_tar_vy
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _est_ekf_OK
       (if _est_ekf_OK (write-byte -1 s) (write-byte 0 s))
     ;; float64 _est_tar_x
       (sys::poke _est_tar_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _est_tar_y
       (sys::poke _est_tar_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _est_tar_z
       (sys::poke _est_tar_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _est_tar_vx
       (sys::poke _est_tar_vx (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _est_tar_vy
       (sys::poke _est_tar_vy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _est_ekf_OK
     (setq _est_ekf_OK (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _est_tar_x
     (setq _est_tar_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _est_tar_y
     (setq _est_tar_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _est_tar_z
     (setq _est_tar_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _est_tar_vx
     (setq _est_tar_vx (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _est_tar_vy
     (setq _est_tar_vy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslEstimateState :md5sum-) "57b0b6b128ef5651ce9b3fe0084e19a4")
(setf (get dji_osdk_ros::iuslEstimateState :datatype-) "dji_osdk_ros/iuslEstimateState")
(setf (get dji_osdk_ros::iuslEstimateState :definition-)
      "# estimated target UAV state
bool est_ekf_OK
float64 est_tar_x
float64 est_tar_y
float64 est_tar_z
float64 est_tar_vx
float64 est_tar_vy


")



(provide :dji_osdk_ros/iuslEstimateState "57b0b6b128ef5651ce9b3fe0084e19a4")


