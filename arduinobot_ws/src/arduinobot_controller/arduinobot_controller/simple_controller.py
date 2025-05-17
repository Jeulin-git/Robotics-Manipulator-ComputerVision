#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from geometry_msgs.msg import TwistStamped
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from std_msgs.msg import String
from arduinobot_msgs.action import ArduinobotTask
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState
from sensor_msgs.msg import Joy


class SimpleController(Node):

    def __init__(self):
        super().__init__("simple_controller")

        self.cpt = 0 
        self.posA1 = 0
        self.posA3 = 0

        # MoveIt 2 Interface
        #self.arduinobot = MoveItPy(node_name="moveit_py")
        #self.arduinobot_arm = self.arduinobot.get_planning_component("arm")
        #self.arduinobot_gripper = self.arduinobot.get_planning_component("gripper")

        self.get_logger().info("simple_controller started...")
        self.arm_pub_ = self.create_publisher(JointTrajectory, "arm_controller/joint_trajectory", 10)
        self.gripper_pub_ = self.create_publisher(JointTrajectory, "gripper_controller/joint_trajectory", 10)

        self.teleop_sub_ = self.create_subscription(Joy, "/joy", self.joyCallback, 10)

        timer_period = 2  # seconds
        #self.timer = self.create_timer(timer_period, self.timer_callback)
        #self.i = 0

#def timer_callback(self):
   #     msg = String()
    #    msg.data = 'Hello World: %d' % self.i
     #   self.get_logger().info('Publishing: "%s"' % msg.data)
     #   self.i += 1

    def joyCallback(self, msg):

        if msg.buttons[4]>0:
            self.posA1 = 1#msg.buttons[4]*0.01
        elif msg.buttons[5]>0:
            self.posA1 =  -1#msg.buttons[5]*0.01
        elif msg.buttons[0]>0:
            self.posA3 +=  msg.buttons[0]*0.01
            self.get_logger().info('PosA3 asked: "%d"' % self.posA3)
        elif msg.buttons[3]>0:
            self.posA3 -=  msg.buttons[3]*0.01

        
        arm_controller = JointTrajectory()
        gripper_controller = JointTrajectory()
        arm_controller.joint_names = ["joint_1", "joint_2", "joint_3"]
        gripper_controller.joint_names = ["joint_4"]

        arm_goal = JointTrajectoryPoint()
        gripper_goal = JointTrajectoryPoint()
        arm_goal.positions = [self.posA1,0,self.posA3]
        gripper_goal.positions = [0]

        arm_controller.points.append(arm_goal)
        gripper_controller.points.append(gripper_goal)

        self.arm_pub_.publish(arm_controller)
        self.gripper_pub_.publish(gripper_controller)

        # arm_state = RobotState(self.arduinobot.get_robot_model())
        # gripper_state = RobotState(self.arduinobot.get_robot_model())

        # arm_joint_goal = []
        # gripper_joint_goal = []

        # arm_joint_goal = np.array([0.0, 0.0, 0.0])
        # gripper_joint_goal = np.array([-0.7, 0.7])
        

        # arm_state.set_joint_group_positions("arm", arm_joint_goal)
        # gripper_state.set_joint_group_positions("gripper", gripper_joint_goal)

        # self.arduinobot_arm.set_start_state_to_current_state()
        # self.arduinobot_gripper.set_start_state_to_current_state()

        # self.arduinobot_arm.set_goal_state(robot_state=arm_state)
        # self.arduinobot_gripper.set_goal_state(robot_state=gripper_state)

        # arm_plan_result = self.arduinobot_arm.plan()
        # gripper_plan_result = self.arduinobot_gripper.plan()

        # if arm_plan_result and gripper_plan_result:
        #     self.get_logger().info("Planner SUCCEED, moving the arm and the gripper")
        #     self.arduinobot.execute(arm_plan_result.trajectory, controllers=[])
        #     self.arduinobot.execute(gripper_plan_result.trajectory, controllers=[])
        # else:
        #     self.get_logger().info("One or more planners failed!")
        
        # self.get_logger().info("Goal succeeded") 

    

def main():
    rclpy.init()

    simple_controller = SimpleController()
    rclpy.spin(simple_controller)
    
    simple_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()