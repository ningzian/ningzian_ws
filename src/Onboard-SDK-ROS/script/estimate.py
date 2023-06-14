#! /usr/bin/env python
# coding=utf-8

"""
功能：
   - 从视觉检测节点接收检测信息，估计目标的运动状态，并发送给控制节点
bag保存：（保存从 ground_mission_start 到 auto_fire 时间段内的bag信息）
  - 估计的目标位置和速度
"""

import rospy
import rosbag
import numpy as np
import math
import os
from decimal import Decimal
from datetime import datetime
import time

# msg and service
from dji_osdk_ros.msg import iuslDetectionResult
from dji_osdk_ros.msg import iuslTarState
from std_msgs.msg import UInt8                 # flight state
from std_msgs.msg import Int32MultiArray
from std_msgs.msg import Bool


# ==================================================================================
# ============================  receive callback   =====================================
# ==================================================================================
def callback_recive_DetectionResult(msg):      # 
  global Orig_lat
  global Orig_lon
  global Orig_alt

  global measure_is_new
  global measure_time_stamp
  global measure_center_x
  global measure_center_y
  global measure_
  global measure_max_length
  global measure_gim_pitch
  global measure_gim_yaw
  global measure_gim_roll
  global measure_UAV_x
  global measure_UAV_y
  global measure_UAV_z
  global measure_cam_x
  global measure_cam_y
  global measure_cam_z
  global measure_laser_dis

  measure_is_new = True   
  measure_time_stamp = msg.time
  measure_center_x = msg.center_x
  measure_center_y = msg.center_y
  measure_max_length = msg.max_length
  measure_gim_pitch = msg.pitch
  measure_gim_yaw = msg.yaw
  measure_gim_roll = msg.roll

  UAV_lat = math.radians(msg.UAV_lat)
  UAV_lon = math.radians(msg.UAV_lon)
  UAV_alt = msg.UAV_alt
  Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat)**2) ) + UAV_alt
  Ed = Ec * math.cos(UAV_lat)
  d_lat = UAV_lat - Orig_lat
  d_lon = UAV_lon - Orig_lon
  measure_UAV_x = d_lat * Ec
  measure_UAV_y = d_lon * Ed
  measure_UAV_z = Orig_alt - UAV_alt


  measure_laser_dis = msg.laser_dis
  return

def callback_update_ground_cmd(msg): # 1 start mission, 2 pause mission, 3 go home
  global ground_mission_start
  if msg.data > 0.5 and msg.data < 1.5:
    ground_mission_start = True
  else:
    ground_mission_start = False
  return

# 接收发射网枪的指令，用于bag的中断保存
def callback_autofire_cmd(msg):
  global auto_fire_cmd
  if msg.data:
    auto_fire_cmd = True
  else:
    auto_fire_cmd = False
  return


# ==================================================================================
# ============================  global param   =====================================
# ==================================================================================

# ---------------  need manual setup  -----------------------
Orig_lat = math.radians(30.12997303560482)    # 原点的经纬度和海拔
Orig_lon = math.radians(120.07509457775448)   # 云栖（待验证）（30.12997303560482、120.07509457775448、16.8）
Orig_alt = 10.                                # 云谷（需要打点）

est_UAV_real_length = 0.47                    # 目标的尺寸信息

kf_Q = np.zeros([6, 6])             # 卡尔曼滤波的参数
kf_Q[3, 3] = 0.1 
kf_Q[4, 4] = 0.1 
kf_Q[5, 5] = 0.1 
kf_R_original = np.zeros([4, 4])
kf_R_original[0, 0] = 0.0001
kf_R_original[1, 1] = 0.0001
kf_R_original[2, 2] = 0.0001
kf_R_original[3, 3] = 1        # 如果有激光测距数据，此值会更新成 0.000001
kf_P = np.zeros([6, 6])
kf_P[0, 0] = 0.1
kf_P[1, 1] = 0.1
kf_P[2, 2] = 0.1
kf_P[3, 3] = 0.1
kf_P[4, 4] = 0.1
kf_P[5, 5] = 0.1



# ----------------  updated states  ---------------------
ground_mission_start = False      # 有没有在执行任务
auto_fire_cmd = False
bag_start = False

