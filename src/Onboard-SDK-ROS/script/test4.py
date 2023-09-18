import serial

net_serial = serial.Serial('/dev/ttyUSB1', 115200, timeout=0.5)
fire_data = [255, 35, 7, 1, 42, 255, 61]
net_serial.write(fire_data)