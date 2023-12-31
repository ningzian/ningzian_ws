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

# TODO，发射网枪和重置网枪
# 接收遥控器的指令，更新两个flag
def callback_mobile_data(msg):
  global ground_mission_cmd  # 遥控器指令：跟踪或者手动飞行
  global manual_fire_cmd     # 遥控器指令：发射或复位网枪
  global fire_time           # 发射时间
  global netgun_serial       # 网枪串口
  global netgun_reset_data   # 网枪复位指令
  global netgun_fire_data    # 网枪发射指令

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
    # 发射网枪
    if (data_tem == 51):    
      manual_fire_cmd = True
      ground_mission_cmd = False
      fire_time = rospy.Time.now().to_sec()
      netgun_serial.write(netgun_fire_data)
    # 重置网枪
    elif (data_tem == 0):
      manual_fire_cmd = False
      netgun_serial.write(netgun_reset_data)

  return

# 接收home信息
def callback_recive_home_rtk(msg):            
  global home_rtk
  global home_rtk_OK
  home_rtk = msg
  home_rtk_OK = True
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

def callback_recive_gimbal_angle(msg):
  global cam_yaw_now
  global cam_roll_now
  global cam_pitch_now
  cam_pitch_now = msg.vector.x
  cam_roll_now = msg.vector.y
  cam_yaw_now = msg.vector.z
  return

# 接收自己的rtk状态
def callback_recive_rtkpos(msg):             
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
    Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat_now)**2) ) + UAV_alt_now
    Ed = Ec * math.cos(UAV_lat_now)
    d_lat = UAV_lat_now - home_lat
    d_lon = UAV_lon_now - home_lon
    UAV_x = d_lat * Ec
    UAV_y = d_lon * Ed
    UAV_z = home_alt - UAV_alt_now
    # 计算相机的全局位置 pos_my
    cam_x_now, cam_y_now, cam_z_now = calculate_cam_pos(UAV_lat_now, UAV_lon_now, UAV_alt_now, home_lat, home_lon, home_alt, UAV_yaw_now)
  return

# 接收检测框的信息，用于判断是否打网
def callback_recive_DetectionResult(msg):
  global bounding_box_OK
  global bounding_box_center_x
  global bounding_box_center_y
  global bounding_box_width
  global bounding_box_height
  bounding_box_OK = True
  bounding_box_center_x = msg.center_x
  bounding_box_center_y = msg.center_y
  bounding_box_width = msg.box_width
  bounding_box_height = msg.box_height
  return

# 接收估计节点估计的目标状态
def callback_receive_est_tar(msg):
  # 更新的状态
  global est_tar_OK
  global est_laser_OK
  global est_tar_pos_x
  global est_tar_pos_y
  global est_tar_pos_z
  global est_tar_vx
  global est_tar_vy
  global est_fuse_dis
  est_tar_OK = msg.tar_OK
  est_laser_OK = msg.is_laser_measured
  est_tar_pos_x = msg.tar_x
  est_tar_pos_y = msg.tar_y
  est_tar_pos_z = msg.tar_z
  est_tar_vx = msg.tar_vx
  est_tar_vy = msg.tar_vy
  est_fuse_dis = msg.fuse_dis
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


# 根据目标的状态和自己的状态，计算水平速度和垂直高度指令
def cal_my_cmd(dz, dh, k, max_speed,
               tar_x, tar_y, tar_z, tar_vx, tar_vy, 
               my_x, my_y, cam_yaw_now,
               home_alt):
  # 计算高度控制指令
  z_cmd = - tar_z + dz + home_alt
  # 计算偏航控制指令
  yaw_cmd = cam_yaw_now
  # 计算水平速度指令
  dx = tar_x - my_x
  dy = tar_y - my_y
  dis2 = dx**2 + dy**2 + 0.01
  vx_cmd = tar_vx + k * (dis2 - dh**2) / dis2 * dx   # dxy = 5
  vy_cmd = tar_vy + k * (dis2 - dh**2) / dis2 * dy
  cmd_vel_norm = math.sqrt(vx_cmd**2 + vy_cmd**2)
  if cmd_vel_norm > max_speed:
    vx_cmd = vx_cmd/cmd_vel_norm*max_speed
    vy_cmd = vy_cmd/cmd_vel_norm*max_speed
  return vx_cmd, vy_cmd, z_cmd, yaw_cmd


