#! /usr/bin/env python
# coding=utf-8

import rospy
import rosbag
import numpy as np
import math
import os
from decimal import Decimal
from datetime import datetime
import time

from geometry_msgs.msg import Vector3Stamped   # RTK velocity
from sensor_msgs.msg import NavSatFix          # RTK position
from std_msgs.msg import UInt8                 # flight state


def callback_RTK_pos(msg):
  global bag
  global flying
  if flying:
    bag_rtk_pos.write('iusl_bag/rtk_pos', msg)
  return

def callback_RTK_vel(msg):
  global bag
  global flying
  if flying:
    bag_rtk_vel.write('iusl_bag/rtk_vel', msg)
  return

def callback_flight_state(msg):
  global flying
  if msg.data > 1.2:
    flying = True
  else:
    flying = False
  return


rospy.init_node('record', anonymous=True)
rate = rospy.Rate(50)
flying = False
bag_start = False


rospy.Subscriber('dji_osdk_ros/rtk_position', NavSatFix, callback_RTK_pos)
rospy.Subscriber('dji_osdk_ros/rtk_velocity', Vector3Stamped, callback_RTK_vel)
rospy.Subscriber('dji_osdk_ros/flight_status', UInt8, callback_flight_state)

while True:
  if bag_start and (not flying):
    bag_start = False
    bag_rtk_pos.close()
    bag_rtk_vel.close()
    print('end')
  elif (not bag_start) and flying:
    bag_rtk_pos = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'rtk_pos.bag', 'w')
    bag_rtk_vel = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'rtk_vel.bag', 'w')
    bag_start = True
    print('start')
  rate.sleep()

bag_rtk_pos.close()
bag_rtk_vel.close()


