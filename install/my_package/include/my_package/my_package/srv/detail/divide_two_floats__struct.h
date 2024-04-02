// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:srv/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_
#define MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DivideTwoFloats in the package my_package.
typedef struct my_package__srv__DivideTwoFloats_Request
{
  double a;
  double b;
} my_package__srv__DivideTwoFloats_Request;

// Struct for a sequence of my_package__srv__DivideTwoFloats_Request.
typedef struct my_package__srv__DivideTwoFloats_Request__Sequence
{
  my_package__srv__DivideTwoFloats_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__DivideTwoFloats_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/DivideTwoFloats in the package my_package.
typedef struct my_package__srv__DivideTwoFloats_Response
{
  double res;
} my_package__srv__DivideTwoFloats_Response;

// Struct for a sequence of my_package__srv__DivideTwoFloats_Response.
typedef struct my_package__srv__DivideTwoFloats_Response__Sequence
{
  my_package__srv__DivideTwoFloats_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__DivideTwoFloats_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_package__srv__DivideTwoFloats_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_package__srv__DivideTwoFloats_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DivideTwoFloats in the package my_package.
typedef struct my_package__srv__DivideTwoFloats_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_package__srv__DivideTwoFloats_Request__Sequence request;
  my_package__srv__DivideTwoFloats_Response__Sequence response;
} my_package__srv__DivideTwoFloats_Event;

// Struct for a sequence of my_package__srv__DivideTwoFloats_Event.
typedef struct my_package__srv__DivideTwoFloats_Event__Sequence
{
  my_package__srv__DivideTwoFloats_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__DivideTwoFloats_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_
