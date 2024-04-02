// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_H_
#define D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DivTwoFloats in the package d2f.
typedef struct d2f__srv__DivTwoFloats_Request
{
  double a;
  double b;
} d2f__srv__DivTwoFloats_Request;

// Struct for a sequence of d2f__srv__DivTwoFloats_Request.
typedef struct d2f__srv__DivTwoFloats_Request__Sequence
{
  d2f__srv__DivTwoFloats_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} d2f__srv__DivTwoFloats_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/DivTwoFloats in the package d2f.
typedef struct d2f__srv__DivTwoFloats_Response
{
  double sum;
} d2f__srv__DivTwoFloats_Response;

// Struct for a sequence of d2f__srv__DivTwoFloats_Response.
typedef struct d2f__srv__DivTwoFloats_Response__Sequence
{
  d2f__srv__DivTwoFloats_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} d2f__srv__DivTwoFloats_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  d2f__srv__DivTwoFloats_Event__request__MAX_SIZE = 1
};
// response
enum
{
  d2f__srv__DivTwoFloats_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DivTwoFloats in the package d2f.
typedef struct d2f__srv__DivTwoFloats_Event
{
  service_msgs__msg__ServiceEventInfo info;
  d2f__srv__DivTwoFloats_Request__Sequence request;
  d2f__srv__DivTwoFloats_Response__Sequence response;
} d2f__srv__DivTwoFloats_Event;

// Struct for a sequence of d2f__srv__DivTwoFloats_Event.
typedef struct d2f__srv__DivTwoFloats_Event__Sequence
{
  d2f__srv__DivTwoFloats_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} d2f__srv__DivTwoFloats_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_H_
