;; Auto-generated. Do not edit!


(when (boundp 'dji_osdk_ros::DownloadWaypointV2Mission)
  (if (not (find-package "DJI_OSDK_ROS"))
    (make-package "DJI_OSDK_ROS"))
  (shadow 'DownloadWaypointV2Mission (find-package "DJI_OSDK_ROS")))
(unless (find-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSION")
  (make-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSION"))
(unless (find-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSIONREQUEST")
  (make-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSIONREQUEST"))
(unless (find-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSIONRESPONSE")
  (make-package "DJI_OSDK_ROS::DOWNLOADWAYPOINTV2MISSIONRESPONSE"))

(in-package "ROS")





(defclass dji_osdk_ros::DownloadWaypointV2MissionRequest
  :super ros::object
  :slots ())

(defmethod dji_osdk_ros::DownloadWaypointV2MissionRequest
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

(defclass dji_osdk_ros::DownloadWaypointV2MissionResponse
  :super ros::object
  :slots (_mission _result ))

(defmethod dji_osdk_ros::DownloadWaypointV2MissionResponse
  (:init
   (&key
    ((:mission __mission) (let (r) (dotimes (i 0) (push (instance dji_osdk_ros::WaypointV2 :init) r)) r))
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _mission __mission)
   (setq _result __result)
   self)
  (:mission
   (&rest __mission)
   (if (keywordp (car __mission))
       (send* _mission __mission)
     (progn
       (if __mission (setq _mission (car __mission)))
       _mission)))
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; dji_osdk_ros/WaypointV2[] _mission
    (apply #'+ (send-all _mission :serialization-length)) 4
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; dji_osdk_ros/WaypointV2[] _mission
     (write-long (length _mission) s)
     (dolist (elem _mission)
       (send elem :serialize s)
       )
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; dji_osdk_ros/WaypointV2[] _mission
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _mission (let (r) (dotimes (i n) (push (instance dji_osdk_ros::WaypointV2 :init) r)) r))
     (dolist (elem- _mission)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dji_osdk_ros::DownloadWaypointV2Mission
  :super ros::object
  :slots ())

(setf (get dji_osdk_ros::DownloadWaypointV2Mission :md5sum-) "4b9a6e8c58bda1e8d747c69006bbc940")
(setf (get dji_osdk_ros::DownloadWaypointV2Mission :datatype-) "dji_osdk_ros/DownloadWaypointV2Mission")
(setf (get dji_osdk_ros::DownloadWaypointV2Mission :request) dji_osdk_ros::DownloadWaypointV2MissionRequest)
(setf (get dji_osdk_ros::DownloadWaypointV2Mission :response) dji_osdk_ros::DownloadWaypointV2MissionResponse)

(defmethod dji_osdk_ros::DownloadWaypointV2MissionRequest
  (:response () (instance dji_osdk_ros::DownloadWaypointV2MissionResponse :init)))

(setf (get dji_osdk_ros::DownloadWaypointV2MissionRequest :md5sum-) "4b9a6e8c58bda1e8d747c69006bbc940")
(setf (get dji_osdk_ros::DownloadWaypointV2MissionRequest :datatype-) "dji_osdk_ros/DownloadWaypointV2MissionRequest")
(setf (get dji_osdk_ros::DownloadWaypointV2MissionRequest :definition-)
      "
---

WaypointV2[] mission
bool result

================================================================================
MSG: dji_osdk_ros/WaypointV2
# The struct represents a target point in the waypoint mission. For a waypoint

#constant for flightpathMode
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurve = 0  #In the mission, the aircraft will go to the waypoint along a curve and fly past the waypoint.
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurveAndStop = 1 #In the mission, the aircraft will go to the waypoint along a curve and stop at the waypoint.
uint8 DJIWaypointV2FlightPathModeGoToPointInAStraightLineAndStop = 2  #In the mission, the aircraft will go to the waypoint along a straight line and stop at the waypoint.
uint8 DJIWaypointV2FlightPathModeCoordinateTurn = 3   #In the mission, the aircraft will fly from the previous waypoint to the next waypoint along a smooth curve without stopping at this waypoint.
                                                      #the next in a curved motion,  adhering to the ``DJIWaypointV2_dampingDistance``, which is
                                                      #set in ``DJIWaypointV2``.
uint8 DJIWaypointV2FlightPathModeGoToFirstPointAlongAStraightLine = 4  # In the mission, the aircraft will go to the first waypoint along a straight line.
                                                                       # This is only valid for the first waypoint.
uint8 DJIWaypointV2FlightPathModeStraightOut = 5   # Straight exit the Last waypoint, Only valid for last waypoint.
uint8 DJIWaypointV2FlightPathModeUnknown = 255    # Unknown

#constant for headMode
uint8 DJIWaypointV2HeadingModeAuto = 0    # Aircraft's heading will always be in the direction of flight.
uint8 DJIWaypointV2HeadingFixed    = 1    # Aircraft's heading will be set to the heading when reaching the first waypoint.
                                          # Before reaching the first waypoint, the aircraft's heading can be controlled by
                                          # the remote controller. When the aircraft reaches the first waypoint, its
                                          # heading will be fixed.
uint8 DJIWaypointV2HeadingManual   = 2    # The aircraft's heading in the mission can be controlled by the remote controller.
uint8 DJIWaypointV2HeadingWaypointCustom = 3  # In the mission, the aircraft's heading will change dynamically and adapt to the heading set at the next waypoint.
                                               # See ``DJIWaypointV2_heading`` to preset the heading.
uint8 DJIWaypointV2HeadingTowardPointOfInterest = 4 # Aircraft's heading will always toward point of interest.
                                                    # using ``DJIWaypointV2_pointOfInterest`` setting point of interest coordiate and ``DJIWaypointV2_pointOfInterestAltitude``
                                                    # setting point of interset altitute.
uint8 DJIWaypointV2HeadingGimbalYawFollow  = 5   # The aircraft's heading rotate simultaneously with its gimbal's yaw.
uint8 DJIWaypointV2HeadingUnknown = 255         # Unknown.

#constant for turnMode
uint8 DJIWaypointV2TurnModeClockwise = 0  # The aircraft's heading rotates clockwise.
uint8 DJIWaypointV2TurnModeCounterClockwise = 1   # The aircraft's heading rotates counterclockwise.
uint8 DJIWaypointV2TurnModeUnknown = 255    # Changes the heading of the aircraft by rotating the aircraft anti-clockwise.



#  mission, a flight route  consists of multiple `WaypointV2` objects.
float64 longitude  # waypoint position relative to WayPointV2InitSettings's reference point.unit: m
float64 latitude
float32 relativeHeight  # relative to takeoff height
uint8   waypointType    # Waypoint flight path mode
uint8   headingMode     # Represents current aircraft's heading mode on current waypoint.
WaypointV2Config  config          # Represents current waypoint's speed config.
uint16  dampingDistance
float32 heading         # The heading to which the aircraft will rotate by the time it reaches the
                        # waypoint. The aircraft heading  will gradually change between two waypoints with
                        # different headings if the waypoint  mission's `headingMode` is set  to
                        # 'DJIWaypointV2_DJIWaypointV2HeadingMode_WaypointCustom`. A heading has a range of
                        # [-180, 180] degrees, where 0 represents True North.
uint8 turnMode          # Determines whether the aircraft will turn clockwise or anticlockwise when
                        # changing its heading.
# Property is used when ``DJIWaypointV2_headingMode`` is
# ``DJIWaypointV2_DJIWaypointV2HeadingMode_TowardPointOfInterest``.
# Aircraft will always be heading to point while executing mission. Default is
# \"kCLLocationCoordinate2DInvalid\".
float32 positionX       # X distance to reference point, North is positive
float32 positionY       # Y distance to reference point, East is positive
float32 positionZ       # Z distance to reference point, UP is positive

# While the aircraft is travelling between waypoints, you can offset its speed by
# using the throttle joystick on the remote controller. \"maxFlightSpeed\" is this
# offset when the joystick is pushed to maximum deflection. For example, If
# maxFlightSpeed is 10 m/s, then pushing the throttle joystick all the way up will
# add 10 m/s to the aircraft speed, while pushing down will subtract 10 m/s from
# the aircraft speed. If the remote controller stick is not at maximum deflection,
# then the offset speed will be interpolated between \"[0, maxFlightSpeed]\"\" with a
# resolution of 1000 steps. If the offset speed is negative, then the aircraft
# will fly backwards to previous waypoints. When it reaches the first waypoint, it
# will then hover in place until a positive speed is applied. \"maxFlightSpeed\" has
# a range of [2,15] m/s.
float32 maxFlightSpeed

# The base automatic speed of the aircraft as it moves between waypoints with
# range [-15, 15] m/s. The aircraft's actual speed is a combination of the base
# automatic speed, and the speed control given by the throttle joystick on the
# remote controller. If \"autoFlightSpeed >0\": Actual speed is \"autoFlightSpeed\" +
# Joystick Speed (with combined max of \"maxFlightSpeed\") If \"autoFlightSpeed =0\":
# Actual speed is controlled only by the remote controller joystick. If
# autoFlightSpeed <0\" and the aircraft is at the first waypoint, the aircraft
# will hover in place until the speed is made positive by the remote controller
# joystick. In flight controller firmware 3.2.10.0 or above, different speeds
# between individual waypoints can also be set in waypoint objects which will
# overwrite \"autoFlightSpeed\".
float32 autoFlightSpeed
================================================================================
MSG: dji_osdk_ros/WaypointV2Config
# Represents current waypoint's speed config.
# 0: set local waypoint's cruise speed,
# 1: unset global waypoint's cruise speed*/
uint8  useLocalCruiseVel
# 0: set local waypoint's max speed,
# 1: unset global waypoint's max speed*/
")

(setf (get dji_osdk_ros::DownloadWaypointV2MissionResponse :md5sum-) "4b9a6e8c58bda1e8d747c69006bbc940")
(setf (get dji_osdk_ros::DownloadWaypointV2MissionResponse :datatype-) "dji_osdk_ros/DownloadWaypointV2MissionResponse")
(setf (get dji_osdk_ros::DownloadWaypointV2MissionResponse :definition-)
      "
---

WaypointV2[] mission
bool result

================================================================================
MSG: dji_osdk_ros/WaypointV2
# The struct represents a target point in the waypoint mission. For a waypoint

#constant for flightpathMode
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurve = 0  #In the mission, the aircraft will go to the waypoint along a curve and fly past the waypoint.
uint8 DJIWaypointV2FlightPathModeGoToPointAlongACurveAndStop = 1 #In the mission, the aircraft will go to the waypoint along a curve and stop at the waypoint.
uint8 DJIWaypointV2FlightPathModeGoToPointInAStraightLineAndStop = 2  #In the mission, the aircraft will go to the waypoint along a straight line and stop at the waypoint.
uint8 DJIWaypointV2FlightPathModeCoordinateTurn = 3   #In the mission, the aircraft will fly from the previous waypoint to the next waypoint along a smooth curve without stopping at this waypoint.
                                                      #the next in a curved motion,  adhering to the ``DJIWaypointV2_dampingDistance``, which is
                                                      #set in ``DJIWaypointV2``.
uint8 DJIWaypointV2FlightPathModeGoToFirstPointAlongAStraightLine = 4  # In the mission, the aircraft will go to the first waypoint along a straight line.
                                                                       # This is only valid for the first waypoint.
uint8 DJIWaypointV2FlightPathModeStraightOut = 5   # Straight exit the Last waypoint, Only valid for last waypoint.
uint8 DJIWaypointV2FlightPathModeUnknown = 255    # Unknown

#constant for headMode
uint8 DJIWaypointV2HeadingModeAuto = 0    # Aircraft's heading will always be in the direction of flight.
uint8 DJIWaypointV2HeadingFixed    = 1    # Aircraft's heading will be set to the heading when reaching the first waypoint.
                                          # Before reaching the first waypoint, the aircraft's heading can be controlled by
                                          # the remote controller. When the aircraft reaches the first waypoint, its
                                          # heading will be fixed.
uint8 DJIWaypointV2HeadingManual   = 2    # The aircraft's heading in the mission can be controlled by the remote controller.
uint8 DJIWaypointV2HeadingWaypointCustom = 3  # In the mission, the aircraft's heading will change dynamically and adapt to the heading set at the next waypoint.
                                               # See ``DJIWaypointV2_heading`` to preset the heading.
uint8 DJIWaypointV2HeadingTowardPointOfInterest = 4 # Aircraft's heading will always toward point of interest.
                                                    # using ``DJIWaypointV2_pointOfInterest`` setting point of interest coordiate and ``DJIWaypointV2_pointOfInterestAltitude``
                                                    # setting point of interset altitute.
uint8 DJIWaypointV2HeadingGimbalYawFollow  = 5   # The aircraft's heading rotate simultaneously with its gimbal's yaw.
uint8 DJIWaypointV2HeadingUnknown = 255         # Unknown.

#constant for turnMode
uint8 DJIWaypointV2TurnModeClockwise = 0  # The aircraft's heading rotates clockwise.
uint8 DJIWaypointV2TurnModeCounterClockwise = 1   # The aircraft's heading rotates counterclockwise.
uint8 DJIWaypointV2TurnModeUnknown = 255    # Changes the heading of the aircraft by rotating the aircraft anti-clockwise.



#  mission, a flight route  consists of multiple `WaypointV2` objects.
float64 longitude  # waypoint position relative to WayPointV2InitSettings's reference point.unit: m
float64 latitude
float32 relativeHeight  # relative to takeoff height
uint8   waypointType    # Waypoint flight path mode
uint8   headingMode     # Represents current aircraft's heading mode on current waypoint.
WaypointV2Config  config          # Represents current waypoint's speed config.
uint16  dampingDistance
float32 heading         # The heading to which the aircraft will rotate by the time it reaches the
                        # waypoint. The aircraft heading  will gradually change between two waypoints with
                        # different headings if the waypoint  mission's `headingMode` is set  to
                        # 'DJIWaypointV2_DJIWaypointV2HeadingMode_WaypointCustom`. A heading has a range of
                        # [-180, 180] degrees, where 0 represents True North.
uint8 turnMode          # Determines whether the aircraft will turn clockwise or anticlockwise when
                        # changing its heading.
# Property is used when ``DJIWaypointV2_headingMode`` is
# ``DJIWaypointV2_DJIWaypointV2HeadingMode_TowardPointOfInterest``.
# Aircraft will always be heading to point while executing mission. Default is
# \"kCLLocationCoordinate2DInvalid\".
float32 positionX       # X distance to reference point, North is positive
float32 positionY       # Y distance to reference point, East is positive
float32 positionZ       # Z distance to reference point, UP is positive

# While the aircraft is travelling between waypoints, you can offset its speed by
# using the throttle joystick on the remote controller. \"maxFlightSpeed\" is this
# offset when the joystick is pushed to maximum deflection. For example, If
# maxFlightSpeed is 10 m/s, then pushing the throttle joystick all the way up will
# add 10 m/s to the aircraft speed, while pushing down will subtract 10 m/s from
# the aircraft speed. If the remote controller stick is not at maximum deflection,
# then the offset speed will be interpolated between \"[0, maxFlightSpeed]\"\" with a
# resolution of 1000 steps. If the offset speed is negative, then the aircraft
# will fly backwards to previous waypoints. When it reaches the first waypoint, it
# will then hover in place until a positive speed is applied. \"maxFlightSpeed\" has
# a range of [2,15] m/s.
float32 maxFlightSpeed

# The base automatic speed of the aircraft as it moves between waypoints with
# range [-15, 15] m/s. The aircraft's actual speed is a combination of the base
# automatic speed, and the speed control given by the throttle joystick on the
# remote controller. If \"autoFlightSpeed >0\": Actual speed is \"autoFlightSpeed\" +
# Joystick Speed (with combined max of \"maxFlightSpeed\") If \"autoFlightSpeed =0\":
# Actual speed is controlled only by the remote controller joystick. If
# autoFlightSpeed <0\" and the aircraft is at the first waypoint, the aircraft
# will hover in place until the speed is made positive by the remote controller
# joystick. In flight controller firmware 3.2.10.0 or above, different speeds
# between individual waypoints can also be set in waypoint objects which will
# overwrite \"autoFlightSpeed\".
float32 autoFlightSpeed
================================================================================
MSG: dji_osdk_ros/WaypointV2Config
# Represents current waypoint's speed config.
# 0: set local waypoint's cruise speed,
# 1: unset global waypoint's cruise speed*/
uint8  useLocalCruiseVel
# 0: set local waypoint's max speed,
# 1: unset global waypoint's max speed*/
")



(provide :dji_osdk_ros/DownloadWaypointV2Mission "4b9a6e8c58bda1e8d747c69006bbc940")


