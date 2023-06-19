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

from dji_osdk_ros.msg import iuslTarState      # target state
from dji_osdk_ros.msg import iuslMyState       # 自己的状态用于bag记录
from dji_osdk_ros.msg import iuslUAVCtrlCmd    # 控制指令，用于bag记录
from std_msgs.msg import UInt8                 # flight state, ground mission cmd
from sensor_msgs.msg import NavSatFix          # RTK pos，home pos
from std_msgs.msg import Int16                 # rtk yaw
from std_msgs.msg import Bool                  # 网枪发射指令
from geometry_msgs.msg import Vector3Stamped   # gimbal state,  UAV RTK velocity
from dji_osdk_ros.msg import iuslDetectionResult  # 图像的检测结果，用于判断是否发射网枪
from dji_osdk_ros.srv import ObtainControlAuthority



# ==========================================================================================
# ====================== receive msg call back =============================================
# ==========================================================================================

# 接收home信息
def callback_recive_home_rtk(msg):            
  global home_rtk
  global home_rtk_OK
  home_rtk = msg
  home_rtk_OK = True
  return

# 接收自己的状态
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

def callback_recive_rtkpos(msg):             # update my UAV pos
  # 读取状态
  global home_rtk_OK
  global home_rtk
  global UAV_yaw_now
  # 更新状态
  global UAV_lat_now
  global UAV_lon_now
  global UAV_alt_now
  global cam_x_now
  global cam_y_now
  global cam_z_now 

  if home_rtk_OK:
    # 计算无人机全局位置
    UAV_lat_now = math.radians(msg.latitude)
    UAV_lon_now = math.radians(msg.longitude)
    UAV_alt_now = msg.altitude
    home_lat = math.radians(home_rtk.latitude)
    home_lon = math.radians(home_rtk.longitude)
    home_alt = home_rtk.altitude
    Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat)**2) ) + UAV_alt
    Ed = Ec * math.cos(UAV_lat)
    d_lat = UAV_lat - home_lat
    d_lon = UAV_lon - home_lon
    UAV_x = d_lat * Ec
    UAV_y = d_lon * Ed
    UAV_z = home_alt - UAV_alt
    # 计算相机的全局位置 pos_my
    cam_x_now, cam_y_now, cam_z_now = calculate_cam_pos(UAV_lat_now, UAV_lon_now, UAV_alt_now, home_lat, home_lon, home_alt, UAV_yaw_now)

  return




# ==================================================================================
# ==========================  custom functions   ===================================
# ==================================================================================
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
  dpos_rotor_2_cam = np.array([[0.45], [-0.3], [0.25]])           
  R_b2g_z = np.array([[math.cos(UAV_yaw), -math.sin(UAV_yaw), 0],
                      [math.sin(UAV_yaw), math.cos(UAV_yaw), 0],
                      [0, 0, 1]])
  dpos = np.dot(R_b2g_z, dpos_rotor_2_cam)
  cam_x = UAV_x + dpos[0, 0]
  cam_y = UAV_y + dpos[0, 1]
  cam_z = UAV_z + dpos[0, 2]

  return cam_x, cam_y, cam_z



# ==========================================================================================
# ================================= 全局变量 ================================================
# ==========================================================================================

# 状态量（需要更新）
home_rtk_OK = False     # home 原点的坐标
home_rtk = NavSatFix()

UAV_lat_now = 0.         # 自己的状态
UAV_lon_now = 0.
UAV_alt_now = 0.
UAV_yaw_now = 0.
UAV_vx_now = 0.
UAV_vy_now = 0.
cam_x_now = 0.
cam_y_now = 0.
cam_z_now = 0.





# ==========================================================================================
# =================================== main =================================================
# ==========================================================================================
# init 
rospy.init_node('control', anonymous=True)
rate = rospy.Rate(50)

# sub msg 
rospy.Subscriber('/iusl_ros/home_rtk', NavSatFix, callback_recive_home_rtk) 
rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)            # my rtk pos
rospy.Subscriber('dji_osdk_ros/rtk_velocity', Vector3Stamped, callback_recive_rtkvel)         # my rtk vel
rospy.Subscriber('/dji_osdk_ros/rtk_yaw', Int16, callback_recive_rtkYaw) 

# 获取控制权限
rospy.wait_for_service('obtain_release_control_authority')
Obtain_control_handle = rospy.ServiceProxy('obtain_release_control_authority', ObtainControlAuthority)
res = Obtain_control_handle(True)
Obtain_control = True

