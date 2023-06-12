#! /usr/bin/env python
# coding=utf-8

import rospy
import rosbag
import serial
import struct
import math
import time
from decimal import Decimal

from dji_osdk_ros.msg import iuslTarState
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Int16            # rtk yaw
from std_msgs.msg import UInt8            # ground mission cmd, flight state




# 0. =========== global state ==================
flying = False
ground_mission_cmd = 0            # 1 start mission, 2 pause mission, 3 go home
auto_fire_cmd = False             # from control node


# 1. ========== receive call back ===============
# ------1.1 update global state 
def callback_flight_state(msg):
  global flying
  if msg.data < 1.6:
    flying = False
  elif msg.data > 1.7: 
    flying = True
  return

# ------1.2 auto fire cmd from control
def callback_autofire_cmd(msg):




# =================================  init  =====================================================
rospy.init_node('zigbee', anonymous=True)
rate = rospy.Rate(50)
zigbee_serial = serial.Serial('/dev/ttyUSB0', 115200, timeout=0.5)


# --------------  UAV state ---------------


# --------- sub msg -----------
rospy.Subscriber('dji_osdk_ros/flight_status', UInt8, callback_flight_state)


# --------- pub msg -----------
ground_mission_cmd_publisher = rospy.Publisher('/iusl_ros/ground_mission_cmd', UInt8, queue_size=5)



# ==============================  while and calculate  =========================================
def decode(data):
    de_data1 = Decimal(str(data[0])) * Decimal(256) * Decimal(256) + Decimal(str(data[1])) * Decimal(256) + Decimal(str(data[2])) - Decimal(1000000)
    de_data2 = Decimal(str(data[3]))/Decimal(100)
    de_data = float(str(de_data1) + str(de_data2)[1:])
    return float(de_data)

def encode(data):
    data1 = Decimal(int(data)) % Decimal(1000000) + Decimal(1000000)
    data2 = Decimal(int(abs((Decimal(str(data)) - Decimal(int(data))) * Decimal(100) )))
    data11 = int(data1/Decimal(256)/Decimal(256))
    data12 = int(data1/Decimal(256)%Decimal(256))
    data13 = int(data1%Decimal(256))
    data22 = int(data2%Decimal(256))
    en_data = [data11, data12, data13, data22]
    return en_data

while True:
  # ------------ rosbag ----------
  if bag_start and (not flying):
    bag_ground_cmd.close()
    bag_start = False
  if (not bag_start) and flying:
    bag_ground_cmd = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'Ground_cmd.bag', 'w')
    bag_start = True

  # ------------ zigbee receive, receive from ground station: misssion cmd; target pos-----------
  data_tem = zigbee_serial.read(1)
  if data_tem == '\xed':
    num = zigbee_serial.read(1)
    num = struct.unpack('B', num)[0]
    zigbee_serial.read(2)
    data = zigbee_serial.read(num+2)
    data = struct.unpack(str(num+2)+'B', data)
    sourceID = data[num] * 256 + data[num+1]
    zigbee_serial.reset_input_buffer()
    if sourceID == 1:    # from ground station
      if num == 1:
        mission_cmd = data[0]
        ground_mission_cmd_publisher.publish(mission_cmd)   # pub cmd
  
  if bag_start:
    bag_ground_cmd.write('/iusl_bag/ground_mission_cmd', mission_cmd)
  rate.sleep()