measure_is_new = False    # 相机观测的信息，包括观测时的无人机和相机的状态信息
measure_time_stamp =0.
measure_center_x = 0.
measure_center_y = 0.
measure_max_length = 0.
measure_gim_pitch = 0.
measure_gim_yaw = 0.
measure_gim_roll = 0.
measure_UAV_x = 0.
measure_UAV_y = 0.
measure_UAV_z = 0.
measure_cam_x = 0.
measure_cam_y = 0.
measure_cam_z = 0.
measure_laser_dis = 0.

est_kf_OK = False
kf_estimated_state = np.array([[0],[0],[0], [0], [0], [0]])    # initial state

est_tar_state = iuslTarState()
est_tar_state.tar_OK = False
est_tar_state.tar_x = 0.
est_tar_state.tar_y = 0.
est_tar_state.tar_z = 0.
est_tar_state.tar_vx = 0.
est_tar_state.tar_vy = 0.

# --------------------  static param  ----------------------------------
Intrinsic_Matrix = np.array([[1099, 0, 768],[0, 1099, 432],[0, 0, 1]])   # H20T 1536x864
R_1_c2g = np.array([[0, 0, 1],[1, 0, 0],[0, 1, 0]])
cam_f = 0.0045  # for 1536x864
cam_s = 0.000004093  # for 1536x864
net_width = 1536
net_height = 864
kf_F = np.identity(6)
kf_F[0, 3] = 0.02
kf_F[1, 4] = 0.02
kf_F[2, 5] = 0.02





# ==================================================================================
#--------------------------------  node main   -------------------------------------
#===================================================================================
rospy.init_node('estimate', anonymous=True)
rate = rospy.Rate(50)

# sub msg 
rospy.Subscriber('/iusl_ros/DetectionResult', iuslDetectionResult, callback_recive_DetectionResult)
rospy.Subscriber('/iusl_ros/ground_mission_cmd', UInt8, callback_update_ground_cmd)
rospy.Subscriber('iusl_ros/auto_fire', Bool, callback_autofire_cmd)

# pub msg 
est_tar_state_publisher = rospy.Publisher('/iusl_ros/estimate_tar_state', iuslTarState, queue_size=5)
mobileBox_publisher = rospy.Publisher('/iusl_ros/mobile_box', Int32MultiArray, queue_size=5)


