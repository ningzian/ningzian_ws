execute_process(COMMAND "/home/dji/ningzian_ws/build/mavlink_bridge/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/dji/ningzian_ws/build/mavlink_bridge/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
