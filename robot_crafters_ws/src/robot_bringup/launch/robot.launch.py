from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    motor_nodes = []

    
    for i in range(1,5):
        motor_nodes.append(Node(
            package="motors",
            executable="motor_srv",
            name="motor_" + str(i),
            parameters=[
                {"SrvName": "move_motor_"+str(i)},
                {"MsgName": "motor_" + str(i) + "_position"}
            ]
        ))

    motor_cli = Node(
        package="motors",
        executable="motor_cli",
        name="motor_client"
    )

    for node in motor_nodes:
        ld.add_action(node)
    ld.add_action(motor_cli)
    return ld