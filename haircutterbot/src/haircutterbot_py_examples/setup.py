import os
from glob import glob
from setuptools import setup

package_name = 'haircutterbot_py_examples'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='julien.royeryk@outlook.fr',
    description='ROS 2 Code Examples',
    license='Apache 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher = haircutterbot_py_examples.simple_publisher:main',
            'simple_subscriber = haircutterbot_py_examples.simple_subscriber:main',
            'simple_parameter = haircutterbot_py_examples.simple_parameter:main',
            'simple_service_server = haircutterbot_py_examples.simple_service_server:main',
            'simple_service_client = haircutterbot_py_examples.simple_service_client:main',
            'simple_action_server = haircutterbot_py_examples.simple_action_server:main',
            'simple_action_client = haircutterbot_py_examples.simple_action_client:main',
            'simple_moveit_interface = haircutterbot_py_examples.simple_moveit_interface:main',
        ],
    },
)
