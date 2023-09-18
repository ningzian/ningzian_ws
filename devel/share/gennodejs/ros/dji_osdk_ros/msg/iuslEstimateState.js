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

class iuslEstimateState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.est_ekf_OK = null;
      this.est_tar_x = null;
      this.est_tar_y = null;
      this.est_tar_z = null;
      this.est_tar_vx = null;
      this.est_tar_vy = null;
    }
    else {
      if (initObj.hasOwnProperty('est_ekf_OK')) {
        this.est_ekf_OK = initObj.est_ekf_OK
      }
      else {
        this.est_ekf_OK = false;
      }
      if (initObj.hasOwnProperty('est_tar_x')) {
        this.est_tar_x = initObj.est_tar_x
      }
      else {
        this.est_tar_x = 0.0;
      }
      if (initObj.hasOwnProperty('est_tar_y')) {
        this.est_tar_y = initObj.est_tar_y
      }
      else {
        this.est_tar_y = 0.0;
      }
      if (initObj.hasOwnProperty('est_tar_z')) {
        this.est_tar_z = initObj.est_tar_z
      }
      else {
        this.est_tar_z = 0.0;
      }
      if (initObj.hasOwnProperty('est_tar_vx')) {
        this.est_tar_vx = initObj.est_tar_vx
      }
      else {
        this.est_tar_vx = 0.0;
      }
      if (initObj.hasOwnProperty('est_tar_vy')) {
        this.est_tar_vy = initObj.est_tar_vy
      }
      else {
        this.est_tar_vy = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type iuslEstimateState
    // Serialize message field [est_ekf_OK]
    bufferOffset = _serializer.bool(obj.est_ekf_OK, buffer, bufferOffset);
    // Serialize message field [est_tar_x]
    bufferOffset = _serializer.float64(obj.est_tar_x, buffer, bufferOffset);
    // Serialize message field [est_tar_y]
    bufferOffset = _serializer.float64(obj.est_tar_y, buffer, bufferOffset);
    // Serialize message field [est_tar_z]
    bufferOffset = _serializer.float64(obj.est_tar_z, buffer, bufferOffset);
    // Serialize message field [est_tar_vx]
    bufferOffset = _serializer.float64(obj.est_tar_vx, buffer, bufferOffset);
    // Serialize message field [est_tar_vy]
    bufferOffset = _serializer.float64(obj.est_tar_vy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslEstimateState
    let len;
    let data = new iuslEstimateState(null);
    // Deserialize message field [est_ekf_OK]
    data.est_ekf_OK = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [est_tar_x]
    data.est_tar_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [est_tar_y]
    data.est_tar_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [est_tar_z]
    data.est_tar_z = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [est_tar_vx]
    data.est_tar_vx = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [est_tar_vy]
    data.est_tar_vy = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 41;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslEstimateState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '57b0b6b128ef5651ce9b3fe0084e19a4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # estimated target UAV state
    bool est_ekf_OK
    float64 est_tar_x
    float64 est_tar_y
    float64 est_tar_z
    float64 est_tar_vx
    float64 est_tar_vy
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new iuslEstimateState(null);
    if (msg.est_ekf_OK !== undefined) {
      resolved.est_ekf_OK = msg.est_ekf_OK;
    }
    else {
      resolved.est_ekf_OK = false
    }

    if (msg.est_tar_x !== undefined) {
      resolved.est_tar_x = msg.est_tar_x;
    }
    else {
      resolved.est_tar_x = 0.0
    }

    if (msg.est_tar_y !== undefined) {
      resolved.est_tar_y = msg.est_tar_y;
    }
    else {
      resolved.est_tar_y = 0.0
    }

    if (msg.est_tar_z !== undefined) {
      resolved.est_tar_z = msg.est_tar_z;
    }
    else {
      resolved.est_tar_z = 0.0
    }

    if (msg.est_tar_vx !== undefined) {
      resolved.est_tar_vx = msg.est_tar_vx;
    }
    else {
      resolved.est_tar_vx = 0.0
    }

    if (msg.est_tar_vy !== undefined) {
      resolved.est_tar_vy = msg.est_tar_vy;
    }
    else {
      resolved.est_tar_vy = 0.0
    }

    return resolved;
    }
};

module.exports = iuslEstimateState;
