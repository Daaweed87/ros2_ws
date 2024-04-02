// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice
#include "my_package/msg/detail/two_floats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_package__msg__TwoFloats__init(my_package__msg__TwoFloats * msg)
{
  if (!msg) {
    return false;
  }
  // first_number
  // second_number
  return true;
}

void
my_package__msg__TwoFloats__fini(my_package__msg__TwoFloats * msg)
{
  if (!msg) {
    return;
  }
  // first_number
  // second_number
}

bool
my_package__msg__TwoFloats__are_equal(const my_package__msg__TwoFloats * lhs, const my_package__msg__TwoFloats * rhs)
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
my_package__msg__TwoFloats__copy(
  const my_package__msg__TwoFloats * input,
  my_package__msg__TwoFloats * output)
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

my_package__msg__TwoFloats *
my_package__msg__TwoFloats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__TwoFloats * msg = (my_package__msg__TwoFloats *)allocator.allocate(sizeof(my_package__msg__TwoFloats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_package__msg__TwoFloats));
  bool success = my_package__msg__TwoFloats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_package__msg__TwoFloats__destroy(my_package__msg__TwoFloats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_package__msg__TwoFloats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_package__msg__TwoFloats__Sequence__init(my_package__msg__TwoFloats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__TwoFloats * data = NULL;

  if (size) {
    data = (my_package__msg__TwoFloats *)allocator.zero_allocate(size, sizeof(my_package__msg__TwoFloats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_package__msg__TwoFloats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_package__msg__TwoFloats__fini(&data[i - 1]);
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
my_package__msg__TwoFloats__Sequence__fini(my_package__msg__TwoFloats__Sequence * array)
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
      my_package__msg__TwoFloats__fini(&array->data[i]);
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

my_package__msg__TwoFloats__Sequence *
my_package__msg__TwoFloats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__TwoFloats__Sequence * array = (my_package__msg__TwoFloats__Sequence *)allocator.allocate(sizeof(my_package__msg__TwoFloats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_package__msg__TwoFloats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_package__msg__TwoFloats__Sequence__destroy(my_package__msg__TwoFloats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_package__msg__TwoFloats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_package__msg__TwoFloats__Sequence__are_equal(const my_package__msg__TwoFloats__Sequence * lhs, const my_package__msg__TwoFloats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_package__msg__TwoFloats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_package__msg__TwoFloats__Sequence__copy(
  const my_package__msg__TwoFloats__Sequence * input,
  my_package__msg__TwoFloats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_package__msg__TwoFloats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_package__msg__TwoFloats * data =
      (my_package__msg__TwoFloats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_package__msg__TwoFloats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_package__msg__TwoFloats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_package__msg__TwoFloats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
