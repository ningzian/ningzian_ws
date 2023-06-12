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

class iuslDetectionResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.center_x = null;
      this.center_y = null;
      this.max_length = null;
      this.pitch = null;
      this.yaw = null;
      this.roll = null;
      this.UAV_lat = null;
      this.UAV_lon = null;
      this.UAV_alt = null;
      this.UAV_vx = null;
      this.UAV_vy = null;
      this.laser_dis = null;
    }
    else {
      if (initObj.hasOwnProperty('center_x')) {
        this.center_x = initObj.center_x
      }
      else {
        this.center_x = 0;
      }
      if (initObj.hasOwnProperty('center_y')) {
        this.center_y = initObj.center_y
      }
      else {
        this.center_y = 0;
      }
      if (initObj.hasOwnProperty('max_length')) {
        this.max_length = initObj.max_length
      }
      else {
        this.max_length = 0;
      }
      if (initObj.hasOwnProperty('pitch')) {
        this.pitch = initObj.pitch
      }
      else {
        this.pitch = 0.0;
      }
      if (initObj.hasOwnProperty('yaw')) {
        this.yaw = initObj.yaw
      }
      else {
        this.yaw = 0.0;
      }
      if (initObj.hasOwnProperty('roll')) {
        this.roll = initObj.roll
      }
      else {
        this.roll = 0.0;
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
      if (initObj.hasOwnProperty('laser_dis')) {
        this.laser_dis = initObj.laser_dis
      }
      else {
        this.laser_dis = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type iuslDetectionResult
    // Serialize message field [center_x]
    bufferOffset = _serializer.int64(obj.center_x, buffer, bufferOffset);
    // Serialize message field [center_y]
    bufferOffset = _serializer.int64(obj.center_y, buffer, bufferOffset);
    // Serialize message field [max_length]
    bufferOffset = _serializer.int64(obj.max_length, buffer, bufferOffset);
    // Serialize message field [pitch]
    bufferOffset = _serializer.float64(obj.pitch, buffer, bufferOffset);
    // Serialize message field [yaw]
    bufferOffset = _serializer.float64(obj.yaw, buffer, bufferOffset);
    // Serialize message field [roll]
    bufferOffset = _serializer.float64(obj.roll, buffer, bufferOffset);
    // Serialize message field [UAV_lat]
    bufferOffset = _serializer.float64(obj.UAV_lat, buffer, bufferOffset);
    // Serialize message field [UAV_lon]
    bufferOffset = _serializer.float64(obj.UAV_lon, buffer, bufferOffset);
    // Serialize message field [UAV_alt]
    bufferOffset = _serializer.float64(obj.UAV_alt, buffer, bufferOffset);
    // Serialize message field [UAV_vx]
    bufferOffset = _serializer.float64(obj.UAV_vx, buffer, bufferOffset);
    // Serialize message field [UAV_vy]
    bufferOffset = _serializer.float64(obj.UAV_vy, buffer, bufferOffset);
    // Serialize message field [laser_dis]
    bufferOffset = _serializer.float64(obj.laser_dis, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslDetectionResult
    let len;
    let data = new iuslDetectionResult(null);
    // Deserialize message field [center_x]
    data.center_x = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [center_y]
    data.center_y = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [max_length]
    data.max_length = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [pitch]
    data.pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [yaw]
    data.yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [roll]
    data.roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_lat]
    data.UAV_lat = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_lon]
    data.UAV_lon = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_alt]
    data.UAV_alt = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_vx]
    data.UAV_vx = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_vy]
    data.UAV_vy = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [laser_dis]
    data.laser_dis = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 96;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslDetectionResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8e3ffe678e32878975c83b6d54d3b961';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # boundingbox
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
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new iuslDetectionResult(null);
    if (msg.center_x !== undefined) {
      resolved.center_x = msg.center_x;
    }
    else {
      resolved.center_x = 0
    }

    if (msg.center_y !== undefined) {
      resolved.center_y = msg.center_y;
    }
    else {
      resolved.center_y = 0
    }

    if (msg.max_length !== undefined) {
      resolved.max_length = msg.max_length;
    }
    else {
      resolved.max_length = 0
    }

    if (msg.pitch !== undefined) {
      resolved.pitch = msg.pitch;
    }
    else {
      resolved.pitch = 0.0
    }

    if (msg.yaw !== undefined) {
      resolved.yaw = msg.yaw;
    }
    else {
      resolved.yaw = 0.0
    }

    if (msg.roll !== undefined) {
      resolved.roll = msg.roll;
    }
    else {
      resolved.roll = 0.0
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

    if (msg.laser_dis !== undefined) {
      resolved.laser_dis = msg.laser_dis;
    }
    else {
      resolved.laser_dis = 0.0
    }

    return resolved;
    }
};

module.exports = iuslDetectionResult;
