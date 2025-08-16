from setuptools import find_packages
from setuptools import setup

setup(
    name='haircutterbot_controller',
    version='0.0.0',
    packages=find_packages(
        include=('haircutterbot_controller', 'haircutterbot_controller.*')),
)
