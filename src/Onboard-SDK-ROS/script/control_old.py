#! /usr/bin/env python
# coding=utf-8
"""
控制节点
"""

import rospy
import rosbag
import numpy as np
import math
import os
import time
from decimal import Decimal
import serial

from dji_osdk_ros.msg import iuslTarState      # target state
from dji_osdk_ros.msg import iuslMyState       # my state for bag
from dji_osdk_ros.msg import iuslUAVCtrlCmd    # my control cmd
from std_msgs.msg import UInt8                 # flight state, ground mission cmd
from sensor_msgs.msg import NavSatFix          # RTK pos
from std_msgs.msg import Int16                 # rtk yaw
from std_msgs.msg import Bool                  # 网枪发射指令
from geometry_msgs.msg import Vector3Stamped   # gimbal state,  UAV RTK velocity
from dji_osdk_ros.msg import iuslDetectionResult  # detect state for fire

from dji_osdk_ros.srv import SetGoHomeAltitude
from dji_osdk_ros.srv import SetHomePoint
from dji_osdk_ros.srv import ObtainControlAuthority


# ===========================================================================================
# ==============================  call back  ================================================
# ===========================================================================================

# 接收
def callback_home_rtk(msg):
  global home_rtk
  global home_rtk_OK
  home_rtk_OK = False
  

  return

def callback_recive_estTarState(msg):  # update est tar state 
  global est_tar_x
  global est_tar_y
  global est_tar_z
  global est_tar_vx
  global est_tar_vy
  global est_tar_OK
  est_tar_OK = msg.tar_OK
  est_tar_x = msg.tar_x
  est_tar_y = msg.tar_y
  est_tar_z = msg.tar_z
  est_tar_vx = msg.tar_vx
  est_tar_vy = msg.tar_vy
  return

def callback_recive_groundMissionCmd(msg):   # update ground mission cmd
  global ground_mission_cmd
  global ground_mission_start
  ground_mission_cmd = msg.data
  if ground_mission_cmd > 0.5 and ground_mission_cmd < 1.5:
    ground_mission_start = True
  else:
    ground_mission_start = False
  return

def callback_recive_rtkpos(msg):             # update my UAV pos
  global my_UAV_x
  global my_UAV_y
  global my_UAV_z
  global my_UAV_home_x
  global my_UAV_home_y
  global my_UAV_home_z
  global my_UAV_home_OK
  global Orig_lat
  global Orig_lon
  global Orig_alt
  
  UAV_lat = math.radians(msg.latitude)
  UAV_lon = math.radians(msg.longitude)
  UAV_alt = msg.altitude
  Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat)**2) ) + UAV_alt
  Ed = Ec * math.cos(UAV_lat)
  d_lat = UAV_lat - Orig_lat
  d_lon = UAV_lon - Orig_lon
  my_UAV_x = d_lat * Ec
  my_UAV_y = d_lon * Ed
  my_UAV_z = Orig_alt - UAV_alt

  if not my_UAV_home_OK:
    my_UAV_home_x = my_UAV_x
    my_UAV_home_y = my_UAV_y
    my_UAV_home_z = my_UAV_z
    my_UAV_home_OK = True
  return

def callback_recive_rtkvel(msg):             # update my UAV vel
  global my_UAV_vx
  global my_UAV_vy
  my_UAV_vx = msg.vector.y
  my_UAV_vy = msg.vector.x
  return

def callback_recive_rtkYaw(msg):
  global my_UAV_yaw
  my_UAV_yaw = (msg.data + 90)
  if my_UAV_yaw > 180:
    my_UAV_yaw = my_UAV_yaw - 360
  return

def callback_recive_gimbal_angle(msg):       # update gimbal angle
  global my_gimbal_roll
  global my_gimbal_pitch
  global my_gimbal_yaw
  my_gimbal_pitch = msg.vector.x
  my_gimbal_roll = msg.vector.y
  my_gimbal_yaw = msg.vector.z
  return

def callback_recive_DetectionResult(msg):      # detect state, for fire
  global measure_is_new
  global measure_is_in_center
  global measure_gim_pitch
  global measure_gim_yaw
  global measure_laser_dis
  measure_is_new = True
  dx = 1536/2 - msg.center_x
  dy = 864/2 - msg.center_y
  if abs(dx) < msg.max_length/3 and abs(dy) < msg.max_length/4:
    measure_is_in_center = True
  else:
    measure_is_in_center = False
  measure_gim_pitch = msg.pitch
  measure_gim_yaw = msg.yaw
  measure_laser_dis = msg.laser_dis
  return

# ==========================================================================================
# ========================= global states ==================================================
# ==========================================================================================

# need manual setup

# 静态变量


# 状态更新
home_rtk_OK = False
home_rtk = NavSatFix()

est_tar_OK = False  # 估计的目标位置和速度 (接收自估计节点)
est_tar_x = 0.         
est_tar_y = 0.
est_tar_z = 0.
est_tar_vx = 0.
est_tar_vy = 0. 

