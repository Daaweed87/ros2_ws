// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__MSG__DETAIL__DIV_TWO_FLOATS__FUNCTIONS_H_
#define D2F__MSG__DETAIL__DIV_TWO_FLOATS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "d2f/msg/rosidl_generator_c__visibility_control.h"

#include "d2f/msg/detail/div_two_floats__struct.h"

/// Initialize msg/DivTwoFloats message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * d2f__msg__DivTwoFloats
 * )) before or use
 * d2f__msg__DivTwoFloats__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__init(d2f__msg__DivTwoFloats * msg);

/// Finalize msg/DivTwoFloats message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
void
d2f__msg__DivTwoFloats__fini(d2f__msg__DivTwoFloats * msg);

/// Create msg/DivTwoFloats message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * d2f__msg__DivTwoFloats__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
d2f__msg__DivTwoFloats *
d2f__msg__DivTwoFloats__create();

/// Destroy msg/DivTwoFloats message.
/**
 * It calls
 * d2f__msg__DivTwoFloats__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
void
d2f__msg__DivTwoFloats__destroy(d2f__msg__DivTwoFloats * msg);

/// Check for msg/DivTwoFloats message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__are_equal(const d2f__msg__DivTwoFloats * lhs, const d2f__msg__DivTwoFloats * rhs);

/// Copy a msg/DivTwoFloats message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__copy(
  const d2f__msg__DivTwoFloats * input,
  d2f__msg__DivTwoFloats * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_d2f
const rosidl_type_hash_t *
d2f__msg__DivTwoFloats__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_d2f
const rosidl_runtime_c__type_description__TypeDescription *
d2f__msg__DivTwoFloats__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_d2f
const rosidl_runtime_c__type_description__TypeSource *
d2f__msg__DivTwoFloats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_d2f
const rosidl_runtime_c__type_description__TypeSource__Sequence *
d2f__msg__DivTwoFloats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DivTwoFloats messages.
/**
 * It allocates the memory for the number of elements and calls
 * d2f__msg__DivTwoFloats__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__Sequence__init(d2f__msg__DivTwoFloats__Sequence * array, size_t size);

/// Finalize array of msg/DivTwoFloats messages.
/**
 * It calls
 * d2f__msg__DivTwoFloats__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
void
d2f__msg__DivTwoFloats__Sequence__fini(d2f__msg__DivTwoFloats__Sequence * array);

/// Create array of msg/DivTwoFloats messages.
/**
 * It allocates the memory for the array and calls
 * d2f__msg__DivTwoFloats__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
d2f__msg__DivTwoFloats__Sequence *
d2f__msg__DivTwoFloats__Sequence__create(size_t size);

/// Destroy array of msg/DivTwoFloats messages.
/**
 * It calls
 * d2f__msg__DivTwoFloats__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
void
d2f__msg__DivTwoFloats__Sequence__destroy(d2f__msg__DivTwoFloats__Sequence * array);

/// Check for msg/DivTwoFloats message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__Sequence__are_equal(const d2f__msg__DivTwoFloats__Sequence * lhs, const d2f__msg__DivTwoFloats__Sequence * rhs);

/// Copy an array of msg/DivTwoFloats messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_d2f
bool
d2f__msg__DivTwoFloats__Sequence__copy(
  const d2f__msg__DivTwoFloats__Sequence * input,
  d2f__msg__DivTwoFloats__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // D2F__MSG__DETAIL__DIV_TWO_FLOATS__FUNCTIONS_H_
