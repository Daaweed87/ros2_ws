// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_package/msg/detail/two_floats__rosidl_typesupport_introspection_c.h"
#include "my_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_package/msg/detail/two_floats__functions.h"
#include "my_package/msg/detail/two_floats__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_package__msg__TwoFloats__init(message_memory);
}

void my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_fini_function(void * message_memory)
{
  my_package__msg__TwoFloats__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_member_array[2] = {
  {
    "first_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_package__msg__TwoFloats, first_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_package__msg__TwoFloats, second_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_members = {
  "my_package__msg",  // message namespace
  "TwoFloats",  // message name
  2,  // number of fields
  sizeof(my_package__msg__TwoFloats),
  my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_member_array,  // message members
  my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_init_function,  // function to initialize message memory (memory has to be allocated)
  my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_type_support_handle = {
  0,
  &my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_members,
  get_message_typesupport_handle_function,
  &my_package__msg__TwoFloats__get_type_hash,
  &my_package__msg__TwoFloats__get_type_description,
  &my_package__msg__TwoFloats__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_package, msg, TwoFloats)() {
  if (!my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_type_support_handle.typesupport_identifier) {
    my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_package__msg__TwoFloats__rosidl_typesupport_introspection_c__TwoFloats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
