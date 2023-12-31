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
from sensor_msgs.msg import NavSatFix     # rtk pos，记录home点的经纬度和海拔
from std_msgs.msg import Int16            # rtk yaw
from std_msgs.msg import UInt8            # flight state
from std_msgs.msg import Bool             # auto fire

# ==================================================================================
#---------------------------  receive call back   ----------------------------------
#===================================================================================

# 接收发射网枪的指令，如果有发射指令，将指令返回给地面站
def callback_autofire_cmd(msg):
  global zigbee_serial
  global netgun_serial
  global ground_mission_cmd
  global home_rtk_OK
  global fired
  # fire
  if (not fired) and home_rtk_OK and ground_mission_cmd and msg.data:  
    # 网枪发射0xFF, 0x02, 0x00, 0xBA, 0x06
    zigbee_send_data = [237, 1, 0, 1, 255]    # ED 01 00 01 FF
    net_send_data = [255, 2, 0, 186, 6] 
    for i in range(3):
      netgun_serial.write(net_send_data)
      zigbee_serial.write(zigbee_send_data)
      fired = True
      time.sleep(0.1)  
  return

#   接收RTK的经纬度和海拔，
def callback_recive_rtkpos(msg):             # update my UAV pos
  # for msg pub
  global home_rtk_num
  global home_rtk_OK
  global home_rtk_msg
  # for ros bag
  global bag_start
  global bag_home_rtk
  if (home_rtk_num < 20) and (msg.altitude > 0.5):
    home_rtk_msg = msg
    home_rtk_num += 1
    home_rtk_OK = True
    if bag_start:
      bag_home_rtk.write('/iusl_bag/home_rtk', msg)
  return


# ==================================================================================
#----------------------------  custom functions   ----------------------------------
#===================================================================================
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
  


# ==================================================================================
#-----------------------------  global param   -------------------------------------
#===================================================================================

# need manual setup
zigbee_serial = serial.Serial('/dev/ttyUSB0', 115200, timeout=0.5)
netgun_serial = serial.Serial('/dev/ttyUSB1', 9600, timeout=0.5) 


# updated states
ground_mission_cmd = False    
ground_mission_start = False
auto_fire_cmd = False         # from control node
fired = False
bag_start = False

home_rtk_num = 0
home_rtk_OK = False
home_rtk_msg = NavSatFix()
#bag_start = False             # 是否开始记录bag


# ==================================================================================
#--------------------------------  node main   -------------------------------------
#===================================================================================
time.sleep(2)
rospy.init_node('zigbee', anonymous=True)
rate = rospy.Rate(50)

# sub msg 
rospy.Subscriber('iusl_ros/auto_fire', Bool, callback_autofire_cmd)
rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)            # my rtk pos
# pub msg 
ground_mission_cmd_publisher = rospy.Publisher('/iusl_ros/ground_mission_cmd', Bool, queue_size=3)
home_rtk_publisher = rospy.Publisher('/iusl_ros/home_rtk', NavSatFix, queue_size = 10)

# 网枪复位0xFF, 0x02, 0x00, 0xF4, 0x01
send_data = [255, 2, 0, 244, 1]  
netgun_serial.write(send_data)

while True:
  # rosbag 
  # bag 的开始和结束
  if (not bag_start) and home_rtk_num < 15:
    bag_start = True
    bag_home_rtk = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'home_rtk.bag', 'w')
  elif bag_start and home_rtk_num >=20 :
    bag_start = False
    bag_home_rtk.close()
    

  # zigbee receive, receive from ground station: misssion cmd
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
        ground_mission_data = data[0]
        if ground_mission_data > 0.5:
          ground_mission_cmd = True
        elif ground_mission_data < 0.5:
          ground_mission_cmd = False
          if fired:
            send_data = [255, 2, 0, 244, 1]  
            netgun_serial.write(send_data)
  # end receive zigbee data
  # pub ground_mission_cmd
  ground_mission_cmd_publisher.publish(ground_mission_cmd)   # pub cmd  
  home_rtk_publisher.publish(home_rtk_msg)    
  rate.sleep()
# end while



