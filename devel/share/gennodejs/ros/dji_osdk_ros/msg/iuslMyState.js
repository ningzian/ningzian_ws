// Auto-generated. Do not edit!

// (in-package dji_osdk_ros.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class iuslMyState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.time = null;
      this.UAV_lat = null;
      this.UAV_lon = null;
      this.UAV_alt = null;
      this.UAV_yaw = null;
      this.UAV_vx = null;
      this.UAV_vy = null;
      this.cam_x = null;
      this.cam_y = null;
      this.cam_z = null;
    }
    else {
      if (initObj.hasOwnProperty('time')) {
        this.time = initObj.time
      }
      else {
        this.time = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_lat')) {
        this.UAV_lat = initObj.UAV_lat
      }
      else {
        this.UAV_lat = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_lon')) {
        this.UAV_lon = initObj.UAV_lon
      }
      else {
        this.UAV_lon = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_alt')) {
        this.UAV_alt = initObj.UAV_alt
      }
      else {
        this.UAV_alt = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_yaw')) {
        this.UAV_yaw = initObj.UAV_yaw
      }
      else {
        this.UAV_yaw = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_vx')) {
        this.UAV_vx = initObj.UAV_vx
      }
      else {
        this.UAV_vx = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_vy')) {
        this.UAV_vy = initObj.UAV_vy
      }
      else {
        this.UAV_vy = 0.0;
      }
      if (initObj.hasOwnProperty('cam_x')) {
        this.cam_x = initObj.cam_x
      }
      else {
        this.cam_x = 0.0;
      }
      if (initObj.hasOwnProperty('cam_y')) {
        this.cam_y = initObj.cam_y
      }
      else {
        this.cam_y = 0.0;
      }
      if (initObj.hasOwnProperty('cam_z')) {
        this.cam_z = initObj.cam_z
      }
      else {
        this.cam_z = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type iuslMyState
    // Serialize message field [time]
    bufferOffset = _serializer.float64(obj.time, buffer, bufferOffset);
    // Serialize message field [UAV_lat]
    bufferOffset = _serializer.float64(obj.UAV_lat, buffer, bufferOffset);
    // Serialize message field [UAV_lon]
    bufferOffset = _serializer.float64(obj.UAV_lon, buffer, bufferOffset);
    // Serialize message field [UAV_alt]
    bufferOffset = _serializer.float64(obj.UAV_alt, buffer, bufferOffset);
    // Serialize message field [UAV_yaw]
    bufferOffset = _serializer.float64(obj.UAV_yaw, buffer, bufferOffset);
    // Serialize message field [UAV_vx]
    bufferOffset = _serializer.float64(obj.UAV_vx, buffer, bufferOffset);
    // Serialize message field [UAV_vy]
    bufferOffset = _serializer.float64(obj.UAV_vy, buffer, bufferOffset);
    // Serialize message field [cam_x]
    bufferOffset = _serializer.float64(obj.cam_x, buffer, bufferOffset);
    // Serialize message field [cam_y]
    bufferOffset = _serializer.float64(obj.cam_y, buffer, bufferOffset);
    // Serialize message field [cam_z]
    bufferOffset = _serializer.float64(obj.cam_z, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslMyState
    let len;
    let data = new iuslMyState(null);
    // Deserialize message field [time]
    data.time = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_lat]
    data.UAV_lat = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_lon]
    data.UAV_lon = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_alt]
    data.UAV_alt = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_yaw]
    data.UAV_yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_vx]
    data.UAV_vx = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_vy]
    data.UAV_vy = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_x]
    data.cam_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_y]
    data.cam_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_z]
    data.cam_z = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 80;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslMyState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '27d296a0eab46d69158326fe8e2a6ff1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
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
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new iuslMyState(null);
    if (msg.time !== undefined) {
      resolved.time = msg.time;
    }
    else {
      resolved.time = 0.0
    }

    if (msg.UAV_lat !== undefined) {
      resolved.UAV_lat = msg.UAV_lat;
    }
    else {
      resolved.UAV_lat = 0.0
    }

    if (msg.UAV_lon !== undefined) {
      resolved.UAV_lon = msg.UAV_lon;
    }
    else {
      resolved.UAV_lon = 0.0
    }

    if (msg.UAV_alt !== undefined) {
      resolved.UAV_alt = msg.UAV_alt;
    }
    else {
      resolved.UAV_alt = 0.0
    }

    if (msg.UAV_yaw !== undefined) {
      resolved.UAV_yaw = msg.UAV_yaw;
    }
    else {
      resolved.UAV_yaw = 0.0
    }

    if (msg.UAV_vx !== undefined) {
      resolved.UAV_vx = msg.UAV_vx;
    }
    else {
      resolved.UAV_vx = 0.0
    }

    if (msg.UAV_vy !== undefined) {
      resolved.UAV_vy = msg.UAV_vy;
    }
    else {
      resolved.UAV_vy = 0.0
    }

    if (msg.cam_x !== undefined) {
      resolved.cam_x = msg.cam_x;
    }
    else {
      resolved.cam_x = 0.0
    }

    if (msg.cam_y !== undefined) {
      resolved.cam_y = msg.cam_y;
    }
    else {
      resolved.cam_y = 0.0
    }

    if (msg.cam_z !== undefined) {
      resolved.cam_z = msg.cam_z;
    }
    else {
      resolved.cam_z = 0.0
    }

    return resolved;
    }
};

module.exports = iuslMyState;
