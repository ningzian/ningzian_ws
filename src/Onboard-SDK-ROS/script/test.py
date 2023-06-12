#! /usr/bin/env python
# coding=utf-8

import rospy
import rosbag

from dji_osdk_ros.msg import iuslUAVCtrlCmd    # my control cmd
from std_msgs.msg import UInt8            # flight state

from dji_osdk_ros.srv import ObtainControlAuthority


def callback_flight_state(msg):
  global flying
  if msg.data < 1.6:
    flying = False
  elif msg.data > 1.7: 
    flying = True
  return

rospy.init_node('test', anonymous=True)
rate = rospy.Rate(10)
my_UAV_Control_cmd_publisher = rospy.Publisher('/iusl_ros/UAV_control_cmd', iuslUAVCtrlCmd, queue_size=5)

rospy.Subscriber('dji_osdk_ros/flight_status', UInt8, callback_flight_state)

flying = False

rospy.wait_for_service('obtain_release_control_authority')
Obtain_control_handle = rospy.ServiceProxy('obtain_release_control_authority', ObtainControlAuthority)
res = Obtain_control_handle(True)

iuslUAVCtrlCmd_data = iuslUAVCtrlCmd()
iuslUAVCtrlCmd_data.task = 2    # 1 takeoff, 2 gohome
iuslUAVCtrlCmd_data.mode = 2    # 1 for pos ctrl, 2 for vel ctrl
iuslUAVCtrlCmd_data.x = 0.
iuslUAVCtrlCmd_data.y = 0.
iuslUAVCtrlCmd_data.z = 10.
iuslUAVCtrlCmd_data.yaw = 30.

while True:
  print(0)
  if not flying:
    iuslUAVCtrlCmd_data.task = 1
    print(1)
  else:
    iuslUAVCtrlCmd_data.task = 4
    print(2)
  my_UAV_Control_cmd_publisher.publish(iuslUAVCtrlCmd_data)

  rate.sleep()



