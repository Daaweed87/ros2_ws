// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "d2f/srv/detail/div_two_floats__rosidl_typesupport_introspection_c.h"
#include "d2f/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "d2f/srv/detail/div_two_floats__functions.h"
#include "d2f/srv/detail/div_two_floats__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  d2f__srv__DivTwoFloats_Request__init(message_memory);
}

void d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_fini_function(void * message_memory)
{
  d2f__srv__DivTwoFloats_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_members = {
  "d2f__srv",  // message namespace
  "DivTwoFloats_Request",  // message name
  2,  // number of fields
  sizeof(d2f__srv__DivTwoFloats_Request),
  d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_member_array,  // message members
  d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle = {
  0,
  &d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_members,
  get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Request__get_type_hash,
  &d2f__srv__DivTwoFloats_Request__get_type_description,
  &d2f__srv__DivTwoFloats_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_d2f
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Request)() {
  if (!d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle.typesupport_identifier) {
    d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "d2f/srv/detail/div_two_floats__rosidl_typesupport_introspection_c.h"
// already included above
// #include "d2f/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__functions.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  d2f__srv__DivTwoFloats_Response__init(message_memory);
}

void d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_fini_function(void * message_memory)
{
  d2f__srv__DivTwoFloats_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_members = {
  "d2f__srv",  // message namespace
  "DivTwoFloats_Response",  // message name
  1,  // number of fields
  sizeof(d2f__srv__DivTwoFloats_Response),
  d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_member_array,  // message members
  d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle = {
  0,
  &d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_members,
  get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Response__get_type_hash,
  &d2f__srv__DivTwoFloats_Response__get_type_description,
  &d2f__srv__DivTwoFloats_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_d2f
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Response)() {
  if (!d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle.typesupport_identifier) {
    d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "d2f/srv/detail/div_two_floats__rosidl_typesupport_introspection_c.h"
// already included above
// #include "d2f/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__functions.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "d2f/srv/div_two_floats.h"
// Member `request`
// Member `response`
// already included above
// #include "d2f/srv/detail/div_two_floats__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  d2f__srv__DivTwoFloats_Event__init(message_memory);
}

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_fini_function(void * message_memory)
{
  d2f__srv__DivTwoFloats_Event__fini(message_memory);
}

size_t d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__size_function__DivTwoFloats_Event__request(
  const void * untyped_member)
{
  const d2f__srv__DivTwoFloats_Request__Sequence * member =
    (const d2f__srv__DivTwoFloats_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__request(
  const void * untyped_member, size_t index)
{
  const d2f__srv__DivTwoFloats_Request__Sequence * member =
    (const d2f__srv__DivTwoFloats_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__request(
  void * untyped_member, size_t index)
{
  d2f__srv__DivTwoFloats_Request__Sequence * member =
    (d2f__srv__DivTwoFloats_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__fetch_function__DivTwoFloats_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const d2f__srv__DivTwoFloats_Request * item =
    ((const d2f__srv__DivTwoFloats_Request *)
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__request(untyped_member, index));
  d2f__srv__DivTwoFloats_Request * value =
    (d2f__srv__DivTwoFloats_Request *)(untyped_value);
  *value = *item;
}

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__assign_function__DivTwoFloats_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  d2f__srv__DivTwoFloats_Request * item =
    ((d2f__srv__DivTwoFloats_Request *)
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__request(untyped_member, index));
  const d2f__srv__DivTwoFloats_Request * value =
    (const d2f__srv__DivTwoFloats_Request *)(untyped_value);
  *item = *value;
}

bool d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__resize_function__DivTwoFloats_Event__request(
  void * untyped_member, size_t size)
{
  d2f__srv__DivTwoFloats_Request__Sequence * member =
    (d2f__srv__DivTwoFloats_Request__Sequence *)(untyped_member);
  d2f__srv__DivTwoFloats_Request__Sequence__fini(member);
  return d2f__srv__DivTwoFloats_Request__Sequence__init(member, size);
}

size_t d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__size_function__DivTwoFloats_Event__response(
  const void * untyped_member)
{
  const d2f__srv__DivTwoFloats_Response__Sequence * member =
    (const d2f__srv__DivTwoFloats_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__response(
  const void * untyped_member, size_t index)
{
  const d2f__srv__DivTwoFloats_Response__Sequence * member =
    (const d2f__srv__DivTwoFloats_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__response(
  void * untyped_member, size_t index)
{
  d2f__srv__DivTwoFloats_Response__Sequence * member =
    (d2f__srv__DivTwoFloats_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__fetch_function__DivTwoFloats_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const d2f__srv__DivTwoFloats_Response * item =
    ((const d2f__srv__DivTwoFloats_Response *)
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__response(untyped_member, index));
  d2f__srv__DivTwoFloats_Response * value =
    (d2f__srv__DivTwoFloats_Response *)(untyped_value);
  *value = *item;
}

void d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__assign_function__DivTwoFloats_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  d2f__srv__DivTwoFloats_Response * item =
    ((d2f__srv__DivTwoFloats_Response *)
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__response(untyped_member, index));
  const d2f__srv__DivTwoFloats_Response * value =
    (const d2f__srv__DivTwoFloats_Response *)(untyped_value);
  *item = *value;
}

bool d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__resize_function__DivTwoFloats_Event__response(
  void * untyped_member, size_t size)
{
  d2f__srv__DivTwoFloats_Response__Sequence * member =
    (d2f__srv__DivTwoFloats_Response__Sequence *)(untyped_member);
  d2f__srv__DivTwoFloats_Response__Sequence__fini(member);
  return d2f__srv__DivTwoFloats_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Event, request),  // bytes offset in struct
    NULL,  // default value
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__size_function__DivTwoFloats_Event__request,  // size() function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__request,  // get_const(index) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__request,  // get(index) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__fetch_function__DivTwoFloats_Event__request,  // fetch(index, &value) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__assign_function__DivTwoFloats_Event__request,  // assign(index, value) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__resize_function__DivTwoFloats_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(d2f__srv__DivTwoFloats_Event, response),  // bytes offset in struct
    NULL,  // default value
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__size_function__DivTwoFloats_Event__response,  // size() function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_const_function__DivTwoFloats_Event__response,  // get_const(index) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__get_function__DivTwoFloats_Event__response,  // get(index) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__fetch_function__DivTwoFloats_Event__response,  // fetch(index, &value) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__assign_function__DivTwoFloats_Event__response,  // assign(index, value) function pointer
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__resize_function__DivTwoFloats_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_members = {
  "d2f__srv",  // message namespace
  "DivTwoFloats_Event",  // message name
  3,  // number of fields
  sizeof(d2f__srv__DivTwoFloats_Event),
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_member_array,  // message members
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_type_support_handle = {
  0,
  &d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_members,
  get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Event__get_type_hash,
  &d2f__srv__DivTwoFloats_Event__get_type_description,
  &d2f__srv__DivTwoFloats_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_d2f
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Event)() {
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Request)();
  d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Response)();
  if (!d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_type_support_handle.typesupport_identifier) {
    d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "d2f/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_members = {
  "d2f__srv",  // service namespace
  "DivTwoFloats",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle,
  NULL,  // response message
  // d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle
  NULL  // event_message
  // d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle
};


static rosidl_service_type_support_t d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_type_support_handle = {
  0,
  &d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_members,
  get_service_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Request__rosidl_typesupport_introspection_c__DivTwoFloats_Request_message_type_support_handle,
  &d2f__srv__DivTwoFloats_Response__rosidl_typesupport_introspection_c__DivTwoFloats_Response_message_type_support_handle,
  &d2f__srv__DivTwoFloats_Event__rosidl_typesupport_introspection_c__DivTwoFloats_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    d2f,
    srv,
    DivTwoFloats
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    d2f,
    srv,
    DivTwoFloats
  ),
  &d2f__srv__DivTwoFloats__get_type_hash,
  &d2f__srv__DivTwoFloats__get_type_description,
  &d2f__srv__DivTwoFloats__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_d2f
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats)() {
  if (!d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_type_support_handle.typesupport_identifier) {
    d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Event)()->data;
  }

  return &d2f__srv__detail__div_two_floats__rosidl_typesupport_introspection_c__DivTwoFloats_service_type_support_handle;
}
