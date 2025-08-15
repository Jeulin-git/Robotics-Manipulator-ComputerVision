from setuptools import find_packages
from setuptools import setup

setup(
    name='haircutterbot_utils',
    version='0.0.0',
    packages=find_packages(
        include=('haircutterbot_utils', 'haircutterbot_utils.*')),
)
