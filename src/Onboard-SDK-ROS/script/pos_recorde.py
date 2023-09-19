#! /usr/bin/env python
# coding=utf-8


import rospy
import rosbag
import numpy as np
import math
import os
import time
from decimal import Decimal
import tf
import serial

from dji_osdk_ros.msg import iuslTarState      # target state
from dji_osdk_ros.msg import iuslMyState       # 自己的状态用于bag记录
from dji_osdk_ros.msg import iuslUAVCtrlCmd    # 控制指令，用于bag记录
from dji_osdk_ros.msg import iuslDetectionResult  # 接收检测框，用于自动打网
from std_msgs.msg import UInt8                 # flight state, ground mission cmd
from sensor_msgs.msg import NavSatFix          # RTK pos，home pos
from std_msgs.msg import Int16                 # rtk yaw
from std_msgs.msg import Bool                  # 网枪发射指令
from geometry_msgs.msg import Vector3Stamped   # gimbal state,  UAV RTK velocity
from geometry_msgs.msg import QuaternionStamped
from dji_osdk_ros.msg import MobileData           # 数据类型：遥控器发来的信息
from dji_osdk_ros.msg import iuslDetectionResult  # 图像的检测结果，用于判断是否发射网枪
from dji_osdk_ros.srv import ObtainControlAuthority



# ==========================================================================================
# ====================== receive msg call back =============================================
# ==========================================================================================

def callback_flight_state(msg):
  global is_flight
  if msg.data > 0.1:
    is_flight = True
  else:
    is_flight = False
  return

# 接收遥控器的指令，更新两个flag
def callback_mobile_data(msg):
  global ground_mission_cmd  # 遥控器指令：跟踪或者手动飞行

  # 接收遥控器指令， 更新两个变量
  data_type = int(msg.data[0])
  data_length = int(msg.data.size() - 1)

  # 跟踪指令，来自遥控器
  if (data_type == 34) and (data_length == 1):
    data_tem = int(msg.data[1])
    if (data_tem == 34):
      ground_mission_cmd = True
    elif (data_tem == 0):
      ground_mission_cmd = False

  return


# 接收自己的速度信息
def callback_recive_rtkvel(msg):  
  global UAV_vx_now
  global UAV_vy_now
  UAV_vx_now = msg.vector.y
  UAV_vy_now = msg.vector.x
  return

def callback_recive_rtkYaw(msg):
  global UAV_yaw_now
  UAV_yaw_now = (msg.data + 90)
  if UAV_yaw_now > 180:
    UAV_yaw_now = UAV_yaw_now - 360
  return

def callback_UAV_attitude(msg):
  global UAV_roll_now
  global UAV_pitch_now
  UAV_roll_now, UAV_pitch_now, _ = tf.transformations.euler_from_quaternion([msg.quaternion.x, msg.quaternion.y, msg.quaternion.z, msg.quaternion.w])
  UAV_roll_now = math.degrees(UAV_roll_now)
  UAV_pitch_now = - math.degrees(UAV_pitch_now)
  return


# 接收自己的rtk状态
def callback_recive_rtkpos(msg):             
  # home rtk相关
  global home_rtk_OK
  global home_rtk_num
  global home_rtk_msg
  global bag_home_rtk
  global bag_start
  # 自己的状态更新
  global UAV_lat_now
  global UAV_lon_now
  global UAV_alt_now
  global UAV_center_x_now
  global UAV_center_y_now
  global UAV_center_z_now 

  if (home_rtk_num < 200) and (msg.altitude > 0.5):
    home_rtk_msg = msg
    home_rtk_num += 1
    home_rtk_OK = True
    if bag_start:
      bag_home_rtk.write('/iusl_bag/home_rtk', msg)

  if home_rtk_OK:
    # 计算无人机全局位置
    UAV_lat_now = math.radians(msg.latitude)
    UAV_lon_now = math.radians(msg.longitude)
    UAV_alt_now = msg.altitude
    home_lat = math.radians(home_rtk.latitude)
    home_lon = math.radians(home_rtk.longitude)
    home_alt = home_rtk.altitude
    Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat_now)**2) ) + UAV_alt_now
    Ed = Ec * math.cos(UAV_lat_now)
    d_lat = UAV_lat_now - home_lat
    d_lon = UAV_lon_now - home_lon
    UAV_x = d_lat * Ec
    UAV_y = d_lon * Ed
    UAV_z = home_alt - UAV_alt_now
    # 计算相机的全局位置 pos_my
    UAV_center_x_now, UAV_center_y_now, UAV_center_z_now = calculate_cam_pos(UAV_lat_now, UAV_lon_now, UAV_alt_now, home_lat, home_lon, home_alt, UAV_yaw_now)
  return



