import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    controller = IncludeLaunchDescription(
            os.path.join(
                get_package_share_directory("arduinobot_controller"),
                "launch",
                "controller.launch.py"
            ),
            launch_arguments={"is_sim": "True"}.items()
        )
    
    teleop= IncludeLaunchDescription(
            os.path.join(
                get_package_share_directory("arduinobot_controller"),
                "launch",
                "joystick_teleop.launch.py"
            ),
            launch_arguments={"is_sim": "True"}.items()
        )

    # joint_state_publisher_gui_node = Node(
    #     package="joint_state_publisher_gui",
    #     executable="joint_state_publisher_gui",
    #     remappings=[
    #         ("/joint_states", "/joint_commands"),
    #     ]
    # )

    # slide_control_node = Node(
    #     package="arduinobot_controller",
    #     executable="slider_control.py"
    # )

    joy_control_node = Node(
        package="arduinobot_controller",
        executable="simple_controller.py"
    )


    return LaunchDescription(
        [
            controller,
            teleop,
            #joint_state_publisher_gui_node,
            #slide_control_node,
            joy_control_node,
 
        ]
    )
