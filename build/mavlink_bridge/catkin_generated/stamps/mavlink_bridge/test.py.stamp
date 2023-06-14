#! /usr/bin/env python
# coding=utf-8

# import pymavlink library

from pymavlink import mavutil

import math
import serial
import time

import rospy
from geometry_msgs.msg import Vector3Stamped
from geometry_msgs.msg import PointStamped
from geometry_msgs.msg import QuaternionStamped
from tf.transformations import *
from sensor_msgs.msg import NavSatFix  
from std_msgs.msg import Float32 
from std_msgs.msg import UInt8
from std_msgs.msg import Int16
from dji_qgc_lib.lib import *
from dji_osdk_ros.msg import iuslTarState

###                    program begins here ######	
ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=0.5, write_timeout=0.05) 
if ser.isOpen():
  print("serial is ready!")
else :
  print("retry to open serial")
  ser.open()
print(ser)
##      using mavutil to connect this serial.       ###################
master = mavutil.mavlink_connection("/dev/ttyUSB0", baud=115200, source_system = 1,source_component = 1)
print("connecting...")
################### global variables ########################
orientation_q = [0, 0, 0, 0]
curLatitude = 0
curLongitude = 0
curAltitude = 0
yaw = 0
dt = 0.03
flightState = 'Unknown'
boot_time = time.time()
custom_mode = 65536
base_mode = MAV_MODE_FLAG_CUSTOM_MODE_ENABLED ## 1
system_status = MAV_STATE_ACTIVE
## mission -> int number.
IUSL_MISSION_START = 2
IUSL_MISSION_STOP = 4
IUSL_MISSION_FIRE = 5
IUSL_MISSION_RTL = 6
IUSL_MISSION_TAKEOFF = 1
IUSL_MISSION_AIM = 3
Experiment = 1    ## if experiment 1, simulation 0
################# callbacks #######################
def myPositionCB(msg):

    global curLatitude
    global curLongitude
    global curAltitude 
    curLatitude = msg.latitude * 1e7
    curLongitude = msg.longitude * 1e7
    
    curAltitude = msg.altitude * 1e3
    
    return 

def myAttitudeCB(msg):
    
    global orientation_q
    orientation_q = [msg.quaternion.x, msg.quaternion.y, msg.quaternion.z, msg.quaternion.w]
    rotation_quaternion = quaternion_from_euler(math.pi ,0 , 0)
    rotation_quaternion = quaternion_from_euler(-math.pi , 0 ,  math.pi/2)
    orientation_q = quaternion_multiply(rotation_quaternion, orientation_q)
    
    return 

def myFlightStateCB(msg):              # update flying flag 1:ground 2:arm 3:air
    global flightState
    if msg.data < 1.5:
      flightState = 'ground'
    elif msg.data > 1.5 and msg.data < 2.5: 
      flightState = 'arm'
    elif msg.data > 2.5:
      flightState = 'air'
    return

def myYawAttitudeCB(msg):
    global yaw
    yaw = (msg.data + 90)
    if yaw > 180:
       yaw = yaw - 360
    yaw = math.radians(yaw)
   

