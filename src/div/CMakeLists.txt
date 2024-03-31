cmake_minimum_required(VERSION 3.5)
project(div)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_package REQUIRED)

add_executable(server src/div_server.cpp)
ament_target_dependencies(server rclcpp my_package)

add_executable(client src/div_client.cpp)
ament_target_dependencies(client rclcpp my_package)

install(TARGETS
  server
  client
  DESTINATION lib/${PROJECT_NAME})

ament_package()
