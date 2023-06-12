cmake_minimum_required(VERSION 2.8.3)
project(mavlink_bridge)

find_package(catkin REQUIRED roscpp rospy std_msgs dji_osdk_ros geometry_msgs)
catkin_python_setup()
catkin_package()
catkin_install_python(PROGRAMS
	scripts/test.py
	DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
	
)
