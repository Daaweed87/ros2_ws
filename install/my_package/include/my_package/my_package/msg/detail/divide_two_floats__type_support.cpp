// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_package:msg/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_package/msg/detail/divide_two_floats__functions.h"
#include "my_package/msg/detail/divide_two_floats__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DivideTwoFloats_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_package::msg::DivideTwoFloats(_init);
}

void DivideTwoFloats_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_package::msg::DivideTwoFloats *>(message_memory);
  typed_message->~DivideTwoFloats();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DivideTwoFloats_message_member_array[2] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_package::msg::DivideTwoFloats, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_package::msg::DivideTwoFloats, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DivideTwoFloats_message_members = {
  "my_package::msg",  // message namespace
  "DivideTwoFloats",  // message name
  2,  // number of fields
  sizeof(my_package::msg::DivideTwoFloats),
  DivideTwoFloats_message_member_array,  // message members
  DivideTwoFloats_init_function,  // function to initialize message memory (memory has to be allocated)
  DivideTwoFloats_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DivideTwoFloats_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DivideTwoFloats_message_members,
  get_message_typesupport_handle_function,
  &my_package__msg__DivideTwoFloats__get_type_hash,
  &my_package__msg__DivideTwoFloats__get_type_description,
  &my_package__msg__DivideTwoFloats__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_package::msg::DivideTwoFloats>()
{
  return &::my_package::msg::rosidl_typesupport_introspection_cpp::DivideTwoFloats_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_package, msg, DivideTwoFloats)() {
  return &::my_package::msg::rosidl_typesupport_introspection_cpp::DivideTwoFloats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
