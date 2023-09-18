
"use strict";

let StopWaypointV2Mission = require('./StopWaypointV2Mission.js')
let SendMobileData = require('./SendMobileData.js')
let StartWaypointV2Mission = require('./StartWaypointV2Mission.js')
let SetHomePoint = require('./SetHomePoint.js')
let SubscribeWaypointV2Event = require('./SubscribeWaypointV2Event.js')
let GetWholeBatteryInfo = require('./GetWholeBatteryInfo.js')
let MissionWpAction = require('./MissionWpAction.js')
let GetAvoidEnable = require('./GetAvoidEnable.js')
let SetLocalPosRef = require('./SetLocalPosRef.js')
let MissionStatus = require('./MissionStatus.js')
let MFIOSetValue = require('./MFIOSetValue.js')
let CameraStartShootIntervalPhoto = require('./CameraStartShootIntervalPhoto.js')
let KillSwitch = require('./KillSwitch.js')
let MFIO = require('./MFIO.js')
let InitWaypointV2Setting = require('./InitWaypointV2Setting.js')
let DroneArmControl = require('./DroneArmControl.js')
let CameraEV = require('./CameraEV.js')
let MissionHpResetYaw = require('./MissionHpResetYaw.js')
let CameraRecordVideoAction = require('./CameraRecordVideoAction.js')
let CameraFocusPoint = require('./CameraFocusPoint.js')
let EmergencyBrake = require('./EmergencyBrake.js')
let CameraISO = require('./CameraISO.js')
let GimbalAction = require('./GimbalAction.js')
let SDKControlAuthority = require('./SDKControlAuthority.js')
let CameraTapZoomPoint = require('./CameraTapZoomPoint.js')
let MissionHpUpload = require('./MissionHpUpload.js')
let MissionHpAction = require('./MissionHpAction.js')
let GetDroneType = require('./GetDroneType.js')
let CameraZoomCtrl = require('./CameraZoomCtrl.js')
let SetJoystickMode = require('./SetJoystickMode.js')
let SetupCameraH264 = require('./SetupCameraH264.js')
let ResumeWaypointV2Mission = require('./ResumeWaypointV2Mission.js')
let MissionHpUpdateRadius = require('./MissionHpUpdateRadius.js')
let Stereo240pSubscription = require('./Stereo240pSubscription.js')
let SetCurrentAircraftLocAsHomePoint = require('./SetCurrentAircraftLocAsHomePoint.js')
let iuslSetRtkEnable = require('./iuslSetRtkEnable.js')
let GenerateWaypointV2Action = require('./GenerateWaypointV2Action.js')
let SetAvoidEnable = require('./SetAvoidEnable.js')
let UploadWaypointV2Mission = require('./UploadWaypointV2Mission.js')
let StereoVGASubscription = require('./StereoVGASubscription.js')
let CameraStartShootSinglePhoto = require('./CameraStartShootSinglePhoto.js')
let ObtainControlAuthority = require('./ObtainControlAuthority.js')
let CameraAction = require('./CameraAction.js')
let SetGoHomeAltitude = require('./SetGoHomeAltitude.js')
let GetGoHomeAltitude = require('./GetGoHomeAltitude.js')
let StereoDepthSubscription = require('./StereoDepthSubscription.js')
let MissionWpSetSpeed = require('./MissionWpSetSpeed.js')
let CameraStopShootPhoto = require('./CameraStopShootPhoto.js')
let GetHMSData = require('./GetHMSData.js')
let MissionHpGetInfo = require('./MissionHpGetInfo.js')
let CameraSetZoomPara = require('./CameraSetZoomPara.js')
let GetSingleBatteryDynamicInfo = require('./GetSingleBatteryDynamicInfo.js')
let MissionWpGetSpeed = require('./MissionWpGetSpeed.js')
let SetGlobalCruisespeed = require('./SetGlobalCruisespeed.js')
let SendPayloadData = require('./SendPayloadData.js')
let JoystickAction = require('./JoystickAction.js')
let MissionWpGetInfo = require('./MissionWpGetInfo.js')
let QueryDroneVersion = require('./QueryDroneVersion.js')
let CameraShutterSpeed = require('./CameraShutterSpeed.js')
let MFIOConfig = require('./MFIOConfig.js')
let DownloadWaypointV2Mission = require('./DownloadWaypointV2Mission.js')
let PauseWaypointV2Mission = require('./PauseWaypointV2Mission.js')
let UploadWaypointV2Action = require('./UploadWaypointV2Action.js')
let CameraStartShootAEBPhoto = require('./CameraStartShootAEBPhoto.js')
let MissionHpUpdateYawRate = require('./MissionHpUpdateYawRate.js')
let GetM300StereoParams = require('./GetM300StereoParams.js')
let DroneTaskControl = require('./DroneTaskControl.js')
let CameraStartShootBurstPhoto = require('./CameraStartShootBurstPhoto.js')
let CameraAperture = require('./CameraAperture.js')
let SetupCameraStream = require('./SetupCameraStream.js')
let GetGlobalCruisespeed = require('./GetGlobalCruisespeed.js')
let SubscribeWaypointV2State = require('./SubscribeWaypointV2State.js')
let MissionWpUpload = require('./MissionWpUpload.js')
let Activation = require('./Activation.js')
let FlightTaskControl = require('./FlightTaskControl.js')
let SetHardSync = require('./SetHardSync.js')

