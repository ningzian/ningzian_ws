;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::iuslDetectionResult)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'iuslDetectionResult (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::IUSLDETECTIONRESULT")
  (make-package "DJI_OSDK_ROS::IUSLDETECTIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude iuslDetectionResult.msg.html


(defclass dji_osdk_ros::iuslDetectionResult
  :super ros::object
  :slots (_center_x _center_y _max_length _pitch _yaw _roll _UAV_lat _UAV_lon _UAV_alt _UAV_vx _UAV_vy _laser_dis ))

(defmethod dji_osdk_ros::iuslDetectionResult
  (:init
   (&key
    ((:center_x __center_x) 0)
    ((:center_y __center_y) 0)
    ((:max_length __max_length) 0)
    ((:pitch __pitch) 0.0)
    ((:yaw __yaw) 0.0)
    ((:roll __roll) 0.0)
    ((:UAV_lat __UAV_lat) 0.0)
    ((:UAV_lon __UAV_lon) 0.0)
    ((:UAV_alt __UAV_alt) 0.0)
    ((:UAV_vx __UAV_vx) 0.0)
    ((:UAV_vy __UAV_vy) 0.0)
    ((:laser_dis __laser_dis) 0.0)
    )
   (send-super :init)
   (setq _center_x (round __center_x))
   (setq _center_y (round __center_y))
   (setq _max_length (round __max_length))
   (setq _pitch (float __pitch))
   (setq _yaw (float __yaw))
   (setq _roll (float __roll))
   (setq _UAV_lat (float __UAV_lat))
   (setq _UAV_lon (float __UAV_lon))
   (setq _UAV_alt (float __UAV_alt))
   (setq _UAV_vx (float __UAV_vx))
   (setq _UAV_vy (float __UAV_vy))
   (setq _laser_dis (float __laser_dis))
   self)
  (:center_x
   (&optional __center_x)
   (if __center_x (setq _center_x __center_x)) _center_x)
  (:center_y
   (&optional __center_y)
   (if __center_y (setq _center_y __center_y)) _center_y)
  (:max_length
   (&optional __max_length)
   (if __max_length (setq _max_length __max_length)) _max_length)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:roll
   (&optional __roll)
   (if __roll (setq _roll __roll)) _roll)
  (:UAV_lat
   (&optional __UAV_lat)
   (if __UAV_lat (setq _UAV_lat __UAV_lat)) _UAV_lat)
  (:UAV_lon
   (&optional __UAV_lon)
   (if __UAV_lon (setq _UAV_lon __UAV_lon)) _UAV_lon)
  (:UAV_alt
   (&optional __UAV_alt)
   (if __UAV_alt (setq _UAV_alt __UAV_alt)) _UAV_alt)
  (:UAV_vx
   (&optional __UAV_vx)
   (if __UAV_vx (setq _UAV_vx __UAV_vx)) _UAV_vx)
  (:UAV_vy
   (&optional __UAV_vy)
   (if __UAV_vy (setq _UAV_vy __UAV_vy)) _UAV_vy)
  (:laser_dis
   (&optional __laser_dis)
   (if __laser_dis (setq _laser_dis __laser_dis)) _laser_dis)
  (:serialization-length
   ()
   (+
    ;; int64 _center_x
    8
    ;; int64 _center_y
    8
    ;; int64 _max_length
    8
    ;; float64 _pitch
    8
    ;; float64 _yaw
    8
    ;; float64 _roll
    8
    ;; float64 _UAV_lat
    8
    ;; float64 _UAV_lon
    8
    ;; float64 _UAV_alt
    8
    ;; float64 _UAV_vx
    8
    ;; float64 _UAV_vy
    8
    ;; float64 _laser_dis
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _center_x
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _center_x (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _center_x) (= (length (_center_x . bv)) 2)) ;; bignum
              (write-long (ash (elt (_center_x . bv) 0) 0) s)
              (write-long (ash (elt (_center_x . bv) 1) -1) s))
             ((and (class _center_x) (= (length (_center_x . bv)) 1)) ;; big1
              (write-long (elt (_center_x . bv) 0) s)
              (write-long (if (>= _center_x 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _center_x s)(write-long (if (>= _center_x 0) 0 #xffffffff) s)))
     ;; int64 _center_y
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _center_y (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _center_y) (= (length (_center_y . bv)) 2)) ;; bignum
              (write-long (ash (elt (_center_y . bv) 0) 0) s)
              (write-long (ash (elt (_center_y . bv) 1) -1) s))
             ((and (class _center_y) (= (length (_center_y . bv)) 1)) ;; big1
              (write-long (elt (_center_y . bv) 0) s)
              (write-long (if (>= _center_y 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _center_y s)(write-long (if (>= _center_y 0) 0 #xffffffff) s)))
     ;; int64 _max_length
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _max_length (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _max_length) (= (length (_max_length . bv)) 2)) ;; bignum
              (write-long (ash (elt (_max_length . bv) 0) 0) s)
              (write-long (ash (elt (_max_length . bv) 1) -1) s))
             ((and (class _max_length) (= (length (_max_length . bv)) 1)) ;; big1
              (write-long (elt (_max_length . bv) 0) s)
              (write-long (if (>= _max_length 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _max_length s)(write-long (if (>= _max_length 0) 0 #xffffffff) s)))
     ;; float64 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _roll
       (sys::poke _roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_lat
       (sys::poke _UAV_lat (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_lon
       (sys::poke _UAV_lon (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_alt
       (sys::poke _UAV_alt (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_vx
       (sys::poke _UAV_vx (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _UAV_vy
       (sys::poke _UAV_vy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _laser_dis
       (sys::poke _laser_dis (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _center_x
#+(or :alpha :irix6 :x86_64)
      (setf _center_x (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _center_x (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _center_y
#+(or :alpha :irix6 :x86_64)
      (setf _center_y (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _center_y (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _max_length
#+(or :alpha :irix6 :x86_64)
      (setf _max_length (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _max_length (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; float64 _pitch
     (setq _pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw
     (setq _yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _roll
     (setq _roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_lat
     (setq _UAV_lat (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_lon
     (setq _UAV_lon (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_alt
     (setq _UAV_alt (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_vx
     (setq _UAV_vx (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _UAV_vy
     (setq _UAV_vy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _laser_dis
     (setq _laser_dis (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslDetectionResult :md5sum-) "8e3ffe678e32878975c83b6d54d3b961")
(setf (get dji_osdk_ros::iuslDetectionResult :datatype-) "dji_osdk_ros/iuslDetectionResult")
(setf (get dji_osdk_ros::iuslDetectionResult :definition-)
      "# boundingbox
int64 center_x
int64 center_y
int64 max_length

# gimbal state
float64 pitch
float64 yaw
float64 roll

# UAV state
float64 UAV_lat
float64 UAV_lon
float64 UAV_alt
float64 UAV_vx
float64 UAV_vy

# laser state
float64 laser_dis


")



(provide :dji_osdk_ros/iuslDetectionResult "8e3ffe678e32878975c83b6d54d3b961")