if __name__=='__main__':

    rospy.init_node('test', anonymous=True)
    rate = rospy.Rate(50)
    ## subscribers
    if Experiment == 1:
      rospy.Subscriber('dji_osdk_ros/rtk_position',NavSatFix,myPositionCB)
      rospy.Subscriber('dji_osdk_ros/rtk_yaw',Int16, myYawAttitudeCB)
      rospy.Subscriber('dji_osdk_ros/flight_status', UInt8, myFlightStateCB)
    else:
      rospy.Subscriber('dji_osdk_ros/gps_position',NavSatFix,myPositionCB)
      rospy.Subscriber('dji_osdk_ros/attitude',QuaternionStamped, myAttitudeCB)
      rospy.Subscriber('dji_osdk_ros/flight_status', UInt8, myFlightStateCB)      
    ## load params
    mavlink_params_list = loadParamsForDJI("/home/dji/ningzian_ws/src/mavlink_bridge/scripts/DJIMock.txt")
    ## publishers
    cmd_pub = rospy.Publisher('iusl_ros/ground_mission_cmd',UInt8, queue_size=10)
    ground_tar_state_publisher = rospy.Publisher('/iusl_ros/ground_tar_state', iuslTarState, queue_size=5)
    while not rospy.is_shutdown():
    
      ## sending necessary msgs, including heartbeat, gps, attitude information    
      master.mav.heartbeat_send(mavutil.mavlink.MAV_TYPE_QUADROTOR, mavutil.mavlink.MAV_AUTOPILOT_ARDUPILOTMEGA, base_mode, custom_mode, system_status,2)
      
      time.sleep(dt)
      #master.mav.adsb_vehicle_send(12345, curLatitude,
      #                             curLongitude,1,100000,1000,0,0,'N1234500',7,1,87,0)
      #time.sleep(dt)
      if curLatitude != 0:
          master.mav.gps_raw_int_send( 0, 3, curLatitude, curLongitude, curAltitude, 65535, 8, 0, 0, 0)

      time_boot_ms = (time.time() - boot_time) * 1e3
      if Experiment == 1:
          master.mav.attitude_send(time_boot_ms, 0, 0, yaw, 0, 0, 0)
      else:
          master.mav.attitude_quaternion_send(time_boot_ms, orientation_q[3], orientation_q[0], orientation_q[1],orientation_q[2] , 0, 0, 0, force_mavlink1=False)
      time.sleep(dt)
      if flightState == 'ground' and custom_mode == COPTER_MODE_RTL:
	  custom_mode = 65536 # back to unknown state.
 
      msg = master.recv_match(blocking = False) #
