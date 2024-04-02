// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "d2f/srv/detail/div_two_floats__struct.h"
#include "d2f/srv/detail/div_two_floats__type_support.h"
#include "d2f/srv/detail/div_two_floats__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace d2f
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DivTwoFloats_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DivTwoFloats_Request_type_support_ids_t;

static const _DivTwoFloats_Request_type_support_ids_t _DivTwoFloats_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DivTwoFloats_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DivTwoFloats_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DivTwoFloats_Request_type_support_symbol_names_t _DivTwoFloats_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, d2f, srv, DivTwoFloats_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Request)),
  }
};

typedef struct _DivTwoFloats_Request_type_support_data_t
{
  void * data[2];
} _DivTwoFloats_Request_type_support_data_t;

static _DivTwoFloats_Request_type_support_data_t _DivTwoFloats_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DivTwoFloats_Request_message_typesupport_map = {
  2,
  "d2f",
  &_DivTwoFloats_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DivTwoFloats_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DivTwoFloats_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DivTwoFloats_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DivTwoFloats_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Request__get_type_hash,
  &d2f__srv__DivTwoFloats_Request__get_type_description,
  &d2f__srv__DivTwoFloats_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace d2f

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, d2f, srv, DivTwoFloats_Request)() {
  return &::d2f::srv::rosidl_typesupport_c::DivTwoFloats_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__struct.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__type_support.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace d2f
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DivTwoFloats_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DivTwoFloats_Response_type_support_ids_t;

static const _DivTwoFloats_Response_type_support_ids_t _DivTwoFloats_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DivTwoFloats_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DivTwoFloats_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DivTwoFloats_Response_type_support_symbol_names_t _DivTwoFloats_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, d2f, srv, DivTwoFloats_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Response)),
  }
};

typedef struct _DivTwoFloats_Response_type_support_data_t
{
  void * data[2];
} _DivTwoFloats_Response_type_support_data_t;

static _DivTwoFloats_Response_type_support_data_t _DivTwoFloats_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DivTwoFloats_Response_message_typesupport_map = {
  2,
  "d2f",
  &_DivTwoFloats_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DivTwoFloats_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DivTwoFloats_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DivTwoFloats_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DivTwoFloats_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Response__get_type_hash,
  &d2f__srv__DivTwoFloats_Response__get_type_description,
  &d2f__srv__DivTwoFloats_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace d2f

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, d2f, srv, DivTwoFloats_Response)() {
  return &::d2f::srv::rosidl_typesupport_c::DivTwoFloats_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__struct.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__type_support.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace d2f
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DivTwoFloats_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DivTwoFloats_Event_type_support_ids_t;

static const _DivTwoFloats_Event_type_support_ids_t _DivTwoFloats_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DivTwoFloats_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DivTwoFloats_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DivTwoFloats_Event_type_support_symbol_names_t _DivTwoFloats_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, d2f, srv, DivTwoFloats_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats_Event)),
  }
};

typedef struct _DivTwoFloats_Event_type_support_data_t
{
  void * data[2];
} _DivTwoFloats_Event_type_support_data_t;

static _DivTwoFloats_Event_type_support_data_t _DivTwoFloats_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DivTwoFloats_Event_message_typesupport_map = {
  2,
  "d2f",
  &_DivTwoFloats_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DivTwoFloats_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DivTwoFloats_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DivTwoFloats_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DivTwoFloats_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &d2f__srv__DivTwoFloats_Event__get_type_hash,
  &d2f__srv__DivTwoFloats_Event__get_type_description,
  &d2f__srv__DivTwoFloats_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace d2f

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, d2f, srv, DivTwoFloats_Event)() {
  return &::d2f::srv::rosidl_typesupport_c::DivTwoFloats_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "d2f/srv/detail/div_two_floats__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace d2f
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _DivTwoFloats_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DivTwoFloats_type_support_ids_t;

static const _DivTwoFloats_type_support_ids_t _DivTwoFloats_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DivTwoFloats_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DivTwoFloats_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DivTwoFloats_type_support_symbol_names_t _DivTwoFloats_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, d2f, srv, DivTwoFloats)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, d2f, srv, DivTwoFloats)),
  }
};

typedef struct _DivTwoFloats_type_support_data_t
{
  void * data[2];
} _DivTwoFloats_type_support_data_t;

static _DivTwoFloats_type_support_data_t _DivTwoFloats_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DivTwoFloats_service_typesupport_map = {
  2,
  "d2f",
  &_DivTwoFloats_service_typesupport_ids.typesupport_identifier[0],
  &_DivTwoFloats_service_typesupport_symbol_names.symbol_name[0],
  &_DivTwoFloats_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DivTwoFloats_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DivTwoFloats_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DivTwoFloats_Request_message_type_support_handle,
  &DivTwoFloats_Response_message_type_support_handle,
  &DivTwoFloats_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace d2f

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, d2f, srv, DivTwoFloats)() {
  return &::d2f::srv::rosidl_typesupport_c::DivTwoFloats_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
