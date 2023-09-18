#! /usr/bin/env python
# coding=utf-8

# import pymavlink library
import math
from pymavlink.dialects.v10.ardupilotmega import *
## class and function definition.
class MAVParam():
	param_name = 0
	param_value = 0
	param_type = 0
	def __init__(self, param_name, param_value, param_type):
		self.param_name = param_name
		self.param_value = param_value
		self.param_type = param_type
	def getParamName(self):
		return self.param_name
	def setParamName(self,paramName):
		self.param_name = paramName
	def getParamValue(self):
		return self.param_value
	def setParamValue(self,paramValue):
		self.param_value = paramValue
	def getParamType(self):
		return self.param_type
	def setParamName(self,paramType):
		self.param_type = paramType

def loadParamsForDJI(file_name):
	param_file = open(file_name)
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

		mavlink_param_msg_post = MAVLink_param_value_message(param.param_name, float	(param.param_value), float(param.param_type), len(params_list), i)
		i = i + 1
		mavlink_params_list.append(mavlink_param_msg_post)
	return mavlink_params_list

def publishMissionCMD(pub, msg):
    	for i in range(5):
		pub.publish(msg)
		time.sleep(0.03)
