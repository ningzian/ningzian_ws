#! /usr/bin/env python
# coding=utf-8

"""
估计节点
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
from sensor_msgs.msg import NavSatFix     # rtk pos
from dji_osdk_ros.msg import iuslDetectionResult
from dji_osdk_ros.msg import iuslTarState
from dji_osdk_ros.msg import MobileData        # 数据类型：遥控器发来的信息
from std_msgs.msg import UInt8                 # flight state
from std_msgs.msg import Int32MultiArray
from std_msgs.msg import Bool


# ==================================================================================
# ============================  receive callback   =================================
# ==================================================================================
#   接收RTK的经纬度和海拔，用于记录home位置
def callback_recive_rtkpos(msg):          
  # for msg pub
  global home_rtk_num
  global home_rtk_OK
  global home_rtk_msg
  global home_rtk_publisher
  # for ros bag
  global bag_start
  global bag_home_rtk
  if (home_rtk_num < 200) and (msg.altitude > 0.5):
    home_rtk_msg = msg
    home_rtk_num += 1
    home_rtk_OK = True
    home_rtk_publisher.publish(msg)
    if bag_start:
      bag_home_rtk.write('/iusl_bag/home_rtk', msg)
  return


def callback_recive_DetectionResult(msg):      # 接收检测框的信息
  # 读取的全局变量
  global home_rtk_OK            # 只有有了home_rtk数据才能计算
  global home_rtk               # 用于计算拍摄照片时，相机的全局位置坐标
  global bag_start
  # 需要更新的全局变量
  global img_detection_result   # 变量更新：检测结果
  global pos_my                 # 变量更新：相机的全局位置
  global measure_is_new         # 变量更新：观测信息
  global mear_g_now             #     bearing观测
  global mear_fused_dis_now     #     距离观测
  global est_UAV_real_length    # 变量更新：目标无人机的尺寸信息
  global kf_R_original
  global is_laser_measured      # 变量更新：是否有激光测距数据
  # 需要用到的
  global mobileBox_publisher    # 发送距离信息到遥控器
  global bag_img_detect_result
  global bag_cam_pos
  global bag_measurement

  # 更新变量：检测结果
  img_detection_result = msg

  # 保存bag：检测信息
  if bag_start:
    bag_img_detect_result.write('/iusl_bag/img_detect_result', msg)
  

  # 各种功能实现：计算相机全局位置、计算观测信息
  if home_rtk_OK:
    measure_is_new = True
    # 计算相机全局位置cam_pos，更新 pos_my，记录bag
    UAV_lat = math.radians(msg.UAV_lat)
    UAV_lon = math.radians(msg.UAV_lon)
    UAV_alt = msg.UAV_alt
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
    
    UAV_yaw = math.radians(msg.UAV_yaw)
    cam_x, cam_y, cam_z = calculate_cam_pos(UAV_lat, UAV_lon, UAV_alt, home_lat, home_lon, home_alt, UAV_yaw)
    pos_my = np.array([[cam_x], [cam_y], [cam_z]])
    bag_cam_pos.write('/iusl_bag/cam_pos', pos_my)

    # 计算观测信息：bearing、fused_dis
    Intrinsic_Matrix = np.array([[1099, 0, 768],[0, 1099, 432],[0, 0, 1]])   # H20T 1536x864
    R_1_c2g = np.array([[0, 0, 1],[1, 0, 0],[0, 1, 0]])
    pos_tar_i = np.array([[msg.center_x],[msg.center_y],[1]])
    direction_c = np.dot(np.linalg.inv(Intrinsic_Matrix), pos_tar_i)
    p_tem = math.radians(msg.cam_pitch)
    r_tem = math.radians(msg.cam_roll)
    y_tem = math.radians(msg.cam_yaw)
    R_x = np.array([[1, 0, 0],[0, math.cos(-r_tem), math.sin(-r_tem)],[0, -math.sin(r_tem), math.cos(r_tem)]])
    R_y = np.array([[math.cos(-p_tem), 0, -math.sin(-p_tem)],[0,1,0],[math.sin(-p_tem), 0, math.cos(-p_tem)]])
    R_z = np.array([[math.cos(-y_tem), math.sin(-y_tem), 0],[-math.sin(-y_tem),math.cos(-y_tem),0],[0, 0, 1]])
    R_Mat_c2g = np.dot(np.dot(np.dot(R_z, R_y), R_x), R_1_c2g)
    direction_g = np.dot(R_Mat_c2g, direction_c)
    mear_g_now = direction_g/np.linalg.norm(direction_g)
    #     计算距离信息
    net_width = 1536
    net_height = 864
    dx = net_width/2 - msg.center_x
    dy = net_height/2 - msg.center_y
    measure_laser_dis = msg.laser_dis
    measure_max_length = msg.max_length
    cam_f = 0.0045  # for 1536x864
    cam_s = 0.000004093  # for 1536x864
    if abs(dx) < measure_max_length/2 and abs(dy) < measure_max_length/2 and measure_laser_dis < 15 and measure_laser_dis > 2:
      mear_fused_dis_now = measure_laser_dis
      est_UAV_real_length = measure_laser_dis * measure_max_length * cam_s / cam_f
      is_laser_measured = True
      kf_R_original[3, 3] = 0.4
    else:
      if measure_max_length < 1:  #(prevent division of zero) 
        measure_max_length = 1
      mear_fused_dis_now = est_UAV_real_length * math.sqrt(cam_f**2 + (dx**2 + dy**2) * (cam_s**2)) / (measure_max_length * cam_s)
    measurement_now = np.vstack([mear_g_now, mear_fused_dis_now])
    bag_measurement.write('/iusl_bag/measurement', measurement_now)
    
    # 发送估计的距离到遥PSDK
    dis_to_mobile = Int32MultiArray()
    M_data_int = int (mear_fused_dis_now) 
    M_data_dec = int ((mear_fused_dis_now - M_data_int) * 10) 
    dis_to_mobile.data.append(M_data_int)
    dis_to_mobile.data.append(M_data_dec)
    mobileBox_publisher.publish(dis_to_mobile)

  return

# 接收遥控器的指令，更新两个flag
def callback_mobile_data(msg):
  global ground_mission_cmd  # 遥控器指令：跟踪或者手动飞行
  global fire_cmd

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

  # 网枪指令，来自遥控器
  if (data_type == 51) and (data_length == 1):
    data_tem = int(msg.data[1])
    if (data_tem == 51):
      fire_cmd = True
      ground_mission_cmd = False
    elif (data_tem == 0):
      fire_cmd = False

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
  cam_y = UAV_y + dpos[1, 0]
  cam_z = UAV_z + dpos[2, 0]

  return cam_x, cam_y, cam_z





# ==================================================================================
# ============================  global param   =====================================
# ==================================================================================

# ---------------  need manual setup  -----------------------
est_UAV_real_length = 0.35                    # 目标的尺寸信息

kf_Q = np.zeros([6, 6])             # 卡尔曼滤波的参数
kf_Q[0, 0] = 0.1 
kf_Q[1, 1] = 0.1
kf_Q[2, 2] = 0.1
kf_Q[3, 3] = 0.3 
kf_Q[4, 4] = 0.3 
kf_Q[5, 5] = 0.3 
kf_R_original = np.zeros([4, 4])
kf_R_original[0, 0] = 0.1
kf_R_original[1, 1] = 0.1
kf_R_original[2, 2] = 0.1
kf_R_original[3, 3] = 1        # 如果有激光测距数据，此值会更新成 0.000001
kf_P = np.zeros([6, 6])
kf_P[0, 0] = 0.5
kf_P[1, 1] = 0.5
kf_P[2, 2] = 0.5
kf_P[3, 3] = 0.5
kf_P[4, 4] = 0.5
kf_P[5, 5] = 0.5

# ----------------  updated states  ---------------------
ground_mission_cmd = False      # 有没有在执行任务
fire_cmd = False
bag_start = False
is_laser_measured = False

home_rtk_num = 0
home_rtk_OK = False     # 原点经纬度，起飞点的经纬度和海拔
home_rtk = NavSatFix()


measure_is_new = False    # 相机观测的信息，包括观测时的无人机和相机的状态信息
img_detection_result = iuslDetectionResult()

mear_g_now = np.zeros([3, 1])
mear_fused_dis_now = 0

pos_my = np.zeros([3, 1])  # 自己相机的全局位置坐标

est_kf_OK = False
kf_estimated_state = np.array([[0],[0],[0], [0], [0], [0]])    # initial state

est_tar_state = iuslTarState()
est_tar_state.tar_OK = False
est_tar_state.is_laser_measured = False
est_tar_state.tar_x = 0.
est_tar_state.tar_y = 0.
est_tar_state.tar_z = 0.
est_tar_state.tar_vx = 0.
est_tar_state.tar_vy = 0.

# --------------------  static param  ----------------------------------
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
rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)                  # 接收RTK数据
rospy.Subscriber('/iusl_ros/DetectionResult', iuslDetectionResult, callback_recive_DetectionResult) # 接收检测结果
rospy.Subscriber('/dji_osdk_ros/from_mobile_data/', MobileData ,callback_mobile_data)



# pub msg 
est_tar_state_publisher = rospy.Publisher('/iusl_ros/estimate_tar_state', iuslTarState, queue_size=5)
mobileBox_publisher = rospy.Publisher('/iusl_ros/mobile_box', Int32MultiArray, queue_size=5)
home_rtk_publisher = rospy.Publisher('/iusl_ros/home_rtk', NavSatFix, queue_size=5)

time_now = rospy.Time.now().to_sec()
while True:
  # rosbag，记录从ground
  if (not bag_start) and ground_mission_cmd:
    bag_start = True 
    bag_img_detect_result = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'img_detect_result.bag', 'w')
    bag_home_rtk = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'home_rtk.bag', 'w')
    bag_cam_pos = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'cam_pos.bag', 'w')
    bag_measurement = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'measurement.abg', 'w')
    bag_est_tar_state = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S")+'est_tar_state.bag', 'w')
  elif bag_start and (not ground_mission_cmd):
    bag_start = False
    bag_img_detect_result.close()
    bag_home_rtk.close()
    bag_cam_pos.close()
    bag_measurement.close()
    bag_est_tar_state.close()
  
  # calculate dt
  time_tem = rospy.Time.now().to_sec()
  dt = time_tem - time_now
  time_now = time_tem
  if dt < 0.02:
    dt = 0.02
  if dt > 0.1:
    dt = 0.1
  kf_F[0, 3] = dt
  kf_F[1, 4] = dt
  kf_F[2, 5] = dt

  # calculate duration, for plkf reinit 
  time_now = rospy.Time.now().to_sec()
  dt = time_now - img_detection_result.time

  # 重置估计器
  if (dt > 3) or (not ground_mission_cmd): 
    est_kf_OK = False
    kf_P = np.zeros([6, 6])
    kf_P[0, 0] = 0.1
    kf_P[1, 1] = 0.1
    kf_P[2, 2] = 0.1
    kf_P[3, 3] = 0.1
    kf_P[4, 4] = 0.1
    kf_P[5, 5] = 0.1
    kf_R_original[3, 3] = 1
    
  # if there is a new measurment, do all PLKF steps
  if home_rtk_OK and ground_mission_cmd and (not fire_cmd):
    if measure_is_new: 
      measure_is_new = False
      # calculate mear state
      z1 = np.dot((np.identity(3) - np.dot(mear_g_now, np.transpose(mear_g_now))), pos_my)
      z2 = pos_my + np.dot(mear_fused_dis_now, mear_g_now)
      kf_mear_state = np.vstack([z1, z2])
      # calculate kf_R
      r_tem = mear_fused_dis_now  # np.linalg.norm(kf_estimated_state[0:3, 0] - pos_my)
      E_tem_1 = np.hstack([np.dot(r_tem, (np.identity(3) - np.dot(mear_g_now, np.transpose(mear_g_now)))), np.zeros([3, 1])])
      E_tem_2 = np.hstack([np.dot(r_tem, np.identity(3)), mear_g_now])
      E_tem = np.vstack([E_tem_1, E_tem_2])
      kf_R = np.dot(np.dot(E_tem, kf_R_original), np.transpose(E_tem))
      # calculate H
      H1 = np.identity(3) - np.dot(mear_g_now, np.transpose(mear_g_now))
      H1 = np.hstack([H1, np.zeros([3, 3])])
      H2 = np.hstack([np.identity(3), np.zeros([3, 3])])
      kf_H = np.vstack([H1, H2])  
      
      if not est_kf_OK:   # 第一次的估计状态
        kf_estimated_state = np.vstack([pos_my + mear_g_now * mear_fused_dis_now, np.array([[0], [0], [0]])])
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
    est_tar_state.time = time_now   # img_detect_result.time
    est_tar_state.tar_OK = est_kf_OK
    est_tar_state.is_laser_measured = is_laser_measured
    est_tar_state.tar_x = kf_estimated_state[0,0]
    est_tar_state.tar_y = kf_estimated_state[1,0]
    est_tar_state.tar_z = kf_estimated_state[2,0]
    est_tar_state.tar_vx = kf_estimated_state[3,0]
    est_tar_state.tar_vy = kf_estimated_state[4,0]
    est_tar_state.mear_fused_dis_now = mear_fused_dis_now
    est_tar_state_publisher.publish(est_tar_state)
  # end if ground_mission_cmd

  if bag_start:
    bag_est_tar_state.write('/iusl_bag/estimate_tar_state', est_tar_state)
  rate.sleep()
# end while



#print(rospy.Time.now())
















