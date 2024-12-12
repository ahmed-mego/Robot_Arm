#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_interfaces.srv import MoveMotor
from robot_interfaces.msg import Motors


class AddTwoIntsClientNode(Node):
    def __init__(self):
        super().__init__("motor_cli")
        self.declare_parameter("SrvName","move_motor_1")

        self.SrvName = self.get_parameter("SrvName").value

        self.sub = self.create_subscription(Motors,"joint_steps",self.sub_callback,10)


    def sub_callback(self, msg):
        steps = msg.steps
        dir = msg.dir
        for i in range(1,5):
            self.call_Move_motor_server("move_motor_" + str(i), steps[i-1], dir[i-1])

    def call_Move_motor_server(self,name, s, d):
        client = self.create_client(MoveMotor, name)
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server " + name)

        request = MoveMotor.Request()
        request.steps = s
        request.dir = d

        future = client.call_async(request)
        future.add_done_callback(self.callback_call_move_motor)

    def callback_call_move_motor(self, future):
        try:
            response = future.result()
            self.get_logger().info("the new location is ---> " + str(response.new_location))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()