my_UAV_x = 0.          # 自己的位置、速度、偏航、云台姿态
my_UAV_y = 0.
my_UAV_z = 0.
my_UAV_vx = 0.        
my_UAV_vy = 0.
my_UAV_roll = 0.
my_UAV_pitch = 0.
my_UAV_yaw = 0.  
my_gimbal_roll = 0. 
my_gimbal_pitch = 0.
my_gimbal_yaw = 0.    

my_UAV_home_OK = False  # 设置的自己的home位置
my_UAV_home_x = 0.     
my_UAV_home_y = 0.
my_UAV_home_z = 0.

Obtain_control = False # if obtain OSDK control
bag_start = False      # if bag is start
auto_fire_cmd = False      # if net is fired

ground_mission_start = False 
ground_mission_cmd = 0 # 1 开始，2 暂停， 3返航

measure_is_new = False      # 目标探测==================TODO
measure_is_in_center =False
measure_gim_pitch = 0.
measure_gim_yaw = 0.
measure_laser_dis = 0.


iuslUAVCtrlCmd_data = iuslUAVCtrlCmd()
iuslUAVCtrlCmd_data.task = 0    # 1 takeoff, 2 gohome, 3 hover, 4 control
iuslUAVCtrlCmd_data.mode = 0    # 1 for pos ctrl, 2 for vel ctrl
iuslUAVCtrlCmd_data.x = 0.
iuslUAVCtrlCmd_data.y = 0.
iuslUAVCtrlCmd_data.z = 0.
iuslUAVCtrlCmd_data.yaw = 0.




# =================================  init  =====================================================
# ----------- init -----------------
rospy.init_node('control', anonymous=True)
rate = rospy.Rate(50)

# --------- sub msg ---------
rospy.Subscriber('/iusl_ros/home_rtk', NavSatFix, callback_home_rtk)    # 接收home点的经纬度，用于计算全局坐标系
rospy.Subscriber('/iusl_ros/estimate_tar_state', iuslTarState, callback_recive_estTarState)           # est tar state
rospy.Subscriber('/iusl_ros/ground_mission_cmd', UInt8, callback_recive_groundMissionCmd)             # ground mission

rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)            # my rtk pos
rospy.Subscriber('dji_osdk_ros/rtk_velocity', Vector3Stamped, callback_recive_rtkvel)         # my rtk vel
rospy.Subscriber('/dji_osdk_ros/rtk_yaw', Int16, callback_recive_rtkYaw)                      # my rtk yaw

rospy.Subscriber('dji_osdk_ros/gimbal_angle', Vector3Stamped, callback_recive_gimbal_angle)   # my gimbal angle

rospy.Subscriber('/iusl_ros/DetectionResult', iuslDetectionResult, callback_recive_DetectionResult)  # detect state for fire

# --------- pub msg ---------

my_UAV_Control_cmd_publisher = rospy.Publisher('/iusl_ros/UAV_control_cmd', iuslUAVCtrlCmd, queue_size=5)




# ==============================  while and calculate  =========================================
rospy.wait_for_service('set_go_home_altitude')
UAV_setGoHomeAltitude_handle = rospy.ServiceProxy('set_go_home_altitude', SetGoHomeAltitude)
res = UAV_setGoHomeAltitude_handle(38.)

#rospy.wait_for_service('set_current_aircraft_point_as_home')       
#UAV_setCurrentPosHome_handle = rospy.ServiceProxy('set_current_aircraft_point_as_home', SetHomePoint)
#res = UAV_setCurrentPosHome_handle()

rospy.wait_for_service('obtain_release_control_authority')
Obtain_control_handle = rospy.ServiceProxy('obtain_release_control_authority', ObtainControlAuthority)
res = Obtain_control_handle(True)
Obtain_control = True


