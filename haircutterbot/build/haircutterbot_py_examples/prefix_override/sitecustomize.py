import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jeulin/git-repo-projects/Robotics-Manipulator/haircutterbot/install/haircutterbot_py_examples'
