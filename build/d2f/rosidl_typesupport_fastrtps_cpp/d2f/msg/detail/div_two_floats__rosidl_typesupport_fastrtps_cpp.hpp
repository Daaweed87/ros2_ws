// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__MSG__DETAIL__DIV_TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define D2F__MSG__DETAIL__DIV_TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "d2f/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "d2f/msg/detail/div_two_floats__struct.hpp"

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

namespace d2f
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
cdr_serialize(
  const d2f::msg::DivTwoFloats & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  d2f::msg::DivTwoFloats & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
get_serialized_size(
  const d2f::msg::DivTwoFloats & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
max_serialized_size_DivTwoFloats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace d2f

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, d2f, msg, DivTwoFloats)();

#ifdef __cplusplus
}
#endif

#endif  // D2F__MSG__DETAIL__DIV_TWO_FLOATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
