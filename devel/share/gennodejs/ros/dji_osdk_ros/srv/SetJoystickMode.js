// Auto-generated. Do not edit!

// (in-package dji_osdk_ros.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetJoystickModeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.horizontal_mode = null;
      this.vertical_mode = null;
      this.yaw_mode = null;
      this.horizontal_coordinate = null;
      this.stable_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('horizontal_mode')) {
        this.horizontal_mode = initObj.horizontal_mode
      }
      else {
        this.horizontal_mode = 0;
      }
      if (initObj.hasOwnProperty('vertical_mode')) {
        this.vertical_mode = initObj.vertical_mode
      }
      else {
        this.vertical_mode = 0;
      }
      if (initObj.hasOwnProperty('yaw_mode')) {
        this.yaw_mode = initObj.yaw_mode
      }
      else {
        this.yaw_mode = 0;
      }
      if (initObj.hasOwnProperty('horizontal_coordinate')) {
        this.horizontal_coordinate = initObj.horizontal_coordinate
      }
      else {
        this.horizontal_coordinate = 0;
      }
      if (initObj.hasOwnProperty('stable_mode')) {
        this.stable_mode = initObj.stable_mode
      }
      else {
        this.stable_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetJoystickModeRequest
    // Serialize message field [horizontal_mode]
    bufferOffset = _serializer.uint8(obj.horizontal_mode, buffer, bufferOffset);
    // Serialize message field [vertical_mode]
    bufferOffset = _serializer.uint8(obj.vertical_mode, buffer, bufferOffset);
    // Serialize message field [yaw_mode]
    bufferOffset = _serializer.uint8(obj.yaw_mode, buffer, bufferOffset);
    // Serialize message field [horizontal_coordinate]
    bufferOffset = _serializer.uint8(obj.horizontal_coordinate, buffer, bufferOffset);
    // Serialize message field [stable_mode]
    bufferOffset = _serializer.uint8(obj.stable_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetJoystickModeRequest
    let len;
    let data = new SetJoystickModeRequest(null);
    // Deserialize message field [horizontal_mode]
    data.horizontal_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [vertical_mode]
    data.vertical_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [yaw_mode]
    data.yaw_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [horizontal_coordinate]
    data.horizontal_coordinate = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [stable_mode]
    data.stable_mode = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dji_osdk_ros/SetJoystickModeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ceb88ab65abad757e3f8c63ab37f9f7d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    
    
    
    
    uint8 HORIZONTAL_ANGLE = 0
    
    
    
    
    uint8 HORIZONTAL_VELOCITY = 1
    
    
    
    uint8 HORIZONTAL_POSITION = 2
    
    
    
    uint8 HORIZONTAL_ANGULAR_RATE = 3
    
    
    
    
    
    uint8 VERTICAL_VELOCITY = 0
    
    
    uint8 VERTICAL_POSITION = 1
    
    
    uint8 VERTICAL_THRUST = 2
    
    
    
    
    
    uint8 YAW_ANGLE = 0
    
    
    
    uint8 YAW_RATE = 1
    
    
    uint8 HORIZONTAL_GROUND = 0
    
    uint8 HORIZONTAL_BODY = 1
    
    
    uint8 STABLE_DISABLE = 0
    
    uint8 STABLE_ENABLE = 1
    
    
    
    
    
    
    uint8 horizontal_mode
    
    
    
    
    
    uint8 vertical_mode
    uint8 yaw_mode
    uint8 horizontal_coordinate
    
    
    
    
    
    
    
    
    uint8 stable_mode
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetJoystickModeRequest(null);
    if (msg.horizontal_mode !== undefined) {
      resolved.horizontal_mode = msg.horizontal_mode;
    }
    else {
      resolved.horizontal_mode = 0
    }

    if (msg.vertical_mode !== undefined) {
      resolved.vertical_mode = msg.vertical_mode;
    }
    else {
      resolved.vertical_mode = 0
    }

    if (msg.yaw_mode !== undefined) {
      resolved.yaw_mode = msg.yaw_mode;
    }
    else {
      resolved.yaw_mode = 0
    }

    if (msg.horizontal_coordinate !== undefined) {
      resolved.horizontal_coordinate = msg.horizontal_coordinate;
    }
    else {
      resolved.horizontal_coordinate = 0
    }

    if (msg.stable_mode !== undefined) {
      resolved.stable_mode = msg.stable_mode;
    }
    else {
      resolved.stable_mode = 0
    }

    return resolved;
    }
};

// Constants for message
SetJoystickModeRequest.Constants = {
  HORIZONTAL_ANGLE: 0,
  HORIZONTAL_VELOCITY: 1,
  HORIZONTAL_POSITION: 2,
  HORIZONTAL_ANGULAR_RATE: 3,
  VERTICAL_VELOCITY: 0,
  VERTICAL_POSITION: 1,
  VERTICAL_THRUST: 2,
  YAW_ANGLE: 0,
  YAW_RATE: 1,
  HORIZONTAL_GROUND: 0,
  HORIZONTAL_BODY: 1,
  STABLE_DISABLE: 0,
  STABLE_ENABLE: 1,
}

class SetJoystickModeResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetJoystickModeResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetJoystickModeResponse
    let len;
    let data = new SetJoystickModeResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dji_osdk_ros/SetJoystickModeResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eb13ac1f1354ccecb7941ee8fa2192e8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    bool result
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetJoystickModeResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = false
    }

    return resolved;
    }
};

module.exports = {
  Request: SetJoystickModeRequest,
  Response: SetJoystickModeResponse,
  md5sum() { return 'c55e9c9164f1a634e9bf9721aa4cb437'; },
  datatype() { return 'dji_osdk_ros/SetJoystickMode'; }
};
