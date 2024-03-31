// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:srv/AddTwoInts2.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__SRV__DETAIL__ADD_TWO_INTS2__STRUCT_H_
#define MY_PACKAGE__SRV__DETAIL__ADD_TWO_INTS2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts2 in the package my_package.
typedef struct my_package__srv__AddTwoInts2_Request
{
  double a;
  double b;
} my_package__srv__AddTwoInts2_Request;

// Struct for a sequence of my_package__srv__AddTwoInts2_Request.
typedef struct my_package__srv__AddTwoInts2_Request__Sequence
{
  my_package__srv__AddTwoInts2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__AddTwoInts2_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoInts2 in the package my_package.
typedef struct my_package__srv__AddTwoInts2_Response
{
  double sum;
} my_package__srv__AddTwoInts2_Response;

// Struct for a sequence of my_package__srv__AddTwoInts2_Response.
typedef struct my_package__srv__AddTwoInts2_Response__Sequence
{
  my_package__srv__AddTwoInts2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__AddTwoInts2_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_package__srv__AddTwoInts2_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_package__srv__AddTwoInts2_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoInts2 in the package my_package.
typedef struct my_package__srv__AddTwoInts2_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_package__srv__AddTwoInts2_Request__Sequence request;
  my_package__srv__AddTwoInts2_Response__Sequence response;
} my_package__srv__AddTwoInts2_Event;

// Struct for a sequence of my_package__srv__AddTwoInts2_Event.
typedef struct my_package__srv__AddTwoInts2_Event__Sequence
{
  my_package__srv__AddTwoInts2_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__srv__AddTwoInts2_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__SRV__DETAIL__ADD_TWO_INTS2__STRUCT_H_
