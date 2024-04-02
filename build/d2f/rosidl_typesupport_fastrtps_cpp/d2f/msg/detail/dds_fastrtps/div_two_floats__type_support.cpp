// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice
#include "d2f/msg/detail/div_two_floats__rosidl_typesupport_fastrtps_cpp.hpp"
#include "d2f/msg/detail/div_two_floats__functions.h"
#include "d2f/msg/detail/div_two_floats__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;
  // Member: b
  cdr << ros_message.b;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  d2f::msg::DivTwoFloats & ros_message)
{
  // Member: a
  cdr >> ros_message.a;

  // Member: b
  cdr >> ros_message.b;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
get_serialized_size(
  const d2f::msg::DivTwoFloats & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_d2f
max_serialized_size_DivTwoFloats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = d2f::msg::DivTwoFloats;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DivTwoFloats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const d2f::msg::DivTwoFloats *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DivTwoFloats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<d2f::msg::DivTwoFloats *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DivTwoFloats__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const d2f::msg::DivTwoFloats *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DivTwoFloats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DivTwoFloats(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DivTwoFloats__callbacks = {
  "d2f::msg",
  "DivTwoFloats",
  _DivTwoFloats__cdr_serialize,
  _DivTwoFloats__cdr_deserialize,
  _DivTwoFloats__get_serialized_size,
  _DivTwoFloats__max_serialized_size
};

static rosidl_message_type_support_t _DivTwoFloats__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DivTwoFloats__callbacks,
  get_message_typesupport_handle_function,
  &d2f__msg__DivTwoFloats__get_type_hash,
  &d2f__msg__DivTwoFloats__get_type_description,
  &d2f__msg__DivTwoFloats__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace d2f

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_d2f
const rosidl_message_type_support_t *
get_message_type_support_handle<d2f::msg::DivTwoFloats>()
{
  return &d2f::msg::typesupport_fastrtps_cpp::_DivTwoFloats__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, d2f, msg, DivTwoFloats)() {
  return &d2f::msg::typesupport_fastrtps_cpp::_DivTwoFloats__handle;
}

#ifdef __cplusplus
}
#endif
