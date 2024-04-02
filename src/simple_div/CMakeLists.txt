cmake_minimum_required(VERSION 3.5)
project(simple_div)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(my_package REQUIRED)

# Add the executable
add_executable(server src/simple_div.cpp)
ament_target_dependencies(server rclcpp my_package std_msgs)

# Install the executable
install(TARGETS
  server
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

