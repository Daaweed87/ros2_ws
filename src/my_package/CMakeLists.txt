cmake_minimum_required(VERSION 3.8)
project(my_package)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AddTwoInts2.msg"
  "srv/AddTwoInts2.srv"
  DEPENDENCIES example_interfaces
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