while True:
  # ---------- for rosbag definition (update bag_start) -----------
  if bag_start and auto_fire_cmd:
    bag_ctrlCMD.close()
    bag_mystate.close()
    bag_start = False
  if (not bag_start) and ground_mission_start:
    bag_ctrlCMD = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'CtrlCMD.bag', 'w')
    bag_mystate = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'mypos.bag', 'w')
    bag_start = True
  
  # ----------  update mission state --------------
  ## mission_state        # 0 on the ground, 1 taking off, 2 searching, 3 aimming, 4 manual control, 5 going home
  ## ground_mission_cmd   # 0 init,          1 takeoff,    2 search,    3 aimming, 4 manual control, 5 fire, 6 gohome
  ##iuslUAVCtrlCmd_data.task   # 1 takeoff, 2 gohome, 3 hover, 4 control

  ## on the ground
  if (mission_state > 1.8 and mission_state < 5.2) and (not flying):
    mission_state = 0
    ground_mission_cmd = 0 # reinit ground_mission_cmd
    if Obtain_control:
      res = Obtain_control_handle(False)
      Obtain_control = False

  ## take off
  if mission_state == 0 and ground_mission_cmd == 1:
    if not Obtain_control:
      res = Obtain_control_handle(True)
      Obtain_control = True
    mission_state = 1
    iuslUAVCtrlCmd_data.task = 1
    for i in range(10):
      my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)
      time.sleep(0.02)
    
  ## searching
  if (mission_state == 1 or mission_state == 2 or mission_state == 3 or mission_state == 4) and flying and (not net_fired) and ground_tar_OK and (ground_mission_cmd == 2):
    if not Obtain_control:
      res = Obtain_control_handle(True)
      Obtain_control = True
    mission_state = 2   # searching - ground cmd
    iuslUAVCtrlCmd_data.task = 4
    iuslUAVCtrlCmd_data.mode = 2
    iuslUAVCtrlCmd_data.z = - ground_tar_z + 2.9 + my_UAV_home_z  # dz = 2.9
    k = 0.2
    max_speed = 2
    dx = ground_tar_x - my_UAV_x
    dy = ground_tar_y - my_UAV_y
    dis2 = dx**2 + dy**2 + 0.01
    cmd_vel_x = ground_tar_vx + k * (dis2 - 25) / dis2 * dx   # dxy = 5
    cmd_vel_y = ground_tar_vy + k * (dis2 - 25) / dis2 * dy
    cmd_vel_norm = math.sqrt(cmd_vel_x**2 + cmd_vel_y**2)
    if cmd_vel_norm > max_speed:
      cmd_vel_x = cmd_vel_x/cmd_vel_norm*max_speed
      cmd_vel_y = cmd_vel_y/cmd_vel_norm*max_speed
    iuslUAVCtrlCmd_data.x = cmd_vel_x
    iuslUAVCtrlCmd_data.y = cmd_vel_y
    iuslUAVCtrlCmd_data.yaw = math.degrees(math.atan2(dy, dx))
    my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)

  ## aimming
  #print(mission_state)
  if (mission_state == 1 or mission_state == 2 or mission_state == 3 or mission_state == 4) and flying and (not net_fired) and est_tar_OK and (ground_mission_cmd == 3):
    if not Obtain_control:
      res = Obtain_control_handle(True)
      Obtain_control = True
    mission_state = 3   # aimming - ground cmd
    iuslUAVCtrlCmd_data.task = 4
    iuslUAVCtrlCmd_data.mode = 2
    iuslUAVCtrlCmd_data.z = - est_tar_z + 2.9 + my_UAV_home_z   # dz = 2.9
    k = 0.1
    max_speed = 1
    dx = est_tar_x - my_UAV_x
    dy = est_tar_y - my_UAV_y
    dis2 = dx**2 + dy**2 + 0.01
    cmd_vel_x = est_tar_vx + k * (dis2 - 25) / dis2 * dx    # dxy = 5
    cmd_vel_y = est_tar_vy + k * (dis2 - 25) / dis2 * dy
    cmd_vel_norm = math.sqrt(cmd_vel_x**2 + cmd_vel_y**2)
    if cmd_vel_norm > max_speed:
      cmd_vel_x = cmd_vel_x/cmd_vel_norm*max_speed
      cmd_vel_y = cmd_vel_y/cmd_vel_norm*max_speed
    iuslUAVCtrlCmd_data.x = cmd_vel_x
    iuslUAVCtrlCmd_data.y = cmd_vel_y
    iuslUAVCtrlCmd_data.yaw = my_gimbal_yaw
    my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)

  ## manual control
  if (mission_state == 1 or mission_state == 2 or mission_state == 3) and flying and ground_mission_cmd == 4:
    mission_state = 4   # manual control - ground cmd
    iuslUAVCtrlCmd_data.task = 3
    iuslUAVCtrlCmd_data.x = 0.
    iuslUAVCtrlCmd_data.y = 0.
    iuslUAVCtrlCmd_data.z = -my_UAV_z + my_UAV_home_z
    iuslUAVCtrlCmd_data.yaw = my_UAV_yaw
    for i in range(10):
      my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)
      time.sleep(0.02)
    if Obtain_control:
      res = Obtain_control_handle(False)
      Obtain_control = False

  ## go home
  if (mission_state == 1 or mission_state == 2 or mission_state == 3 or mission_state == 4) and flying and ground_mission_cmd == 6:
    if not Obtain_control:
      res = Obtain_control_handle(True)
      Obtain_control = True
    mission_state = 5   # go home - ground cmd
    iuslUAVCtrlCmd_data.task = 2
    for i in range(10):
      my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)
      time.sleep(0.02)

  ## fire
  if (mission_state == 2 or mission_state == 3 or mission_state == 4) and flying and (not net_fired) and ground_mission_cmd == 5:
    fire_data = [255, 35, 7, 1, 42, 255, 61]
    net_fired = True



  # ----------------  bag write  ------------------
  if bag_start:
    bag_ctrlCMD.write('/iusl_bag/control_cmd', iuslUAVCtrlCmd_data)
    my_state = iuslMyState()
    my_state.my_UAV_x = my_UAV_x
    my_state.my_UAV_y = my_UAV_y
    my_state.my_UAV_z = my_UAV_z
    my_state.my_UAV_vx = my_UAV_vx
    my_state.my_UAV_vy = my_UAV_vy
    bag_mystate.write('/iusl_bag/myState', my_state)
  

  rate.sleep()