while True:
  # rosbag 
  if bag_start and auto_fire_cmd:
    bag_est_tar_state.close()
    bag_start = False
  if (not bag_start) and ground_mission_start:
    bag_est_tar_state = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'est_tar_state.bag', 'w')
    bag_start = True

  # calculate duration, for plkf reinit 
  time_now = rospy.Time.now()
  dt = (time_now - measure_time_stamp).to_sec()
  if dt > 6:
    est_kf_OK = False
    kf_P = np.zeros([6, 6])
    kf_P[0, 0] = 0.1
    kf_P[1, 1] = 0.1
    kf_P[2, 2] = 0.1
    kf_P[3, 3] = 0.1
    kf_P[4, 4] = 0.1
    kf_P[5, 5] = 0.1
    kf_R_original[3, 3] = 0.1
    
  # if there is a new measurment, do all PLKF steps
  if ground_mission_start:
    if measure_is_new: 
      measure_is_new = False
      # 计算方向信息
      pos_tar_p = np.array([[measure_center_x],[measure_center_y],[1]])
      direction_c = np.dot(np.linalg.inv(Intrinsic_Matrix), pos_tar_p)
      p_tem = math.radians(measure_gim_pitch)
      r_tem = math.radians(measure_gim_roll)
      y_tem = math.radians(measure_gim_yaw)
      R_x = np.array([[1, 0, 0],[0, math.cos(-r_tem), math.sin(-r_tem)],[0, -math.sin(r_tem), math.cos(r_tem)]])
      R_y = np.array([[math.cos(-p_tem), 0, -math.sin(-p_tem)],[0,1,0],[math.sin(-p_tem), 0, math.cos(-p_tem)]])
      R_z = np.array([[math.cos(-y_tem), math.sin(-y_tem), 0],[-math.sin(-y_tem),math.cos(-y_tem),0],[0, 0, 1]])
      R_Mat_c2g = np.dot(np.dot(np.dot(R_z, R_y), R_x), R_1_c2g)
      direction_g = np.dot(R_Mat_c2g, direction_c)
      est_direction_g_bar = direction_g/np.linalg.norm(direction_g)
      # 计算距离信息
      dx = net_width/2 - measure_center_x
      dy = net_height/2 - measure_center_y
      if abs(dx) < measure_max_length/3 and abs(dy) < measure_max_length/6 and measure_laser_dis < 15 and measure_laser_dis > 3:
        est_dis = measure_laser_dis
        est_UAV_real_length = measure_laser_dis * measure_max_length * cam_s / cam_f
        kf_R_original[3, 3] = 0.000001
      else:
        if measure_max_length < 1:  #(prevent division of zero) 
          measure_max_length = 1
        est_dis = est_UAV_real_length * math.sqrt(cam_f**2 + (dx**2 + dy**2) * (cam_s**2)) / (measure_max_length * cam_s)
      # 发送估计的距离到遥PSDK
      dis_to_mobile = Int32MultiArray()
      M_data_int = int (est_dis) 
      M_data_dec = int ((est_dis - M_data_int) * 10) 
      dis_to_mobile.data.append(M_data_int)
      dis_to_mobile.data.append(M_data_dec)
      mobileBox_publisher.publish(dis_to_mobile)
      # get observer's pos
      pos_my = np.array([[measure_UAV_x], [measure_UAV_y], [measure_UAV_z]])
      # calculate mear state
      z1 = np.dot((np.identity(3) - np.dot(est_direction_g_bar, np.transpose(est_direction_g_bar))), pos_my)
      z2 = pos_my + np.dot(est_dis, est_direction_g_bar)
      kf_mear_state = np.vstack((z1, z2))
      # calculate KF_R
      r_tem = np.linalg.norm(kf_estimated_state[0:3, 0] - pos_my)
      E_tem_1 = np.hstack(( np.dot(r_tem, (np.identity(3) - np.dot(est_direction_g_bar, np.transpose(est_direction_g_bar)))), np.zeros([3, 1]) ))
      E_tem_2 = np.hstack(( np.dot(r_tem, np.identity(3)), est_direction_g_bar ))
      E_tem = np.vstack(( E_tem_1, E_tem_2 ))
      KF_R = np.dot(np.dot(E_tem, kf_R_original), np.transpose(E_tem))
      # calculate H
      H1 = np.identity(3) - np.dot(est_direction_g_bar, np.transpose(est_direction_g_bar))
      H1 = np.hstack((H1, np.zeros([3, 3])))
      H2 = np.hstack((np.identity(3), np.zeros([3, 3])))
      kf_H = np.hstack((H1, H2))  
      
      if not est_kf_OK:   # 第一次的估计状态
        kf_estimated_state = np.vstack((pos_my + est_direction_g_bar * est_dis, np.array([[0], [0], [0]])))
        est_kf_OK = True
      else:  # PLKF 步骤：5个公式
        kf_estimated_state = np.dot(kf_F, kf_estimated_state)
        kf_P = np.dot(np.dot(kf_F, kf_P), np.transpose(kf_F)) + kf_Q
        K = np.dot(np.dot(kf_P, np.transpose(kf_H)), np.linalg.pinv(np.dot(np.dot(kf_H, kf_P), np.transpose(kf_H)) + kf_R))
        kf_estimated_state = kf_estimated_state + np.dot(K, kf_mear_state - np.dot(kf_H, kf_estimated_state))
        n_tem, _ = K.shape
        kf_P = np.dot(np.identity(n_tem) - np.dot(K, kf_H), kf_P)
    # -----------  if there is no new measurment, only do predict step ----------------
    else:
      if est_kf_OK:
        kf_estimated_state = np.dot(kf_F, kf_estimated_state)
    # ----------- pub ---------------
    est_tar_state.tar_OK = est_ekf_OK
    est_tar_state.tar_x = ekf_estimated_state[0,0]
    est_tar_state.tar_y = ekf_estimated_state[1,0]
    est_tar_state.tar_z = ekf_estimated_state[2,0]
    est_tar_state.tar_vx = ekf_estimated_state[3,0]
    est_tar_state.tar_vy = ekf_estimated_state[4,0]
    est_tar_state_publisher.publish(est_tar_state)
  # end if ground_mission_start

  if bag_start:
    bag_est_tar_state.write('/iusl_bag/estimate_tar_state', est_tar_state)
  #print(ekf_estimated_state - np.array([[measure_UAV_x],[measure_UAV_y],[measure_UAV_z],[0],[0],[0]]))
  rate.sleep()
# end while



#print(rospy.Time.now())
















