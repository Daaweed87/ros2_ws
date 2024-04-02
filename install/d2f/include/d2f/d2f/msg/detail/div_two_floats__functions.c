// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice
#include "d2f/msg/detail/div_two_floats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
d2f__msg__DivTwoFloats__init(d2f__msg__DivTwoFloats * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
d2f__msg__DivTwoFloats__fini(d2f__msg__DivTwoFloats * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
d2f__msg__DivTwoFloats__are_equal(const d2f__msg__DivTwoFloats * lhs, const d2f__msg__DivTwoFloats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
d2f__msg__DivTwoFloats__copy(
  const d2f__msg__DivTwoFloats * input,
  d2f__msg__DivTwoFloats * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

d2f__msg__DivTwoFloats *
d2f__msg__DivTwoFloats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__msg__DivTwoFloats * msg = (d2f__msg__DivTwoFloats *)allocator.allocate(sizeof(d2f__msg__DivTwoFloats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(d2f__msg__DivTwoFloats));
  bool success = d2f__msg__DivTwoFloats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
d2f__msg__DivTwoFloats__destroy(d2f__msg__DivTwoFloats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    d2f__msg__DivTwoFloats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
d2f__msg__DivTwoFloats__Sequence__init(d2f__msg__DivTwoFloats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__msg__DivTwoFloats * data = NULL;

  if (size) {
    data = (d2f__msg__DivTwoFloats *)allocator.zero_allocate(size, sizeof(d2f__msg__DivTwoFloats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = d2f__msg__DivTwoFloats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        d2f__msg__DivTwoFloats__fini(&data[i - 1]);
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
d2f__msg__DivTwoFloats__Sequence__fini(d2f__msg__DivTwoFloats__Sequence * array)
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
      d2f__msg__DivTwoFloats__fini(&array->data[i]);
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

d2f__msg__DivTwoFloats__Sequence *
d2f__msg__DivTwoFloats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__msg__DivTwoFloats__Sequence * array = (d2f__msg__DivTwoFloats__Sequence *)allocator.allocate(sizeof(d2f__msg__DivTwoFloats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = d2f__msg__DivTwoFloats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
d2f__msg__DivTwoFloats__Sequence__destroy(d2f__msg__DivTwoFloats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    d2f__msg__DivTwoFloats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
d2f__msg__DivTwoFloats__Sequence__are_equal(const d2f__msg__DivTwoFloats__Sequence * lhs, const d2f__msg__DivTwoFloats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!d2f__msg__DivTwoFloats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
d2f__msg__DivTwoFloats__Sequence__copy(
  const d2f__msg__DivTwoFloats__Sequence * input,
  d2f__msg__DivTwoFloats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(d2f__msg__DivTwoFloats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    d2f__msg__DivTwoFloats * data =
      (d2f__msg__DivTwoFloats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!d2f__msg__DivTwoFloats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          d2f__msg__DivTwoFloats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!d2f__msg__DivTwoFloats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
