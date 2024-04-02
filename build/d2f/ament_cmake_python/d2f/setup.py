from setuptools import find_packages
from setuptools import setup

setup(
    name='d2f',
    version='0.0.0',
    packages=find_packages(
        include=('d2f', 'd2f.*')),
)