################ interact with msgs coming from QGC #################################
      if msg :
          if msg.get_type() != 'HEARTBEAT':
              print(msg.to_dict())	## print every msgs other than HEARTBEAT
          if msg.get_type() == 'PARAM_REQUEST_LIST':
              try:
                  print(msg.to_dict())
		  print(msg.target_component)
              except:
                  pass	  
	      for param in mavlink_params_list:  ## when QGC requests for params, send every params in list.
                  master.mav.send(param)
	          time.sleep(dt)
          
          if msg.get_type() == 'PARAM_REQUEST_READ': ## respond to QGC requests for specific msg.
              print(msg.to_dict())
              master.mav.send(mavlink_params_list[msg.param_index])
              time.sleep(dt)
          if msg.get_type() == 'MISSION_REQUEST_LIST': ## respond to MISSION_REQUST_LIST msg
	      print(msg.to_dict())
	      mission_request_msg = MAVLink_mission_count_message(255,1,0) # QGC system id = 255
              master.mav.send(mission_request_msg)
              time.sleep(dt)
	  if msg.get_type() == 'COMMAND_LONG':  ## respond when QGC sends COMMAND
	      if msg.command == MAV_CMD_COMPONENT_ARM_DISARM: ## in this case, we send we ack that command no matter what happen.
                  if msg.param1 == 1.0:   ## arm our drone.
              	     # make drone armed e.g. wrapper->motorsArm() cpp file
		     print("arm")
                     time.sleep(dt)
		     master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED) 
                     time.sleep(dt)
                  else:   ## disarm our drone.
		     # make drone disarmed e.g. wrapper->motorsDisArm() cpp file
                     time.sleep(dt)
		     master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)
                     print("disarm")
		     time.sleep(dt)
	      if msg.command == MAV_CMD_NAV_TAKEOFF: ## take off and send MAV_RESULT_ACCEPTED.
	         master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)	 
		 publishMissionCMD(cmd_pub, IUSL_MISSION_TAKEOFF)
                 time.sleep(dt)
	      if msg.command == MAV_CMD_USER_1: ## fire and start mission
                 if msg.param1 == 1.0: ## start mission
		    master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)
		    publishMissionCMD(cmd_pub, IUSL_MISSION_START)
		    time.sleep(dt)
		 elif msg.param1 == 2.0:## start aiming.
		    master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)
		    publishMissionCMD(cmd_pub, IUSL_MISSION_AIM)
		    time.sleep(dt)
		 else:  #fire
		    master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)
		    publishMissionCMD(cmd_pub, IUSL_MISSION_FIRE)
                    time.sleep(dt)
	      if msg.command == MAV_CMD_OVERRIDE_GOTO:
		 x = msg.param5
	         y = msg.param6
                 z = msg.param7
                 ground_tar_state = iuslTarState()
                 ground_tar_state.tar_OK = True
        	 ground_tar_state.tar_x = x
        	 ground_tar_state.tar_y = y
        	 ground_tar_state.tar_z = z
                 master.mav.command_ack_send(msg.command, MAV_RESULT_ACCEPTED)
                 custom_mode = COPTER_MODE_GUIDED
		 publishMissionCMD(ground_tar_state_publisher, ground_tar_state)
                 time.sleep(dt)
	  if msg.get_type() == 'SET_MODE':
	      if msg.custom_mode == COPTER_MODE_GUIDED:                
		  custom_mode = COPTER_MODE_GUIDED
		  master.mav.command_ack_send(MAV_CMD_DO_SET_MODE, MAV_RESULT_ACCEPTED)
                  time.sleep(dt)
      	      if msg.custom_mode == COPTER_MODE_RTL:
		  custom_mode = COPTER_MODE_RTL
		  publishMissionCMD(cmd_pub,IUSL_MISSION_RTL)
		  master.mav.command_ack_send(MAV_CMD_DO_SET_MODE, MAV_RESULT_ACCEPTED)
                  time.sleep(dt)
              if msg.custom_mode == COPTER_MODE_BRAKE:
		  publishMissionCMD(cmd_pub,IUSL_MISSION_STOP)
		  master.mav.command_ack_send(MAV_CMD_DO_SET_MODE, MAV_RESULT_ACCEPTED)
                  time.sleep(dt)
      rate.sleep()     
      


      '''
      master.mav.vfr_hud_send(0,0,0,0,0,0)
      time.sleep(dt)
      '''




      '''    
      master.mav.adsb_vehicle_send(12345, curLatitude,
                                   curLongitude,1,100000,1000,0,0,'N1234500',7,1,87,0)

    #master.mav.param_set_send(
                               #255,1,
                                   #'SURFACE_DEPTH',
                                    #-12,
                               #mavutil.mavlink.MAV_PARAM_TYPE_REAL32
                            #)
    #master.mav.system_time_send( time.time()*1e6,(time.time() - boot_time)*1e3)
      time.sleep(dt)
      
      master.mav.battery_status_send(2,1,1,32767,[65535,65535,65535,65535,65535,65535,65535,65535,65535,65535],-1,-1,-1,-1,9,4,[0,0,0,0],0,0)

    #print("sending heartbeat")

      time.sleep(dt)

    #master.mav.
      '''
      '''
      master.mav.rc_channels_send(
           0,
           0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
            )
    
      time.sleep(dt)
      master.mav.sys_status_send(
            0,
            0,
            0,
            250,
            16800,
            8000,
            1,
            0,
            0,
            0,
            0,
            0,
            0
            
            )
      time.sleep(dt)
      master.mav.vibration_send(0,
            50.5,
            10.5,
            60,
            1,
            2,
            3)
      time.sleep(dt)


      
      time.sleep(dt)
      master.mav.raw_imu_send(0,0,0,0,0,0,0,0,0,0,0,0)
      time.sleep(dt)
      master.mav.scaled_pressure_send(0,0,0,0,0)
      time.sleep(dt)
      master.mav.sensor_offsets_send(0,0,0,0,0,0,0,0,0,0,0,0)
      time.sleep(dt)
      '''
      '''
      master.mav.home_position_send(
           301271400,
           1200823059,88056,
           0,
           0,
           0,
           [0,0,0,0],
           0,
           0,
           0,
           0
            )
      time.sleep(dt)
      '''
      '''
      ## load Ardu Params for DJI 	 
param_file = open("/home/dji/ning_ws/src/mavlink_bridge/scripts/DJIMock.txt")

params_list = []


for line in param_file.readlines():
	if line.startswith('#'):
		continue
    	#value_list = []
	value_list = line.split('\t');
	paramName = value_list[2]
	paramValue = value_list[3]
		
	paramType = value_list[4]
	
	mavlink_param_msg_pre = MAVParam(paramName, paramValue, paramType)
	params_list.append(mavlink_param_msg_pre)

param_file.close()
mavlink_params_list = []
i = 0


for param in params_list:
	param_id = param.getParamName
	param_value = param.param_value
	#print(param_value)
	param_type = param.getParamType

	mavlink_param_msg_post = MAVLink_param_value_message(param.param_name, float(param.param_value), float(param.param_type), len(params_list), i)
	i = i + 1
	mavlink_params_list.append(mavlink_param_msg_post)

      '''
 
