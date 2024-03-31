// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__STRUCT_H_
#define MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AddTwoInts2 in the package my_package.
typedef struct my_package__msg__AddTwoInts2
{
  double a;
  double b;
} my_package__msg__AddTwoInts2;

// Struct for a sequence of my_package__msg__AddTwoInts2.
typedef struct my_package__msg__AddTwoInts2__Sequence
{
  my_package__msg__AddTwoInts2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_package__msg__AddTwoInts2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__STRUCT_H_