# 网枪发射判断算法
def auto_fire_decide(box_center_x, box_center_y, box_width, box_height, 
                     UAV_pitch, UAV_roll, UAV_yaw, 
                     cam_pitch, cam_roll, cam_yaw,
                     fuse_dis):
  if (fuse_dis > 7) or (fuse_dis < 3):
    auto_fire_cmd = False
  else:
    # 计算准星在图像总的投影坐标点
    d_pitch = cam_pitch - UAV_pitch
    d_roll = cam_roll - UAV_roll
    d_yaw = cam_yaw - UAV_yaw
    #     计算旋转矩阵（机体坐标系到相机坐标系的旋转矩阵）
    R_1_g2c = np.array([[0, 1, 0], 
                        [0, 0, 1], 
                        [1, 0, 0]])
    R_x = np.array([[1, 0, 0],
                    [0, math.cos(d_roll), math.sin(d_roll)],
                    [0, -math.sin(d_roll), math.cos(d_roll)]])
    R_y = np.array([[math.cos(d_pitch), 0, -math.sin(d_pitch)],
                    [0, 1, 0],
                    [math.sin(d_pitch), 0, math.cos(d_pitch)]])
    R_z = np.array([[math.cos(d_yaw), math.sin(d_yaw), 0],
                    [-math.sin(d_yaw), math.cos(d_yaw), 0],
                    [0, 0, 1]])
    R = np.dot(np.dot(np.dot(R_1_g2c, R_x), R_y), R_z)
    d_pos_b = np.array([[math.cos(math.radians(35))], [0], [math.sin(math.radians(35))]])
    d_pos_c = np.dot(R, d_pos_b)
    Intrinsic_Matrix = np.array([[1099, 0, 768],[0, 1099, 432],[0, 0, 1]])
    fire_cross = np.dot(Intrinsic_Matrix, d_pos_c)
    fire_cross_x = fire_cross[0, 0]
    fire_cross_y = fire_cross[1, 0] + box_height/4
    # 判断准星是否在检测框内
    fire_cross_dx = abs(fire_cross_x - box_center_x)
    fire_cross_dy = abs(fire_cross_y - box_center_y)
    if (fire_cross_dx < box_width/1.5) and (fire_cross_dy < box_height/1.5):
      auto_fire_cmd = True
    else:
      auto_fire_cmd = False

  return auto_fire_cmd



# ==========================================================================================
# ================================= 全局变量 ================================================
# ==========================================================================================
# 网枪相关
# zigbee_serial = serial.Serial('/dev/ttyUSB0', 115200, timeout=0.5)
netgun_serial = serial.Serial('/dev/ttyUSB0', 9600, timeout=0.5) 
netgun_reset_data = [255, 2, 0, 244, 1]
netgun_fire_data = [255, 2, 0, 186, 6] 
fire_time = 0
auto_fire_cmd = False
manual_fire_cmd = False

# 需要手动设置的参数
dz = 3    # 抓捕的垂直高度差
dh = 4    # 抓捕的水平距离差
k_h = 0.1 # 水平控制系数
max_speed = 2

# 状态量（需要更新）
home_rtk_OK = False     # home 原点的坐标
home_rtk = NavSatFix()

UAV_lat_now = 0.         # 自己的状态
UAV_lon_now = 0.
UAV_alt_now = 0.
UAV_roll_now = 0.
UAV_pitch_now = 0.
UAV_yaw_now = 0.
UAV_vx_now = 0.
UAV_vy_now = 0.
cam_x_now = 0.
cam_y_now = 0.
cam_z_now = 0.
cam_roll_now = 0.
cam_pitch_now = 0.
cam_yaw_now = 0.

bounding_box_OK = False  # 检测框的信息
bounding_box_center_x = 0.  
bounding_box_center_y = 0.
bounding_box_width = 0.
bounding_box_height = 0.

est_tar_OK = False
est_laser_OK = False
est_tar_pos_x = 0.
est_tar_pos_y = 0.
est_tar_pos_z = 0.
est_tar_vx = 0.
est_tar_vy = 0.
est_fuse_dis = 0.

bag_start = False
ground_mission_cmd = False

