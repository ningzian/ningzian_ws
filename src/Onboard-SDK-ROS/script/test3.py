import math
from decimal import Decimal
import serial
import struct


A_lat = math.radians(30.137218588)
A_lon = math.radians(120.07494797)
A_alt = 16.09

B_lat = math.radians(30.136830541)
B_lon = math.radians(120.074877022)
B_alt = 16.157

zigbee_serial = serial.Serial('/dev/ttyUSB1', 115200, timeout=0.5)

def encode(data):
    data1 = Decimal(int(data)) % Decimal(1000000) + Decimal(1000000)
    data2 = Decimal(int(abs((Decimal(str(data)) - Decimal(int(data))) * Decimal(100) )))
    data11 = int(data1/Decimal(256)/Decimal(256))
    data12 = int(data1/Decimal(256)%Decimal(256))
    data13 = int(data1%Decimal(256))
    data22 = int(data2%Decimal(256))
    en_data = [data11, data12, data13, data22]
    return en_data

def decode(data):
    de_data1 = Decimal(str(data[0])) * Decimal(256) * Decimal(256) + Decimal(str(data[1])) * Decimal(256) + Decimal(str(data[2])) - Decimal(1000000)
    de_data2 = Decimal(str(data[3]))/Decimal(100)
    de_data = float(str(de_data1) + str(de_data2)[1:])
    return float(de_data)

while True:
  data_tem = zigbee_serial.read(1)
  
  #data_tem = struct.unpack('B', data_tem)[0]
  print(len(data_tem))
  if data_tem == '\xed':
    print("OK")
    num = zigbee_serial.read(1)
    num = struct.unpack('B', num)[0]
    data = zigbee_serial.read(2)
    data = zigbee_serial.read(num+2)
    data = struct.unpack(str(num+2)+'B', data)
    print(data)
    sourceID = data[num] * 256 + data[num+1]
    zigbee_serial.reset_input_buffer()
    if sourceID == 1:    # from ground station
      if num == 1:
        mission_cmd = data[2]
        ground_mission_cmd_publisher.pub(mission_cmd)   # pub cmd
        print(1)
      if num == 12:
        ground_tar_stamp = rospy.Time.now()
        ground_tar_state.tar_OK = True
        ground_tar_state.ground_tar_x = decode(data[2:6])
        ground_tar_state.ground_tar_y = decode(data[6:10])
        ground_tar_state.ground_tar_z = decode(data[10:14])
        print(2)





