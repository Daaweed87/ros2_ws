// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "d2f/msg/detail/div_two_floats__functions.h"
#include "d2f/msg/detail/div_two_floats__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace d2f
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DivTwoFloats_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) d2f::msg::DivTwoFloats(_init);
}

void DivTwoFloats_fini_function(void * message_memory)
{
  auto typed_message = static_cast<d2f::msg::DivTwoFloats *>(message_memory);
  typed_message->~DivTwoFloats();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DivTwoFloats_message_member_array[2] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(d2f::msg::DivTwoFloats, a),  // bytes offset in struct
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
    offsetof(d2f::msg::DivTwoFloats, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DivTwoFloats_message_members = {
  "d2f::msg",  // message namespace
  "DivTwoFloats",  // message name
  2,  // number of fields
  sizeof(d2f::msg::DivTwoFloats),
  DivTwoFloats_message_member_array,  // message members
  DivTwoFloats_init_function,  // function to initialize message memory (memory has to be allocated)
  DivTwoFloats_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DivTwoFloats_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DivTwoFloats_message_members,
  get_message_typesupport_handle_function,
  &d2f__msg__DivTwoFloats__get_type_hash,
  &d2f__msg__DivTwoFloats__get_type_description,
  &d2f__msg__DivTwoFloats__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace d2f


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<d2f::msg::DivTwoFloats>()
{
  return &::d2f::msg::rosidl_typesupport_introspection_cpp::DivTwoFloats_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, d2f, msg, DivTwoFloats)() {
  return &::d2f::msg::rosidl_typesupport_introspection_cpp::DivTwoFloats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
