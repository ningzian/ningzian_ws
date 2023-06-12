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
      this.my_UAV_x = null;
      this.my_UAV_y = null;
      this.my_UAV_z = null;
      this.my_UAV_vx = null;
      this.my_UAV_vy = null;
    }
    else {
      if (initObj.hasOwnProperty('my_UAV_x')) {
        this.my_UAV_x = initObj.my_UAV_x
      }
      else {
        this.my_UAV_x = 0.0;
      }
      if (initObj.hasOwnProperty('my_UAV_y')) {
        this.my_UAV_y = initObj.my_UAV_y
      }
      else {
        this.my_UAV_y = 0.0;
      }
      if (initObj.hasOwnProperty('my_UAV_z')) {
        this.my_UAV_z = initObj.my_UAV_z
      }
      else {
        this.my_UAV_z = 0.0;
      }
      if (initObj.hasOwnProperty('my_UAV_vx')) {
        this.my_UAV_vx = initObj.my_UAV_vx
      }
      else {
        this.my_UAV_vx = 0.0;
      }
      if (initObj.hasOwnProperty('my_UAV_vy')) {
        this.my_UAV_vy = initObj.my_UAV_vy
      }
      else {
        this.my_UAV_vy = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type iuslMyState
    // Serialize message field [my_UAV_x]
    bufferOffset = _serializer.float64(obj.my_UAV_x, buffer, bufferOffset);
    // Serialize message field [my_UAV_y]
    bufferOffset = _serializer.float64(obj.my_UAV_y, buffer, bufferOffset);
    // Serialize message field [my_UAV_z]
    bufferOffset = _serializer.float64(obj.my_UAV_z, buffer, bufferOffset);
    // Serialize message field [my_UAV_vx]
    bufferOffset = _serializer.float64(obj.my_UAV_vx, buffer, bufferOffset);
    // Serialize message field [my_UAV_vy]
    bufferOffset = _serializer.float64(obj.my_UAV_vy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslMyState
    let len;
    let data = new iuslMyState(null);
    // Deserialize message field [my_UAV_x]
    data.my_UAV_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [my_UAV_y]
    data.my_UAV_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [my_UAV_z]
    data.my_UAV_z = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [my_UAV_vx]
    data.my_UAV_vx = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [my_UAV_vy]
    data.my_UAV_vy = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 40;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslMyState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '300d4f75ca62584d1d351cb6e7c982b6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 my_UAV_x
    float64 my_UAV_y
    float64 my_UAV_z
    float64 my_UAV_vx
    float64 my_UAV_vy
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new iuslMyState(null);
    if (msg.my_UAV_x !== undefined) {
      resolved.my_UAV_x = msg.my_UAV_x;
    }
    else {
      resolved.my_UAV_x = 0.0
    }

    if (msg.my_UAV_y !== undefined) {
      resolved.my_UAV_y = msg.my_UAV_y;
    }
    else {
      resolved.my_UAV_y = 0.0
    }

    if (msg.my_UAV_z !== undefined) {
      resolved.my_UAV_z = msg.my_UAV_z;
    }
    else {
      resolved.my_UAV_z = 0.0
    }

    if (msg.my_UAV_vx !== undefined) {
      resolved.my_UAV_vx = msg.my_UAV_vx;
    }
    else {
      resolved.my_UAV_vx = 0.0
    }

    if (msg.my_UAV_vy !== undefined) {
      resolved.my_UAV_vy = msg.my_UAV_vy;
    }
    else {
      resolved.my_UAV_vy = 0.0
    }

    return resolved;
    }
};

module.exports = iuslMyState;
