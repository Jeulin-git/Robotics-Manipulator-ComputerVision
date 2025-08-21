import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import torch

class ObejctRecognitionNode(Node):

    def __init__(self):

        super().__init__('object_recognition_node')
        self.subscription = self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)
        self.publisher = self.create_publisher(Image, '/camera/recognized_objects', 10)
        self.bridge = CvBridge()
        self.model = torch.hub.load('ultralytics/yolov5', 'yolov5s', pretrained = True)
        
        self.get_logger().info("Object recon initialized")

    def image_callback(self, msg):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        results = self.model(cv_image)

        annoted_image = results.render() #[()]

        recognized_msg = self.bridge.cv2_to_imgmsg(annoted_image, encoding="bgr8")
        self.publisher.publish(recognized_msg)

        self.get_logger().info("Object recon published")

def main():
    rclpy.init()

    simple_sub = ObejctRecognitionNode()
    rclpy.spin(simple_sub)
    
    simple_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()



