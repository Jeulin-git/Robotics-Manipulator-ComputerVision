import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jeulin/Robotics-and-ROS-2-Learn-by-Doing-Manipulators/Section9_Build/arduinobot_ws/install/arduinobot_py_examples'
