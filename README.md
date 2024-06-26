# Comments about the homework
For the input I made a unique input message called "TwoFloats" which needs float64 input twice, thus the only error it needs to handle is only the zero division because wrong data can't get to the node.

	float64 first_number
	float64 second_number
	
Previously when I started learning about ROS2 I made a simple server-client node connection (fl_div) to provide a simple division solution. The reason why I also comitted that to my repository is, in that you can see how I would deal with errors in case a user could write any type of input.
If I didn't have two float64 type inputs to my message I would convert it from std_msgs/string type, split it and then use the error handling conditions I used earlier in the other package.
To test my earlier solution use the following commands:
1. First terminal:
 
		cd ros2_ws
		source install/setup.bash
		ros2 run fl_div server
		
2. Second terminal (change argv1 and argv2 as needed)
 
		cd ros2_ws
		source install/setup.bash
		ros2 run fl_div client argv1 argv2

# SimpleDiv

## Overview
SimpleDiv is a ROS 2 package that provides a simple node for dividing two float numbers received as messages and publishing the result on a ROS topic.

This package can be useful for basic division operations in ROS 2 environments.

You can see pictures from the succesful runs and connection graph in RQt in the pictures folder.

## Requirements

ROS 2 Iron Irwini (you can find the installation tutorial here: https://docs.ros.org/en/iron/Installation/Ubuntu-Install-Debians.html)

C++11 compatible compiler

Git (necessary only if you instend to use the further step os this tutorial)
## Features
- Subscribes to the `/input_numbers` topic to receive two float numbers.
- Performs division operation on the received numbers.
- Publishes the result on the `/division_result` topic.
- Handles division by zero scenario gracefully.

## Installation
1. Clone the repository.

	   git clone https://github.com/davidszur/ros2_ws

2. Navigate to your ROS 2 workspace directory:
   
	   cd ros2_ws

3. Initialize ROS2.

		source  /opt/ros/iron/setup.bash

## Usage

1. Open a new terminal window.

		cd ros2_ws
		source install/setup.bash
		ros2 run simple_div server

	This will start the SimpleDiv node, which subscribes to the input_numbers topic, divides the received numbers, and publishes the result on the division_result topic.

2. Open another terminal window.

	Change the value of the first_number or second_number arguments, e.g. if you want to divide 10 by 5 your command should look like this:
	
		cd ros2_ws
		source install/setup.bash
		ros2 topic pub /input_numbers my_package/TwoFloats "{first_number: 10.0, second_number: 5.0}"

3. Open another terminal window.
		
		cd ros2_ws
		source install/setup.bash
		ros2 topic echo /division_result

	Now you are able to see the published results.
4. To kill the processes press Ctrl + C.
