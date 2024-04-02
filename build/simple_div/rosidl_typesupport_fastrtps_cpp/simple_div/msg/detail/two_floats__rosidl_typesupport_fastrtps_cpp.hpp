// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "simple_div/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "simple_div/msg/detail/two_floats__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace simple_div
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_div
cdr_serialize(
  const simple_div::msg::TwoFloats & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_div
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simple_div::msg::TwoFloats & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_div
get_serialized_size(
  const simple_div::msg::TwoFloats & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_div
max_serialized_size_TwoFloats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simple_div

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_div
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simple_div, msg, TwoFloats)();

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
