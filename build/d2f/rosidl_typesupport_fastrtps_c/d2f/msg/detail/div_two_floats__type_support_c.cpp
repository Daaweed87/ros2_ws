// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice
#include "d2f/msg/detail/div_two_floats__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "d2f/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "d2f/msg/detail/div_two_floats__struct.h"
#include "d2f/msg/detail/div_two_floats__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DivTwoFloats__ros_msg_type = d2f__msg__DivTwoFloats;

static bool _DivTwoFloats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DivTwoFloats__ros_msg_type * ros_message = static_cast<const _DivTwoFloats__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

static bool _DivTwoFloats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DivTwoFloats__ros_msg_type * ros_message = static_cast<_DivTwoFloats__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_d2f
size_t get_serialized_size_d2f__msg__DivTwoFloats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DivTwoFloats__ros_msg_type * ros_message = static_cast<const _DivTwoFloats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DivTwoFloats__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_d2f__msg__DivTwoFloats(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_d2f
size_t max_serialized_size_d2f__msg__DivTwoFloats(
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

  // member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
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
    using DataType = d2f__msg__DivTwoFloats;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DivTwoFloats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_d2f__msg__DivTwoFloats(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DivTwoFloats = {
  "d2f::msg",
  "DivTwoFloats",
  _DivTwoFloats__cdr_serialize,
  _DivTwoFloats__cdr_deserialize,
  _DivTwoFloats__get_serialized_size,
  _DivTwoFloats__max_serialized_size
};

static rosidl_message_type_support_t _DivTwoFloats__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DivTwoFloats,
  get_message_typesupport_handle_function,
  &d2f__msg__DivTwoFloats__get_type_hash,
  &d2f__msg__DivTwoFloats__get_type_description,
  &d2f__msg__DivTwoFloats__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, d2f, msg, DivTwoFloats)() {
  return &_DivTwoFloats__type_support;
}

#if defined(__cplusplus)
}
#endif
