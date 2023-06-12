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

class iuslTarState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.tar_OK = null;
      this.tar_x = null;
      this.tar_y = null;
      this.tar_z = null;
      this.tar_vx = null;
      this.tar_vy = null;
    }
    else {
      if (initObj.hasOwnProperty('tar_OK')) {
        this.tar_OK = initObj.tar_OK
      }
      else {
        this.tar_OK = false;
      }
      if (initObj.hasOwnProperty('tar_x')) {
        this.tar_x = initObj.tar_x
      }
      else {
        this.tar_x = 0.0;
      }
      if (initObj.hasOwnProperty('tar_y')) {
        this.tar_y = initObj.tar_y
      }
      else {
        this.tar_y = 0.0;
      }
      if (initObj.hasOwnProperty('tar_z')) {
        this.tar_z = initObj.tar_z
      }
      else {
        this.tar_z = 0.0;
      }
      if (initObj.hasOwnProperty('tar_vx')) {
        this.tar_vx = initObj.tar_vx
      }
      else {
        this.tar_vx = 0.0;
      }
      if (initObj.hasOwnProperty('tar_vy')) {
        this.tar_vy = initObj.tar_vy
      }
      else {
        this.tar_vy = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type iuslTarState
    // Serialize message field [tar_OK]
    bufferOffset = _serializer.bool(obj.tar_OK, buffer, bufferOffset);
    // Serialize message field [tar_x]
    bufferOffset = _serializer.float64(obj.tar_x, buffer, bufferOffset);
    // Serialize message field [tar_y]
    bufferOffset = _serializer.float64(obj.tar_y, buffer, bufferOffset);
    // Serialize message field [tar_z]
    bufferOffset = _serializer.float64(obj.tar_z, buffer, bufferOffset);
    // Serialize message field [tar_vx]
    bufferOffset = _serializer.float64(obj.tar_vx, buffer, bufferOffset);
    // Serialize message field [tar_vy]
    bufferOffset = _serializer.float64(obj.tar_vy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslTarState
    let len;
    let data = new iuslTarState(null);
    // Deserialize message field [tar_OK]
    data.tar_OK = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [tar_x]
    data.tar_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [tar_y]
    data.tar_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [tar_z]
    data.tar_z = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [tar_vx]
    data.tar_vx = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [tar_vy]
    data.tar_vy = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 41;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslTarState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a8205a9aaa333548ad9f16f1f7e2853f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # estimated target UAV state
    bool tar_OK
    float64 tar_x
    float64 tar_y
    float64 tar_z
    float64 tar_vx
    float64 tar_vy
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new iuslTarState(null);
    if (msg.tar_OK !== undefined) {
      resolved.tar_OK = msg.tar_OK;
    }
    else {
      resolved.tar_OK = false
    }

    if (msg.tar_x !== undefined) {
      resolved.tar_x = msg.tar_x;
    }
    else {
      resolved.tar_x = 0.0
    }

    if (msg.tar_y !== undefined) {
      resolved.tar_y = msg.tar_y;
    }
    else {
      resolved.tar_y = 0.0
    }

    if (msg.tar_z !== undefined) {
      resolved.tar_z = msg.tar_z;
    }
    else {
      resolved.tar_z = 0.0
    }

    if (msg.tar_vx !== undefined) {
      resolved.tar_vx = msg.tar_vx;
    }
    else {
      resolved.tar_vx = 0.0
    }

    if (msg.tar_vy !== undefined) {
      resolved.tar_vy = msg.tar_vy;
    }
    else {
      resolved.tar_vy = 0.0
    }

    return resolved;
    }
};

module.exports = iuslTarState;
