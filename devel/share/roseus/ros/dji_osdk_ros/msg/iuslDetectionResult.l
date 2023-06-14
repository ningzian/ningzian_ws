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
  :slots (_time _center_x _center_y _box_width _box_height _max_length _cam_pitch _cam_yaw _cam_roll _cam_x _cam_y _cam_z _laser_dis ))

(defmethod dji_osdk_ros::iuslDetectionResult
  (:init
   (&key
    ((:time __time) 0.0)
    ((:center_x __center_x) 0)
    ((:center_y __center_y) 0)
    ((:box_width __box_width) 0)
    ((:box_height __box_height) 0)
    ((:max_length __max_length) 0)
    ((:cam_pitch __cam_pitch) 0.0)
    ((:cam_yaw __cam_yaw) 0.0)
    ((:cam_roll __cam_roll) 0.0)
    ((:cam_x __cam_x) 0.0)
    ((:cam_y __cam_y) 0.0)
    ((:cam_z __cam_z) 0.0)
    ((:laser_dis __laser_dis) 0.0)
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _center_x (round __center_x))
   (setq _center_y (round __center_y))
   (setq _box_width (round __box_width))
   (setq _box_height (round __box_height))
   (setq _max_length (round __max_length))
   (setq _cam_pitch (float __cam_pitch))
   (setq _cam_yaw (float __cam_yaw))
   (setq _cam_roll (float __cam_roll))
   (setq _cam_x (float __cam_x))
   (setq _cam_y (float __cam_y))
   (setq _cam_z (float __cam_z))
   (setq _laser_dis (float __laser_dis))
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:center_x
   (&optional __center_x)
   (if __center_x (setq _center_x __center_x)) _center_x)
  (:center_y
   (&optional __center_y)
   (if __center_y (setq _center_y __center_y)) _center_y)
  (:box_width
   (&optional __box_width)
   (if __box_width (setq _box_width __box_width)) _box_width)
  (:box_height
   (&optional __box_height)
   (if __box_height (setq _box_height __box_height)) _box_height)
  (:max_length
   (&optional __max_length)
   (if __max_length (setq _max_length __max_length)) _max_length)
  (:cam_pitch
   (&optional __cam_pitch)
   (if __cam_pitch (setq _cam_pitch __cam_pitch)) _cam_pitch)
  (:cam_yaw
   (&optional __cam_yaw)
   (if __cam_yaw (setq _cam_yaw __cam_yaw)) _cam_yaw)
  (:cam_roll
   (&optional __cam_roll)
   (if __cam_roll (setq _cam_roll __cam_roll)) _cam_roll)
  (:cam_x
   (&optional __cam_x)
   (if __cam_x (setq _cam_x __cam_x)) _cam_x)
  (:cam_y
   (&optional __cam_y)
   (if __cam_y (setq _cam_y __cam_y)) _cam_y)
  (:cam_z
   (&optional __cam_z)
   (if __cam_z (setq _cam_z __cam_z)) _cam_z)
  (:laser_dis
   (&optional __laser_dis)
   (if __laser_dis (setq _laser_dis __laser_dis)) _laser_dis)
  (:serialization-length
   ()
   (+
    ;; float64 _time
    8
    ;; int64 _center_x
    8
    ;; int64 _center_y
    8
    ;; int64 _box_width
    8
    ;; int64 _box_height
    8
    ;; int64 _max_length
    8
    ;; float64 _cam_pitch
    8
    ;; float64 _cam_yaw
    8
    ;; float64 _cam_roll
    8
    ;; float64 _cam_x
    8
    ;; float64 _cam_y
    8
    ;; float64 _cam_z
    8
    ;; float64 _laser_dis
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _time
       (sys::poke _time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
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
     ;; int64 _box_width
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _box_width (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _box_width) (= (length (_box_width . bv)) 2)) ;; bignum
              (write-long (ash (elt (_box_width . bv) 0) 0) s)
              (write-long (ash (elt (_box_width . bv) 1) -1) s))
             ((and (class _box_width) (= (length (_box_width . bv)) 1)) ;; big1
              (write-long (elt (_box_width . bv) 0) s)
              (write-long (if (>= _box_width 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _box_width s)(write-long (if (>= _box_width 0) 0 #xffffffff) s)))
     ;; int64 _box_height
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _box_height (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _box_height) (= (length (_box_height . bv)) 2)) ;; bignum
              (write-long (ash (elt (_box_height . bv) 0) 0) s)
              (write-long (ash (elt (_box_height . bv) 1) -1) s))
             ((and (class _box_height) (= (length (_box_height . bv)) 1)) ;; big1
              (write-long (elt (_box_height . bv) 0) s)
              (write-long (if (>= _box_height 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _box_height s)(write-long (if (>= _box_height 0) 0 #xffffffff) s)))
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
     ;; float64 _cam_pitch
       (sys::poke _cam_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_yaw
       (sys::poke _cam_yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_roll
       (sys::poke _cam_roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_x
       (sys::poke _cam_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_y
       (sys::poke _cam_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cam_z
       (sys::poke _cam_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _laser_dis
       (sys::poke _laser_dis (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _time
     (setq _time (sys::peek buf ptr- :double)) (incf ptr- 8)
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
   ;; int64 _box_width
#+(or :alpha :irix6 :x86_64)
      (setf _box_width (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _box_width (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _box_height
#+(or :alpha :irix6 :x86_64)
      (setf _box_height (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _box_height (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
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
   ;; float64 _cam_pitch
     (setq _cam_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_yaw
     (setq _cam_yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_roll
     (setq _cam_roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_x
     (setq _cam_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_y
     (setq _cam_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cam_z
     (setq _cam_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _laser_dis
     (setq _laser_dis (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dji_osdk_ros::iuslDetectionResult :md5sum-) "dae7cd9d9df656963a2f88cef4458177")
(setf (get dji_osdk_ros::iuslDetectionResult :datatype-) "dji_osdk_ros/iuslDetectionResult")
(setf (get dji_osdk_ros::iuslDetectionResult :definition-)
      "# time
float64 time

# boundingbox
int64 center_x
int64 center_y
int64 box_width
int64 box_height
int64 max_length

# camera state
float64 cam_pitch
float64 cam_yaw
float64 cam_roll
float64 cam_x
float64 cam_y
float64 cam_z

# laser state
float64 laser_dis


")



(provide :dji_osdk_ros/iuslDetectionResult "dae7cd9d9df656963a2f88cef4458177")


