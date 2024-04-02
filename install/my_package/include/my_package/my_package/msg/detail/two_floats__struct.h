// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_H_
#define MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TwoFloats in the package my_package.
typedef struct my_package__msg__TwoFloats
{
  double first_number;
  double second_number;
} my_package__msg__TwoFloats;

// Struct for a sequence of my_package__msg__TwoFloats.
typedef struct my_package__msg__TwoFloats__Sequence
{
  my_package__msg__TwoFloats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__msg__TwoFloats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_H_
