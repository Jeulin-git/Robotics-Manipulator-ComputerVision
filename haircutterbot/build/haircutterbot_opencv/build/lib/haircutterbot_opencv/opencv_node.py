import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge
import numpy as np
from matplotlib import pyplot as plt
import os
from ament_index_python.packages import get_package_share_directory



class CameraSubscriber(Node):

    def __init__(self):
        super().__init__("camera_subscriber")
        self.sub_ = self.create_subscription(Image, "camera/image_raw", self.msgCallback, 10)
        self.pub_ = self.create_publisher(Image, "image_view_node", 10)

        # Définir les coordonnées du rectangle
        self.top_left_corner = (50, 50)
        self.bottom_right_corner = (200, 150)

        # Définir la couleur du rectangle (Bleu, Vert, Rouge)
        # Exemple: Rouge
        self.color = (0, 0, 255)

        # Épaisseur du rectangle
        self.thickness = 3 # Pour un rectangle vide


    def msgCallback(self, msg):
        if msg is None:
            self.get_logger().info("Camera is not streaming")
        else:
           
            bridge = CvBridge()
            cv_image = bridge.imgmsg_to_cv2(msg, desired_encoding='passthrough')
            gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

            try:
                package_share_directory = get_package_share_directory("haicutter_opencv")
                cascade_path = os.path.join(package_share_directory, "haarcascade_frontalface_default.xml")
                self.get_logger().info(f"Attempting to load cascade from: {cascade_path}")
                self.face_detector = cv2.CascadeClassifier(cascade_path)

                if self.face_detector.empty():
                    self.get_logger().error("Failed to load cascade classifier. Check the path and file integrity.")
                    # Optionally, raise an exception or handle the error gracefully
                    # rclpy.shutdown() # This might be too drastic depending on your application
                else:
                    self.get_logger().info("Cascade classifier loaded successfully.")
                    

            except Exception as e:
                self.get_logger().error(f"Error finding package share directory or loading cascade: {e}")
                # Handle this error, perhaps set face_detector to None and skip detection
                self.face_detector = None
            # --- End of the fix ---
            
            face_rects = self.face_detector.detectMultiScale(gray_image, 1.3, 5)
            
            if face_rects is ():
                self.get_logger().info("No face found")

            for rect in face_rects:
                cv2.rectangle(cv_image, rect, (0, 0, 255), 2)

            cv2.imshow("Cam cam deo", cv_image)
            cv2.waitKey(3)
            self.pub_.publish(msg)
                            

def main():
    rclpy.init()

    simple_sub = CameraSubscriber()
    rclpy.spin(simple_sub)
    
    simple_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
