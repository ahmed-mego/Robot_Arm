import rclpy
from rclpy.node import Node
from robot_interfaces.msg import MotorStatus, Motors

class ControlNode(Node):
    def __init__(self):
        super().__init__('control_node')

        self.publisher_ = self.create_publisher(Motors, "joint_steps", 10)
        self.subscribers = []
        self.motor_positions = [0.0] * 4

        for i in range(4):
            topic = f"motor_{i + 1}_position"
            callback = self.create_callback(i)
            self.subscribers.append(
                self.create_subscription(MotorStatus, topic, callback, 10)
            )

        self.timer = self.create_timer(1.0, self.get_input_and_publish)
        self.ratio = 1.0

    def create_callback(self, index):
        def callback(msg):
            self.motor_positions[index] = msg.my_location
        return callback

    def get_input_and_publish(self):
        try:
            x, y, z = map(float, input("Enter x, y, z coordinates separated by spaces: ").split())

            msg = Motors()
            steps, dirs = self.calculate_inverse_kinematics(x, y, z)
            msg.steps = steps
            msg.dir = dirs

            self.publisher_.publish(msg)
        except ValueError:
            self.get_logger().error("Invalid input. Please enter three numbers separated by spaces.")

    def calculate_inverse_kinematics(self, x, y, z):
        # Placeholder for actual inverse kinematics calculation
        theta1, theta2, theta3, theta4 = x, y, z, 0.0

        self.get_logger().info(f"Calculated joint angles: {theta1}, {theta2}, {theta3}, {theta4}")

        step1 = int(theta1 * self.ratio / 1.8)
        step2 = int(theta2 * self.ratio / 1.8)
        step3 = int(theta3 * self.ratio / 1.8)
        step4 = int(theta4 * self.ratio / 1.8)

        steps = [step1, step2, step3, step4]
        dirs = [step >= 0 for step in steps]  # True for positive, False for negative

        # Convert all steps to positive values
        steps = [abs(step) for step in steps]

        return steps, dirs

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
