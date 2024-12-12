import rclpy
from rclpy.node import Node
from robot_interfaces.msg import MotorStatus
from robot_interfaces.msg import Motors

class ControlNode(Node):
    def __init__(self):
        super().__init__('control_node')

        self.publisher_ = self.create_publisher(Motors, "joint_steps", 10)
        self.sub1 = self.create_subscription(MotorStatus,"motor_1_position",self.sub1_callback,10)
        self.sub2 = self.create_subscription(MotorStatus,"motor_2_position",self.sub2_callback,10)
        self.sub3 = self.create_subscription(MotorStatus,"motor_3_position",self.sub3_callback,10)
        self.sub4 = self.create_subscription(MotorStatus,"motor_4_position",self.sub4_callback,10)

        self.timer = self.create_timer(1.0, self.get_input_and_publish)
        self.pos1 = 0.0
        self.pos2 = 0.0
        self.pos3 = 0.0
        self.pos4 = 0.0
        self.ratio = 1

    def sub1_callback(self,msg):
        self.pos1 = msg.my_location

    def sub2_callback(self,msg):
        self.pos2 = msg.my_location

    def sub3_callback(self,msg):
        self.pos3 = msg.my_location

    def sub4_callback(self,msg):
        self.pos4 = msg.my_location
    
    def get_input_and_publish(self):
        try:
            x, y, z = map(float, input("Enter x, y, z coordinates separated by spaces: ").split())
            
            
            msg = Motors()
            msg.steps = self.calculate_inverse_kinematics(x, y, z)
            msg.dir = [True, True, True, True]

            
            self.publisher_.publish(msg)
            #self.get_logger().info(f"Published joint steps: {joint_steps}")

        except ValueError:
            self.get_logger().error("Invalid input. Please enter three numbers separated by spaces.")



    def calculate_inverse_kinematics(self, x, y, z):
        # Placeholder for actual inverse kinematics calculation
        # Replace this with the specific calculations for your 4-DOF arm

        # Example: return dummy angles for demonstration
        theta1 = x  # Base rotation
        theta2 = y  # Shoulder
        theta3 = z  # Elbow
        theta4 = 0.0  # Wrist

        self.get_logger().info(f"Published joint angels: {theta1}, {theta2}, {theta3}, {theta4}")
        
        step1 = int(theta1 * self.ratio / 1.8)
        step2 = int(theta2 * self.ratio / 1.8)
        step3 = int(theta3 * self.ratio / 1.8)
        step4 = int(theta4 * self.ratio / 1.8)
            
        return [step1, step2, step3, step4]

def main(args=None):
    rclpy.init(args=args)
    node = ControlNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
