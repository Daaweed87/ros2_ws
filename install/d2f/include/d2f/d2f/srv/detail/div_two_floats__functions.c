// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice
#include "d2f/srv/detail/div_two_floats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
d2f__srv__DivTwoFloats_Request__init(d2f__srv__DivTwoFloats_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
d2f__srv__DivTwoFloats_Request__fini(d2f__srv__DivTwoFloats_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
d2f__srv__DivTwoFloats_Request__are_equal(const d2f__srv__DivTwoFloats_Request * lhs, const d2f__srv__DivTwoFloats_Request * rhs)
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
d2f__srv__DivTwoFloats_Request__copy(
  const d2f__srv__DivTwoFloats_Request * input,
  d2f__srv__DivTwoFloats_Request * output)
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

d2f__srv__DivTwoFloats_Request *
d2f__srv__DivTwoFloats_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Request * msg = (d2f__srv__DivTwoFloats_Request *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(d2f__srv__DivTwoFloats_Request));
  bool success = d2f__srv__DivTwoFloats_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
d2f__srv__DivTwoFloats_Request__destroy(d2f__srv__DivTwoFloats_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    d2f__srv__DivTwoFloats_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
d2f__srv__DivTwoFloats_Request__Sequence__init(d2f__srv__DivTwoFloats_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Request * data = NULL;

  if (size) {
    data = (d2f__srv__DivTwoFloats_Request *)allocator.zero_allocate(size, sizeof(d2f__srv__DivTwoFloats_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = d2f__srv__DivTwoFloats_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        d2f__srv__DivTwoFloats_Request__fini(&data[i - 1]);
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
d2f__srv__DivTwoFloats_Request__Sequence__fini(d2f__srv__DivTwoFloats_Request__Sequence * array)
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
      d2f__srv__DivTwoFloats_Request__fini(&array->data[i]);
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

d2f__srv__DivTwoFloats_Request__Sequence *
d2f__srv__DivTwoFloats_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Request__Sequence * array = (d2f__srv__DivTwoFloats_Request__Sequence *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = d2f__srv__DivTwoFloats_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
d2f__srv__DivTwoFloats_Request__Sequence__destroy(d2f__srv__DivTwoFloats_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    d2f__srv__DivTwoFloats_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
d2f__srv__DivTwoFloats_Request__Sequence__are_equal(const d2f__srv__DivTwoFloats_Request__Sequence * lhs, const d2f__srv__DivTwoFloats_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
d2f__srv__DivTwoFloats_Request__Sequence__copy(
  const d2f__srv__DivTwoFloats_Request__Sequence * input,
  d2f__srv__DivTwoFloats_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(d2f__srv__DivTwoFloats_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    d2f__srv__DivTwoFloats_Request * data =
      (d2f__srv__DivTwoFloats_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!d2f__srv__DivTwoFloats_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          d2f__srv__DivTwoFloats_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
d2f__srv__DivTwoFloats_Response__init(d2f__srv__DivTwoFloats_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
d2f__srv__DivTwoFloats_Response__fini(d2f__srv__DivTwoFloats_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
d2f__srv__DivTwoFloats_Response__are_equal(const d2f__srv__DivTwoFloats_Response * lhs, const d2f__srv__DivTwoFloats_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
d2f__srv__DivTwoFloats_Response__copy(
  const d2f__srv__DivTwoFloats_Response * input,
  d2f__srv__DivTwoFloats_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

d2f__srv__DivTwoFloats_Response *
d2f__srv__DivTwoFloats_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Response * msg = (d2f__srv__DivTwoFloats_Response *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(d2f__srv__DivTwoFloats_Response));
  bool success = d2f__srv__DivTwoFloats_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
d2f__srv__DivTwoFloats_Response__destroy(d2f__srv__DivTwoFloats_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    d2f__srv__DivTwoFloats_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
d2f__srv__DivTwoFloats_Response__Sequence__init(d2f__srv__DivTwoFloats_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Response * data = NULL;

  if (size) {
    data = (d2f__srv__DivTwoFloats_Response *)allocator.zero_allocate(size, sizeof(d2f__srv__DivTwoFloats_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = d2f__srv__DivTwoFloats_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        d2f__srv__DivTwoFloats_Response__fini(&data[i - 1]);
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
d2f__srv__DivTwoFloats_Response__Sequence__fini(d2f__srv__DivTwoFloats_Response__Sequence * array)
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
      d2f__srv__DivTwoFloats_Response__fini(&array->data[i]);
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

d2f__srv__DivTwoFloats_Response__Sequence *
d2f__srv__DivTwoFloats_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Response__Sequence * array = (d2f__srv__DivTwoFloats_Response__Sequence *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = d2f__srv__DivTwoFloats_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
d2f__srv__DivTwoFloats_Response__Sequence__destroy(d2f__srv__DivTwoFloats_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    d2f__srv__DivTwoFloats_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
d2f__srv__DivTwoFloats_Response__Sequence__are_equal(const d2f__srv__DivTwoFloats_Response__Sequence * lhs, const d2f__srv__DivTwoFloats_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
d2f__srv__DivTwoFloats_Response__Sequence__copy(
  const d2f__srv__DivTwoFloats_Response__Sequence * input,
  d2f__srv__DivTwoFloats_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(d2f__srv__DivTwoFloats_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    d2f__srv__DivTwoFloats_Response * data =
      (d2f__srv__DivTwoFloats_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!d2f__srv__DivTwoFloats_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          d2f__srv__DivTwoFloats_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "d2f/srv/detail/div_two_floats__functions.h"

bool
d2f__srv__DivTwoFloats_Event__init(d2f__srv__DivTwoFloats_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    d2f__srv__DivTwoFloats_Event__fini(msg);
    return false;
  }
  // request
  if (!d2f__srv__DivTwoFloats_Request__Sequence__init(&msg->request, 0)) {
    d2f__srv__DivTwoFloats_Event__fini(msg);
    return false;
  }
  // response
  if (!d2f__srv__DivTwoFloats_Response__Sequence__init(&msg->response, 0)) {
    d2f__srv__DivTwoFloats_Event__fini(msg);
    return false;
  }
  return true;
}

void
d2f__srv__DivTwoFloats_Event__fini(d2f__srv__DivTwoFloats_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  d2f__srv__DivTwoFloats_Request__Sequence__fini(&msg->request);
  // response
  d2f__srv__DivTwoFloats_Response__Sequence__fini(&msg->response);
}

bool
d2f__srv__DivTwoFloats_Event__are_equal(const d2f__srv__DivTwoFloats_Event * lhs, const d2f__srv__DivTwoFloats_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!d2f__srv__DivTwoFloats_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!d2f__srv__DivTwoFloats_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
d2f__srv__DivTwoFloats_Event__copy(
  const d2f__srv__DivTwoFloats_Event * input,
  d2f__srv__DivTwoFloats_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!d2f__srv__DivTwoFloats_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!d2f__srv__DivTwoFloats_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

d2f__srv__DivTwoFloats_Event *
d2f__srv__DivTwoFloats_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Event * msg = (d2f__srv__DivTwoFloats_Event *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(d2f__srv__DivTwoFloats_Event));
  bool success = d2f__srv__DivTwoFloats_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
d2f__srv__DivTwoFloats_Event__destroy(d2f__srv__DivTwoFloats_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    d2f__srv__DivTwoFloats_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
d2f__srv__DivTwoFloats_Event__Sequence__init(d2f__srv__DivTwoFloats_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Event * data = NULL;

  if (size) {
    data = (d2f__srv__DivTwoFloats_Event *)allocator.zero_allocate(size, sizeof(d2f__srv__DivTwoFloats_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = d2f__srv__DivTwoFloats_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        d2f__srv__DivTwoFloats_Event__fini(&data[i - 1]);
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
d2f__srv__DivTwoFloats_Event__Sequence__fini(d2f__srv__DivTwoFloats_Event__Sequence * array)
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
      d2f__srv__DivTwoFloats_Event__fini(&array->data[i]);
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

d2f__srv__DivTwoFloats_Event__Sequence *
d2f__srv__DivTwoFloats_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  d2f__srv__DivTwoFloats_Event__Sequence * array = (d2f__srv__DivTwoFloats_Event__Sequence *)allocator.allocate(sizeof(d2f__srv__DivTwoFloats_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = d2f__srv__DivTwoFloats_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
d2f__srv__DivTwoFloats_Event__Sequence__destroy(d2f__srv__DivTwoFloats_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    d2f__srv__DivTwoFloats_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
d2f__srv__DivTwoFloats_Event__Sequence__are_equal(const d2f__srv__DivTwoFloats_Event__Sequence * lhs, const d2f__srv__DivTwoFloats_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
d2f__srv__DivTwoFloats_Event__Sequence__copy(
  const d2f__srv__DivTwoFloats_Event__Sequence * input,
  d2f__srv__DivTwoFloats_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(d2f__srv__DivTwoFloats_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    d2f__srv__DivTwoFloats_Event * data =
      (d2f__srv__DivTwoFloats_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!d2f__srv__DivTwoFloats_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          d2f__srv__DivTwoFloats_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!d2f__srv__DivTwoFloats_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
