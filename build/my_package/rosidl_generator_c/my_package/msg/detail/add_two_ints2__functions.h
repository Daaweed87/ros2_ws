// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__FUNCTIONS_H_
#define MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__FUNCTIONS_H_

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
#include "my_package/msg/rosidl_generator_c__visibility_control.h"

#include "my_package/msg/detail/add_two_ints2__struct.h"

/// Initialize msg/AddTwoInts2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_package__msg__AddTwoInts2
 * )) before or use
 * my_package__msg__AddTwoInts2__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__init(my_package__msg__AddTwoInts2 * msg);

/// Finalize msg/AddTwoInts2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
void
my_package__msg__AddTwoInts2__fini(my_package__msg__AddTwoInts2 * msg);

/// Create msg/AddTwoInts2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_package__msg__AddTwoInts2__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
my_package__msg__AddTwoInts2 *
my_package__msg__AddTwoInts2__create();

/// Destroy msg/AddTwoInts2 message.
/**
 * It calls
 * my_package__msg__AddTwoInts2__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
void
my_package__msg__AddTwoInts2__destroy(my_package__msg__AddTwoInts2 * msg);

/// Check for msg/AddTwoInts2 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__are_equal(const my_package__msg__AddTwoInts2 * lhs, const my_package__msg__AddTwoInts2 * rhs);

/// Copy a msg/AddTwoInts2 message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__copy(
  const my_package__msg__AddTwoInts2 * input,
  my_package__msg__AddTwoInts2 * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_type_hash_t *
my_package__msg__AddTwoInts2__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_runtime_c__type_description__TypeDescription *
my_package__msg__AddTwoInts2__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_runtime_c__type_description__TypeSource *
my_package__msg__AddTwoInts2__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_package__msg__AddTwoInts2__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/AddTwoInts2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_package__msg__AddTwoInts2__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__Sequence__init(my_package__msg__AddTwoInts2__Sequence * array, size_t size);

/// Finalize array of msg/AddTwoInts2 messages.
/**
 * It calls
 * my_package__msg__AddTwoInts2__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
void
my_package__msg__AddTwoInts2__Sequence__fini(my_package__msg__AddTwoInts2__Sequence * array);

/// Create array of msg/AddTwoInts2 messages.
/**
 * It allocates the memory for the array and calls
 * my_package__msg__AddTwoInts2__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
my_package__msg__AddTwoInts2__Sequence *
my_package__msg__AddTwoInts2__Sequence__create(size_t size);

/// Destroy array of msg/AddTwoInts2 messages.
/**
 * It calls
 * my_package__msg__AddTwoInts2__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
void
my_package__msg__AddTwoInts2__Sequence__destroy(my_package__msg__AddTwoInts2__Sequence * array);

/// Check for msg/AddTwoInts2 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__Sequence__are_equal(const my_package__msg__AddTwoInts2__Sequence * lhs, const my_package__msg__AddTwoInts2__Sequence * rhs);

/// Copy an array of msg/AddTwoInts2 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_package
bool
my_package__msg__AddTwoInts2__Sequence__copy(
  const my_package__msg__AddTwoInts2__Sequence * input,
  my_package__msg__AddTwoInts2__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__FUNCTIONS_H_
