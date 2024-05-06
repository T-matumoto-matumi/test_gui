// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gakurobo_msgs:msg/Aims.idl
// generated code does not contain a copyright notice
#include "gakurobo_msgs/msg/detail/aims__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gakurobo_msgs__msg__Aims__init(gakurobo_msgs__msg__Aims * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // aim_arg_parallel
  // aim_arg_rotation
  return true;
}

void
gakurobo_msgs__msg__Aims__fini(gakurobo_msgs__msg__Aims * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // aim_arg_parallel
  // aim_arg_rotation
}

bool
gakurobo_msgs__msg__Aims__are_equal(const gakurobo_msgs__msg__Aims * lhs, const gakurobo_msgs__msg__Aims * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // aim_arg_parallel
  if (lhs->aim_arg_parallel != rhs->aim_arg_parallel) {
    return false;
  }
  // aim_arg_rotation
  if (lhs->aim_arg_rotation != rhs->aim_arg_rotation) {
    return false;
  }
  return true;
}

bool
gakurobo_msgs__msg__Aims__copy(
  const gakurobo_msgs__msg__Aims * input,
  gakurobo_msgs__msg__Aims * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // aim_arg_parallel
  output->aim_arg_parallel = input->aim_arg_parallel;
  // aim_arg_rotation
  output->aim_arg_rotation = input->aim_arg_rotation;
  return true;
}

gakurobo_msgs__msg__Aims *
gakurobo_msgs__msg__Aims__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__Aims * msg = (gakurobo_msgs__msg__Aims *)allocator.allocate(sizeof(gakurobo_msgs__msg__Aims), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gakurobo_msgs__msg__Aims));
  bool success = gakurobo_msgs__msg__Aims__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gakurobo_msgs__msg__Aims__destroy(gakurobo_msgs__msg__Aims * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gakurobo_msgs__msg__Aims__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gakurobo_msgs__msg__Aims__Sequence__init(gakurobo_msgs__msg__Aims__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__Aims * data = NULL;

  if (size) {
    data = (gakurobo_msgs__msg__Aims *)allocator.zero_allocate(size, sizeof(gakurobo_msgs__msg__Aims), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gakurobo_msgs__msg__Aims__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gakurobo_msgs__msg__Aims__fini(&data[i - 1]);
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
gakurobo_msgs__msg__Aims__Sequence__fini(gakurobo_msgs__msg__Aims__Sequence * array)
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
      gakurobo_msgs__msg__Aims__fini(&array->data[i]);
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

gakurobo_msgs__msg__Aims__Sequence *
gakurobo_msgs__msg__Aims__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__Aims__Sequence * array = (gakurobo_msgs__msg__Aims__Sequence *)allocator.allocate(sizeof(gakurobo_msgs__msg__Aims__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gakurobo_msgs__msg__Aims__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gakurobo_msgs__msg__Aims__Sequence__destroy(gakurobo_msgs__msg__Aims__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gakurobo_msgs__msg__Aims__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gakurobo_msgs__msg__Aims__Sequence__are_equal(const gakurobo_msgs__msg__Aims__Sequence * lhs, const gakurobo_msgs__msg__Aims__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gakurobo_msgs__msg__Aims__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__Aims__Sequence__copy(
  const gakurobo_msgs__msg__Aims__Sequence * input,
  gakurobo_msgs__msg__Aims__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gakurobo_msgs__msg__Aims);
    gakurobo_msgs__msg__Aims * data =
      (gakurobo_msgs__msg__Aims *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gakurobo_msgs__msg__Aims__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gakurobo_msgs__msg__Aims__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gakurobo_msgs__msg__Aims__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
