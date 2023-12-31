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
      this.time = null;
      this.center_x = null;
      this.center_y = null;
      this.box_width = null;
      this.box_height = null;
      this.max_length = null;
      this.UAV_lat = null;
      this.UAV_lon = null;
      this.UAV_alt = null;
      this.UAV_roll = null;
      this.UAV_pitch = null;
      this.UAV_yaw = null;
      this.cam_roll = null;
      this.cam_pitch = null;
      this.cam_yaw = null;
      this.laser_dis = null;
    }
    else {
      if (initObj.hasOwnProperty('time')) {
        this.time = initObj.time
      }
      else {
        this.time = 0.0;
      }
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
      if (initObj.hasOwnProperty('box_width')) {
        this.box_width = initObj.box_width
      }
      else {
        this.box_width = 0;
      }
      if (initObj.hasOwnProperty('box_height')) {
        this.box_height = initObj.box_height
      }
      else {
        this.box_height = 0;
      }
      if (initObj.hasOwnProperty('max_length')) {
        this.max_length = initObj.max_length
      }
      else {
        this.max_length = 0;
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
      if (initObj.hasOwnProperty('UAV_roll')) {
        this.UAV_roll = initObj.UAV_roll
      }
      else {
        this.UAV_roll = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_pitch')) {
        this.UAV_pitch = initObj.UAV_pitch
      }
      else {
        this.UAV_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('UAV_yaw')) {
        this.UAV_yaw = initObj.UAV_yaw
      }
      else {
        this.UAV_yaw = 0.0;
      }
      if (initObj.hasOwnProperty('cam_roll')) {
        this.cam_roll = initObj.cam_roll
      }
      else {
        this.cam_roll = 0.0;
      }
      if (initObj.hasOwnProperty('cam_pitch')) {
        this.cam_pitch = initObj.cam_pitch
      }
      else {
        this.cam_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('cam_yaw')) {
        this.cam_yaw = initObj.cam_yaw
      }
      else {
        this.cam_yaw = 0.0;
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
    // Serialize message field [time]
    bufferOffset = _serializer.float64(obj.time, buffer, bufferOffset);
    // Serialize message field [center_x]
    bufferOffset = _serializer.int64(obj.center_x, buffer, bufferOffset);
    // Serialize message field [center_y]
    bufferOffset = _serializer.int64(obj.center_y, buffer, bufferOffset);
    // Serialize message field [box_width]
    bufferOffset = _serializer.int64(obj.box_width, buffer, bufferOffset);
    // Serialize message field [box_height]
    bufferOffset = _serializer.int64(obj.box_height, buffer, bufferOffset);
    // Serialize message field [max_length]
    bufferOffset = _serializer.int64(obj.max_length, buffer, bufferOffset);
    // Serialize message field [UAV_lat]
    bufferOffset = _serializer.float64(obj.UAV_lat, buffer, bufferOffset);
    // Serialize message field [UAV_lon]
    bufferOffset = _serializer.float64(obj.UAV_lon, buffer, bufferOffset);
    // Serialize message field [UAV_alt]
    bufferOffset = _serializer.float64(obj.UAV_alt, buffer, bufferOffset);
    // Serialize message field [UAV_roll]
    bufferOffset = _serializer.float64(obj.UAV_roll, buffer, bufferOffset);
    // Serialize message field [UAV_pitch]
    bufferOffset = _serializer.float64(obj.UAV_pitch, buffer, bufferOffset);
    // Serialize message field [UAV_yaw]
    bufferOffset = _serializer.float64(obj.UAV_yaw, buffer, bufferOffset);
    // Serialize message field [cam_roll]
    bufferOffset = _serializer.float64(obj.cam_roll, buffer, bufferOffset);
    // Serialize message field [cam_pitch]
    bufferOffset = _serializer.float64(obj.cam_pitch, buffer, bufferOffset);
    // Serialize message field [cam_yaw]
    bufferOffset = _serializer.float64(obj.cam_yaw, buffer, bufferOffset);
    // Serialize message field [laser_dis]
    bufferOffset = _serializer.float64(obj.laser_dis, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type iuslDetectionResult
    let len;
    let data = new iuslDetectionResult(null);
    // Deserialize message field [time]
    data.time = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [center_x]
    data.center_x = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [center_y]
    data.center_y = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [box_width]
    data.box_width = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [box_height]
    data.box_height = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [max_length]
    data.max_length = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [UAV_lat]
    data.UAV_lat = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_lon]
    data.UAV_lon = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_alt]
    data.UAV_alt = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_roll]
    data.UAV_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_pitch]
    data.UAV_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [UAV_yaw]
    data.UAV_yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_roll]
    data.cam_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_pitch]
    data.cam_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cam_yaw]
    data.cam_yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [laser_dis]
    data.laser_dis = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 128;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dji_osdk_ros/iuslDetectionResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6a683b81585e7917ba9c237fbbd81b74';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # time
    float64 time
    
    # boundingbox
    int64 center_x
    int64 center_y
    int64 box_width
    int64 box_height
    int64 max_length
    
    # camera state
    float64 UAV_lat
    float64 UAV_lon
    float64 UAV_alt
    float64 UAV_roll
    float64 UAV_pitch
    float64 UAV_yaw
    float64 cam_roll
    float64 cam_pitch
    float64 cam_yaw
    
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
    if (msg.time !== undefined) {
      resolved.time = msg.time;
    }
    else {
      resolved.time = 0.0
    }

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

    if (msg.box_width !== undefined) {
      resolved.box_width = msg.box_width;
    }
    else {
      resolved.box_width = 0
    }

    if (msg.box_height !== undefined) {
      resolved.box_height = msg.box_height;
    }
    else {
      resolved.box_height = 0
    }

    if (msg.max_length !== undefined) {
      resolved.max_length = msg.max_length;
    }
    else {
      resolved.max_length = 0
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

    if (msg.UAV_roll !== undefined) {
      resolved.UAV_roll = msg.UAV_roll;
    }
    else {
      resolved.UAV_roll = 0.0
    }

    if (msg.UAV_pitch !== undefined) {
      resolved.UAV_pitch = msg.UAV_pitch;
    }
    else {
      resolved.UAV_pitch = 0.0
    }

    if (msg.UAV_yaw !== undefined) {
      resolved.UAV_yaw = msg.UAV_yaw;
    }
    else {
      resolved.UAV_yaw = 0.0
    }

    if (msg.cam_roll !== undefined) {
      resolved.cam_roll = msg.cam_roll;
    }
    else {
      resolved.cam_roll = 0.0
    }

    if (msg.cam_pitch !== undefined) {
      resolved.cam_pitch = msg.cam_pitch;
    }
    else {
      resolved.cam_pitch = 0.0
    }

    if (msg.cam_yaw !== undefined) {
      resolved.cam_yaw = msg.cam_yaw;
    }
    else {
      resolved.cam_yaw = 0.0
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
