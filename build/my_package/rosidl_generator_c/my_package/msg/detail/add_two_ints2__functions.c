// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice
#include "my_package/msg/detail/add_two_ints2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_package__msg__AddTwoInts2__init(my_package__msg__AddTwoInts2 * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
my_package__msg__AddTwoInts2__fini(my_package__msg__AddTwoInts2 * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
my_package__msg__AddTwoInts2__are_equal(const my_package__msg__AddTwoInts2 * lhs, const my_package__msg__AddTwoInts2 * rhs)
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
my_package__msg__AddTwoInts2__copy(
  const my_package__msg__AddTwoInts2 * input,
  my_package__msg__AddTwoInts2 * output)
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

my_package__msg__AddTwoInts2 *
my_package__msg__AddTwoInts2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__AddTwoInts2 * msg = (my_package__msg__AddTwoInts2 *)allocator.allocate(sizeof(my_package__msg__AddTwoInts2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_package__msg__AddTwoInts2));
  bool success = my_package__msg__AddTwoInts2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_package__msg__AddTwoInts2__destroy(my_package__msg__AddTwoInts2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_package__msg__AddTwoInts2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_package__msg__AddTwoInts2__Sequence__init(my_package__msg__AddTwoInts2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__AddTwoInts2 * data = NULL;

  if (size) {
    data = (my_package__msg__AddTwoInts2 *)allocator.zero_allocate(size, sizeof(my_package__msg__AddTwoInts2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_package__msg__AddTwoInts2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_package__msg__AddTwoInts2__fini(&data[i - 1]);
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
my_package__msg__AddTwoInts2__Sequence__fini(my_package__msg__AddTwoInts2__Sequence * array)
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
      my_package__msg__AddTwoInts2__fini(&array->data[i]);
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

my_package__msg__AddTwoInts2__Sequence *
my_package__msg__AddTwoInts2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_package__msg__AddTwoInts2__Sequence * array = (my_package__msg__AddTwoInts2__Sequence *)allocator.allocate(sizeof(my_package__msg__AddTwoInts2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_package__msg__AddTwoInts2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_package__msg__AddTwoInts2__Sequence__destroy(my_package__msg__AddTwoInts2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_package__msg__AddTwoInts2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_package__msg__AddTwoInts2__Sequence__are_equal(const my_package__msg__AddTwoInts2__Sequence * lhs, const my_package__msg__AddTwoInts2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_package__msg__AddTwoInts2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_package__msg__AddTwoInts2__Sequence__copy(
  const my_package__msg__AddTwoInts2__Sequence * input,
  my_package__msg__AddTwoInts2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_package__msg__AddTwoInts2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_package__msg__AddTwoInts2 * data =
      (my_package__msg__AddTwoInts2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_package__msg__AddTwoInts2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_package__msg__AddTwoInts2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_package__msg__AddTwoInts2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
