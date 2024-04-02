// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__MSG__DETAIL__DIV_TWO_FLOATS__STRUCT_H_
#define D2F__MSG__DETAIL__DIV_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DivTwoFloats in the package d2f.
typedef struct d2f__msg__DivTwoFloats
{
  double a;
  double b;
} d2f__msg__DivTwoFloats;

// Struct for a sequence of d2f__msg__DivTwoFloats.
typedef struct d2f__msg__DivTwoFloats__Sequence
{
  d2f__msg__DivTwoFloats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} d2f__msg__DivTwoFloats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // D2F__MSG__DETAIL__DIV_TWO_FLOATS__STRUCT_H_