iuslUAVCtrlCmd_data = iuslUAVCtrlCmd()
iuslUAVCtrlCmd_data.task = 0    # 1 takeoff, 2 gohome, 3 hover, 4 control
iuslUAVCtrlCmd_data.mode = 0    # 1 for pos ctrl, 2 for vel ctrl
iuslUAVCtrlCmd_data.x = 0.
iuslUAVCtrlCmd_data.y = 0.
iuslUAVCtrlCmd_data.z = 0.
iuslUAVCtrlCmd_data.yaw = 0.


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
rospy.Subscriber('/iusl_ros/home_rtk', NavSatFix, callback_recive_home_rtk) 
rospy.Subscriber('/dji_osdk_ros/rtk_position', NavSatFix , callback_recive_rtkpos)            # my rtk pos
rospy.Subscriber('dji_osdk_ros/rtk_velocity', Vector3Stamped, callback_recive_rtkvel)         # my rtk vel
rospy.Subscriber('/dji_osdk_ros/rtk_yaw', Int16, callback_recive_rtkYaw) 
rospy.Subscriber('dji_osdk_ros/attitude', QuaternionStamped, callback_UAV_attitude)
rospy.Subscriber('dji_osdk_ros/gimbal_angle', Vector3Stamped, callback_recive_gimbal_angle)
# sub msg for 估计节点和视觉探测节点
rospy.Subscriber('/iusl_ros/DetectionResult', iuslDetectionResult, callback_recive_DetectionResult)
rospy.Subscriber('/iusl_ros/estimate_tar_state', iuslTarState, callback_receive_est_tar)

# pub msg
auto_fire_cmd_publisher = rospy.Publisher('/iusl_ros/auto_fire', Bool, queue_size = 5)
my_UAV_Control_cmd_publisher = rospy.Publisher('/iusl_ros/UAV_control_cmd', iuslUAVCtrlCmd, queue_size=2)

# 获取控制权限的服务
rospy.wait_for_service('obtain_release_control_authority')
Obtain_control_handle = rospy.ServiceProxy('obtain_release_control_authority', ObtainControlAuthority)
#res = Obtain_control_handle(True)

# 开始循环
while True:
  # bag 的开始和结束
  if (not bag_start) and ground_mission_cmd:
    bag_start = True
    bag_my_state = rosbag.Bag('/home/dji/bigDisk/bag/' + time.strftime("%Y-%m-%d--%I-%M-%S") + 'my_state.bag', 'w')
  elif bag_start and (not ground_mission_cmd):
    bag_start = False
    bag_my_state.close()

  # 如果发射了网枪超过5秒钟，则复位网枪
  time_now = rospy.Time.now().to_sec()
  if fire_cmd and (time_now - fire_time > 5):
    fire_cmd = False
    netgun_serial.write(netgun_reset_data)

  # TODO 飞机yaw始终跟踪云台的yaw

  
  
  # 控制自己的飞行
  if home_rtk_OK and ground_mission_cmd and est_tar_OK:
    # 自动判断是否需要发射网枪
    #auto_fire_cmd = auto_fire_decide(bounding_box_center_x, bounding_box_center_y, bounding_box_width, bounding_box_height, 
    #                                 UAV_pitch_now, UAV_roll_now, UAV_yaw_now, 
    #                                 cam_pitch_now, cam_roll_now, cam_yaw_now,
    #                                 est_fuse_dis)

    # 计算控制指令
    vx_cmd, vy_cmd, z_cmd, yaw_cmd = cal_my_cmd(dz, dh, k_h, max_speed,
                                                est_tar_pos_x, est_tar_pos_y, est_tar_pos_z, est_tar_vx, est_tar_vy, 
                                                cam_x_now, cam_y_now, cam_yaw_now,
                                                home_rtk.altitude)

    # 控制无人机飞行
    res = Obtain_control_handle(True)
    iuslUAVCtrlCmd_data.task = 4
    iuslUAVCtrlCmd_data.mode = 2    # 1 for pos ctrl, 2 for vel ctrl
    iuslUAVCtrlCmd_data.x = vx_cmd
    iuslUAVCtrlCmd_data.y = vy_cmd
    iuslUAVCtrlCmd_data.z = z_cmd  
    iuslUAVCtrlCmd_data.yaw = yaw_cmd
    my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)
  elif home_rtk_OK and (not ground_mission_cmd):
    iuslUAVCtrlCmd_data.task = 3
    iuslUAVCtrlCmd_data.mode = 2    # 1 for pos ctrl, 2 for vel ctrl
    iuslUAVCtrlCmd_data.x = 0
    iuslUAVCtrlCmd_data.y = 0
    iuslUAVCtrlCmd_data.z = UAV_alt_now - home_rtk.altitude 
    iuslUAVCtrlCmd_data.yaw = cam_yaw_now
    my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)
    res = Obtain_control_handle(False)
    

  # 广播是否发射网枪的指令
  auto_fire_cmd_publisher.publish(auto_fire_cmd)

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

  






