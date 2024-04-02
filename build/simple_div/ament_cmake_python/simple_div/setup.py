from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_div',
    version='0.0.0',
    packages=find_packages(
        include=('simple_div', 'simple_div.*')),
)