# ==================================================================================
# ==========================  custom functions   ===================================
# ==================================================================================
# 将rotor所在的位置转换到无人机中心的位置
def calculate_cam_pos(UAV_lat, UAV_lon, UAV_alt, home_lat, home_lon, home_alt, UAV_yaw):
  # 计算rotor的全局位置信息
  UAV_lat = math.radians(UAV_lat)
  UAV_lon = math.radians(UAV_lon)
  Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat)**2) ) + UAV_alt
  Ed = Ec * math.cos(UAV_lat)
  d_lat = UAV_lat - math.radians(home_lat)
  d_lon = UAV_lon - math.radians(home_lon)
  UAV_x = d_lat * Ec
  UAV_y = d_lon * Ed
  UAV_z = home_alt - UAV_alt
  # 位置补偿的初始值
  dpos_rotor_2_cam = np.array([[0.3], [-0.3], [0.08]]) 
  R_b2g_z = np.array([[math.cos(UAV_yaw), -math.sin(UAV_yaw), 0],
                      [math.sin(UAV_yaw), math.cos(UAV_yaw), 0],
                      [0, 0, 1]])
  dpos = np.dot(R_b2g_z, dpos_rotor_2_cam)
  cam_x = UAV_x + dpos[0, 0]
  cam_y = UAV_y + dpos[1, 0]
  cam_z = UAV_z + dpos[2, 0]
  return cam_x, cam_y, cam_z


# ==========================================================================================
# ================================= 全局变量 ================================================
# ==========================================================================================

# 状态量（需要更新）
home_rtk_OK = False     # home 原点的坐标
home_rtk_num = 0
home_rtk_msg = NavSatFix()

UAV_lat_now = 0.         # 自己的状态
UAV_lon_now = 0.
UAV_alt_now = 0.
UAV_roll_now = 0.
UAV_pitch_now = 0.
UAV_yaw_now = 0.
UAV_vx_now = 0.
UAV_vy_now = 0.
UAV_center_x_now = 0.
UAV_center_y_now = 0.
UAV_center_z_now = 0.

ground_mission_cmd = False
is_flight = False
bag_start = False



# ==========================================================================================
# =================================== main =================================================
# ==========================================================================================
# init 
rospy.init_node('control', anonymous=True)
rate = rospy.Rate(50)

# sub msg 
# 修改为遥控器发来的指令
rospy.Subscriber('/dji_osdk_ros/from_mobile_data/', MobileData ,callback_mobile_data)

# sub msg for 自己的飞行状态
rospy.Subscriber('/dji_osdk_ros/flight_status', Uint8, callback_flight_state)                 # 接收飞机的飞行状态
rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)            # my rtk pos
rospy.Subscriber('dji_osdk_ros/rtk_velocity', Vector3Stamped, callback_recive_rtkvel)         # my rtk vel
rospy.Subscriber('/dji_osdk_ros/rtk_yaw', Int16, callback_recive_rtkYaw) 
rospy.Subscriber('dji_osdk_ros/attitude', QuaternionStamped, callback_UAV_attitude)


# 开始循环
while True:
  # bag 的开始和结束
  if (not bag_start) and (is_flight or ground_mission_cmd):
    bag_start = True
    bag_my_state = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'my_state.bag', 'w')
    bag_home_rtk = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'home_rtk.bag', 'w')
  elif bag_start and ((not ground_mission_cmd) or (not is_flight)):
    bag_start = False
    bag_my_state.close()
    bag_home_rtk.close()


  # bag 保存
  if bag_start:
    # 保存自己的状态
    my_state_for_bag = iuslMyState()
    my_state_for_bag.time = time_now
    my_state_for_bag.UAV_lat = UAV_lat_now
    my_state_for_bag.UAV_lon = UAV_lon_now
    my_state_for_bag.UAV_alt = UAV_alt_now
    my_state_for_bag.UAV_yaw = UAV_yaw_now
    my_state_for_bag.UAV_vx = UAV_vx_now
    my_state_for_bag.UAV_vy = UAV_vy_now
    my_state_for_bag.cam_x = cam_x_now
    my_state_for_bag.cam_y = cam_y_now
    my_state_for_bag.cam_z = cam_z_now
    bag_my_state.write('/iusl_bag/my_state', my_state_for_bag)

  rate.sleep()

  