module.exports = {
  StopWaypointV2Mission: StopWaypointV2Mission,
  SendMobileData: SendMobileData,
  StartWaypointV2Mission: StartWaypointV2Mission,
  SetHomePoint: SetHomePoint,
  SubscribeWaypointV2Event: SubscribeWaypointV2Event,
  GetWholeBatteryInfo: GetWholeBatteryInfo,
  MissionWpAction: MissionWpAction,
  GetAvoidEnable: GetAvoidEnable,
  SetLocalPosRef: SetLocalPosRef,
  MissionStatus: MissionStatus,
  MFIOSetValue: MFIOSetValue,
  CameraStartShootIntervalPhoto: CameraStartShootIntervalPhoto,
  KillSwitch: KillSwitch,
  MFIO: MFIO,
  InitWaypointV2Setting: InitWaypointV2Setting,
  DroneArmControl: DroneArmControl,
  CameraEV: CameraEV,
  MissionHpResetYaw: MissionHpResetYaw,
  CameraRecordVideoAction: CameraRecordVideoAction,
  CameraFocusPoint: CameraFocusPoint,
  EmergencyBrake: EmergencyBrake,
  CameraISO: CameraISO,
  GimbalAction: GimbalAction,
  SDKControlAuthority: SDKControlAuthority,
  CameraTapZoomPoint: CameraTapZoomPoint,
  MissionHpUpload: MissionHpUpload,
  MissionHpAction: MissionHpAction,
  GetDroneType: GetDroneType,
  CameraZoomCtrl: CameraZoomCtrl,
  SetJoystickMode: SetJoystickMode,
  SetupCameraH264: SetupCameraH264,
  ResumeWaypointV2Mission: ResumeWaypointV2Mission,
  MissionHpUpdateRadius: MissionHpUpdateRadius,
  Stereo240pSubscription: Stereo240pSubscription,
  SetCurrentAircraftLocAsHomePoint: SetCurrentAircraftLocAsHomePoint,
  iuslSetRtkEnable: iuslSetRtkEnable,
  GenerateWaypointV2Action: GenerateWaypointV2Action,
  SetAvoidEnable: SetAvoidEnable,
  UploadWaypointV2Mission: UploadWaypointV2Mission,
  StereoVGASubscription: StereoVGASubscription,
  CameraStartShootSinglePhoto: CameraStartShootSinglePhoto,
  ObtainControlAuthority: ObtainControlAuthority,
  CameraAction: CameraAction,
  SetGoHomeAltitude: SetGoHomeAltitude,
  GetGoHomeAltitude: GetGoHomeAltitude,
  StereoDepthSubscription: StereoDepthSubscription,
  MissionWpSetSpeed: MissionWpSetSpeed,
  CameraStopShootPhoto: CameraStopShootPhoto,
  GetHMSData: GetHMSData,
  MissionHpGetInfo: MissionHpGetInfo,
  CameraSetZoomPara: CameraSetZoomPara,
  GetSingleBatteryDynamicInfo: GetSingleBatteryDynamicInfo,
  MissionWpGetSpeed: MissionWpGetSpeed,
  SetGlobalCruisespeed: SetGlobalCruisespeed,
  SendPayloadData: SendPayloadData,
  JoystickAction: JoystickAction,
  MissionWpGetInfo: MissionWpGetInfo,
  QueryDroneVersion: QueryDroneVersion,
  CameraShutterSpeed: CameraShutterSpeed,
  MFIOConfig: MFIOConfig,
  DownloadWaypointV2Mission: DownloadWaypointV2Mission,
  PauseWaypointV2Mission: PauseWaypointV2Mission,
  UploadWaypointV2Action: UploadWaypointV2Action,
  CameraStartShootAEBPhoto: CameraStartShootAEBPhoto,
  MissionHpUpdateYawRate: MissionHpUpdateYawRate,
  GetM300StereoParams: GetM300StereoParams,
  DroneTaskControl: DroneTaskControl,
  CameraStartShootBurstPhoto: CameraStartShootBurstPhoto,
  CameraAperture: CameraAperture,
  SetupCameraStream: SetupCameraStream,
  GetGlobalCruisespeed: GetGlobalCruisespeed,
  SubscribeWaypointV2State: SubscribeWaypointV2State,
  MissionWpUpload: MissionWpUpload,
  Activation: Activation,
  FlightTaskControl: FlightTaskControl,
  SetHardSync: SetHardSync,
};
