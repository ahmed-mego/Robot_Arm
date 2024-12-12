#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_interfaces.srv import MoveMotor
from robot_interfaces.msg import MotorStatus


class MotorServerNode(Node):
    def __init__(self):
        super().__init__("motor_srv")
        self.declare_parameter("SrvName","move_motor_1")
        self.declare_parameter("MsgName","motor_1_position")

        self.ServerName = self.get_parameter("SrvName").value
        self.TopicName = self.get_parameter("MsgName").value
        
        self.server_ = self.create_service(MoveMotor, self.ServerName, self.callback_move_motor)
        self.pub = self.create_publisher(MotorStatus, self.TopicName, 10)
        self.time = self.create_timer(0.1,self.timer_callback)
        self.my_location = 0.0
        self.ratio = 1

    def timer_callback(self):
        msg = MotorStatus()
        msg.my_location = self.my_location
        self.pub.publish(msg)

    def callback_move_motor(self, request, response):
        
        steps = request.steps
        dir = request.dir
        

        #place the stepper motor code here





        self.my_location += dir * self.ratio * 1.8 * steps
        response.new_location = self.my_location
        return response


def main(args=None):
    rclpy.init(args=args)
    node = MotorServerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()