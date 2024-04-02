// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__STRUCT_H_
#define SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TwoFloats in the package simple_div.
typedef struct simple_div__msg__TwoFloats
{
  double first_number;
  double second_number;
} simple_div__msg__TwoFloats;

// Struct for a sequence of simple_div__msg__TwoFloats.
typedef struct simple_div__msg__TwoFloats__Sequence
{
  simple_div__msg__TwoFloats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_div__msg__TwoFloats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__STRUCT_H_
