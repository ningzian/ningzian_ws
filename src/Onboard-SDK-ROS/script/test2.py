import math
from decimal import Decimal





Orig_lat = math.radians(30.129161866939494) # math.radians(30.12974118425157)   # aliyun gross
Orig_lon = math.radians(120.07418009681075) # math.radians(120.07765047891777)
Orig_alt = 0.             # 16.5

T_lat = math.radians(30.130045157) # math.radians(30.12974118425157)   # aliyun gross
T_lon = math.radians(120.074935341) # math.radians(120.07765047891777)
T_alt = 26.           # 16.5

def decode(data):
    de_data1 = Decimal(str(data[0])) * Decimal(256) * Decimal(256) + Decimal(str(data[1])) * Decimal(256) + Decimal(str(data[2])) - Decimal(1000000)
    de_data2 = Decimal(str(data[3]))/Decimal(100)
    de_data = float(str(de_data1) + str(de_data2)[1:])
    return float(de_data)

def encode(data):
    data1 = Decimal(int(data)) % Decimal(1000000) + Decimal(1000000)
    data2 = Decimal(int(abs((Decimal(str(data)) - Decimal(int(data))) * Decimal(100) )))
    data11 = int(data1/Decimal(256)/Decimal(256))
    data12 = int(data1/Decimal(256)%Decimal(256))
    data13 = int(data1%Decimal(256))
    data22 = int(data2%Decimal(256))
    en_data = [data11, data12, data13, data22]
    return en_data

UAV_lat = T_lat
UAV_lon = T_lon
UAV_alt = T_alt
Ec = 6378137. * (1 - 21412./6356725. * (math.sin(UAV_lat)**2) ) + UAV_alt
Ed = Ec * math.cos(UAV_lat)
d_lat = UAV_lat - Orig_lat
d_lon = UAV_lon - Orig_lon
my_UAV_x = d_lat * Ec
my_UAV_y = d_lon * Ed
my_UAV_z = Orig_alt - UAV_alt

print(my_UAV_x)
print(my_UAV_y)
print(my_UAV_z)

print(encode(my_UAV_x))
print(encode(my_UAV_y))
print(encode(my_UAV_z))

print(decode(encode(my_UAV_x)))
print(decode(encode(my_UAV_y)))
print(decode(encode(my_UAV_z)))

