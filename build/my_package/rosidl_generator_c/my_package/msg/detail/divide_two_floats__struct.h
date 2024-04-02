// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:msg/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_
#define MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DivideTwoFloats in the package my_package.
typedef struct my_package__msg__DivideTwoFloats
{
  double a;
  double b;
} my_package__msg__DivideTwoFloats;

// Struct for a sequence of my_package__msg__DivideTwoFloats.
typedef struct my_package__msg__DivideTwoFloats__Sequence
{
  my_package__msg__DivideTwoFloats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__msg__DivideTwoFloats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_H_
