
(cl:in-package :asdf)

(defsystem "dji_osdk_ros-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "BatteryState" :depends-on ("_package_BatteryState"))
    (:file "_package_BatteryState" :depends-on ("_package"))
    (:file "BatteryWholeInfo" :depends-on ("_package_BatteryWholeInfo"))
    (:file "_package_BatteryWholeInfo" :depends-on ("_package"))
    (:file "FCTimeInUTC" :depends-on ("_package_FCTimeInUTC"))
    (:file "_package_FCTimeInUTC" :depends-on ("_package"))
    (:file "FlightAnomaly" :depends-on ("_package_FlightAnomaly"))
    (:file "_package_FlightAnomaly" :depends-on ("_package"))
    (:file "GPSUTC" :depends-on ("_package_GPSUTC"))
    (:file "_package_GPSUTC" :depends-on ("_package"))
    (:file "Gimbal" :depends-on ("_package_Gimbal"))
    (:file "_package_Gimbal" :depends-on ("_package"))
    (:file "HMSPushInfo" :depends-on ("_package_HMSPushInfo"))
    (:file "_package_HMSPushInfo" :depends-on ("_package"))
    (:file "JoystickParams" :depends-on ("_package_JoystickParams"))
    (:file "_package_JoystickParams" :depends-on ("_package"))
    (:file "MissionHotpointTask" :depends-on ("_package_MissionHotpointTask"))
    (:file "_package_MissionHotpointTask" :depends-on ("_package"))
    (:file "MissionWaypoint" :depends-on ("_package_MissionWaypoint"))
    (:file "_package_MissionWaypoint" :depends-on ("_package"))
    (:file "MissionWaypointAction" :depends-on ("_package_MissionWaypointAction"))
    (:file "_package_MissionWaypointAction" :depends-on ("_package"))
    (:file "MissionWaypointTask" :depends-on ("_package_MissionWaypointTask"))
    (:file "_package_MissionWaypointTask" :depends-on ("_package"))
    (:file "MobileData" :depends-on ("_package_MobileData"))
    (:file "_package_MobileData" :depends-on ("_package"))
    (:file "PayloadData" :depends-on ("_package_PayloadData"))
    (:file "_package_PayloadData" :depends-on ("_package"))
    (:file "SmartBatteryDynamicInfo" :depends-on ("_package_SmartBatteryDynamicInfo"))
    (:file "_package_SmartBatteryDynamicInfo" :depends-on ("_package"))
    (:file "SmartBatteryState" :depends-on ("_package_SmartBatteryState"))
    (:file "_package_SmartBatteryState" :depends-on ("_package"))
    (:file "VOPosition" :depends-on ("_package_VOPosition"))
    (:file "_package_VOPosition" :depends-on ("_package"))
    (:file "Waypoint" :depends-on ("_package_Waypoint"))
    (:file "_package_Waypoint" :depends-on ("_package"))
    (:file "WaypointList" :depends-on ("_package_WaypointList"))
    (:file "_package_WaypointList" :depends-on ("_package"))
    (:file "WaypointV2" :depends-on ("_package_WaypointV2"))
    (:file "_package_WaypointV2" :depends-on ("_package"))
    (:file "WaypointV2Action" :depends-on ("_package_WaypointV2Action"))
    (:file "_package_WaypointV2Action" :depends-on ("_package"))
    (:file "WaypointV2AircraftControlActuator" :depends-on ("_package_WaypointV2AircraftControlActuator"))
    (:file "_package_WaypointV2AircraftControlActuator" :depends-on ("_package"))
    (:file "WaypointV2AircraftControlActuatorFlying" :depends-on ("_package_WaypointV2AircraftControlActuatorFlying"))
    (:file "_package_WaypointV2AircraftControlActuatorFlying" :depends-on ("_package"))
    (:file "WaypointV2AircraftControlActuatorRotateHeading" :depends-on ("_package_WaypointV2AircraftControlActuatorRotateHeading"))
    (:file "_package_WaypointV2AircraftControlActuatorRotateHeading" :depends-on ("_package"))
    (:file "WaypointV2AssociateTrigger" :depends-on ("_package_WaypointV2AssociateTrigger"))
    (:file "_package_WaypointV2AssociateTrigger" :depends-on ("_package"))
    (:file "WaypointV2CameraActuator" :depends-on ("_package_WaypointV2CameraActuator"))
    (:file "_package_WaypointV2CameraActuator" :depends-on ("_package"))
    (:file "WaypointV2CameraActuatorFocalLengthParam" :depends-on ("_package_WaypointV2CameraActuatorFocalLengthParam"))
    (:file "_package_WaypointV2CameraActuatorFocalLengthParam" :depends-on ("_package"))
    (:file "WaypointV2CameraActuatorFocusParam" :depends-on ("_package_WaypointV2CameraActuatorFocusParam"))
    (:file "_package_WaypointV2CameraActuatorFocusParam" :depends-on ("_package"))
    (:file "WaypointV2Config" :depends-on ("_package_WaypointV2Config"))
    (:file "_package_WaypointV2Config" :depends-on ("_package"))
    (:file "WaypointV2GimbalActuator" :depends-on ("_package_WaypointV2GimbalActuator"))
    (:file "_package_WaypointV2GimbalActuator" :depends-on ("_package"))
    (:file "WaypointV2GimbalActuatorRotationParam" :depends-on ("_package_WaypointV2GimbalActuatorRotationParam"))
    (:file "_package_WaypointV2GimbalActuatorRotationParam" :depends-on ("_package"))
    (:file "WaypointV2InitSetting" :depends-on ("_package_WaypointV2InitSetting"))
    (:file "_package_WaypointV2InitSetting" :depends-on ("_package"))
    (:file "WaypointV2IntervalTrigger" :depends-on ("_package_WaypointV2IntervalTrigger"))
    (:file "_package_WaypointV2IntervalTrigger" :depends-on ("_package"))
    (:file "WaypointV2MissionEventPush" :depends-on ("_package_WaypointV2MissionEventPush"))
    (:file "_package_WaypointV2MissionEventPush" :depends-on ("_package"))
    (:file "WaypointV2MissionStatePush" :depends-on ("_package_WaypointV2MissionStatePush"))
    (:file "_package_WaypointV2MissionStatePush" :depends-on ("_package"))
    (:file "WaypointV2ReachpointTrigger" :depends-on ("_package_WaypointV2ReachpointTrigger"))
    (:file "_package_WaypointV2ReachpointTrigger" :depends-on ("_package"))
    (:file "WaypointV2SampleReachPointTrigger" :depends-on ("_package_WaypointV2SampleReachPointTrigger"))
    (:file "_package_WaypointV2SampleReachPointTrigger" :depends-on ("_package"))
    (:file "WaypointV2TrajectoryTrigger" :depends-on ("_package_WaypointV2TrajectoryTrigger"))
    (:file "_package_WaypointV2TrajectoryTrigger" :depends-on ("_package"))
    (:file "iuslDetectionResult" :depends-on ("_package_iuslDetectionResult"))
    (:file "_package_iuslDetectionResult" :depends-on ("_package"))
    (:file "iuslGimbalCmd" :depends-on ("_package_iuslGimbalCmd"))
    (:file "_package_iuslGimbalCmd" :depends-on ("_package"))
    (:file "iuslMyState" :depends-on ("_package_iuslMyState"))
    (:file "_package_iuslMyState" :depends-on ("_package"))
    (:file "iuslTarState" :depends-on ("_package_iuslTarState"))
    (:file "_package_iuslTarState" :depends-on ("_package"))
    (:file "iuslUAVCtrlCmd" :depends-on ("_package_iuslUAVCtrlCmd"))
    (:file "_package_iuslUAVCtrlCmd" :depends-on ("_package"))
  ))