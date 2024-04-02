// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice
#include "simple_div/msg/detail/two_floats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
simple_div__msg__TwoFloats__init(simple_div__msg__TwoFloats * msg)
{
  if (!msg) {
    return false;
  }
  // first_number
  // second_number
  return true;
}

void
simple_div__msg__TwoFloats__fini(simple_div__msg__TwoFloats * msg)
{
  if (!msg) {
    return;
  }
  // first_number
  // second_number
}

bool
simple_div__msg__TwoFloats__are_equal(const simple_div__msg__TwoFloats * lhs, const simple_div__msg__TwoFloats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_number
  if (lhs->first_number != rhs->first_number) {
    return false;
  }
  // second_number
  if (lhs->second_number != rhs->second_number) {
    return false;
  }
  return true;
}

bool
simple_div__msg__TwoFloats__copy(
  const simple_div__msg__TwoFloats * input,
  simple_div__msg__TwoFloats * output)
{
  if (!input || !output) {
    return false;
  }
  // first_number
  output->first_number = input->first_number;
  // second_number
  output->second_number = input->second_number;
  return true;
}

simple_div__msg__TwoFloats *
simple_div__msg__TwoFloats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_div__msg__TwoFloats * msg = (simple_div__msg__TwoFloats *)allocator.allocate(sizeof(simple_div__msg__TwoFloats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_div__msg__TwoFloats));
  bool success = simple_div__msg__TwoFloats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_div__msg__TwoFloats__destroy(simple_div__msg__TwoFloats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_div__msg__TwoFloats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_div__msg__TwoFloats__Sequence__init(simple_div__msg__TwoFloats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_div__msg__TwoFloats * data = NULL;

  if (size) {
    data = (simple_div__msg__TwoFloats *)allocator.zero_allocate(size, sizeof(simple_div__msg__TwoFloats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_div__msg__TwoFloats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_div__msg__TwoFloats__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
simple_div__msg__TwoFloats__Sequence__fini(simple_div__msg__TwoFloats__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_div__msg__TwoFloats__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

simple_div__msg__TwoFloats__Sequence *
simple_div__msg__TwoFloats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_div__msg__TwoFloats__Sequence * array = (simple_div__msg__TwoFloats__Sequence *)allocator.allocate(sizeof(simple_div__msg__TwoFloats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_div__msg__TwoFloats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_div__msg__TwoFloats__Sequence__destroy(simple_div__msg__TwoFloats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_div__msg__TwoFloats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_div__msg__TwoFloats__Sequence__are_equal(const simple_div__msg__TwoFloats__Sequence * lhs, const simple_div__msg__TwoFloats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_div__msg__TwoFloats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_div__msg__TwoFloats__Sequence__copy(
  const simple_div__msg__TwoFloats__Sequence * input,
  simple_div__msg__TwoFloats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_div__msg__TwoFloats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_div__msg__TwoFloats * data =
      (simple_div__msg__TwoFloats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_div__msg__TwoFloats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_div__msg__TwoFloats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_div__msg__TwoFloats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
