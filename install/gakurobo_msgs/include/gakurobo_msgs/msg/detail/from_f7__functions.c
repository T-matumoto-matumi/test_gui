// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gakurobo_msgs:msg/FromF7.idl
// generated code does not contain a copyright notice
#include "gakurobo_msgs/msg/detail/from_f7__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gakurobo_msgs__msg__FromF7__init(gakurobo_msgs__msg__FromF7 * msg)
{
  if (!msg) {
    return false;
  }
  // inout
  return true;
}

void
gakurobo_msgs__msg__FromF7__fini(gakurobo_msgs__msg__FromF7 * msg)
{
  if (!msg) {
    return;
  }
  // inout
}

bool
gakurobo_msgs__msg__FromF7__are_equal(const gakurobo_msgs__msg__FromF7 * lhs, const gakurobo_msgs__msg__FromF7 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // inout
  if (lhs->inout != rhs->inout) {
    return false;
  }
  return true;
}

bool
gakurobo_msgs__msg__FromF7__copy(
  const gakurobo_msgs__msg__FromF7 * input,
  gakurobo_msgs__msg__FromF7 * output)
{
  if (!input || !output) {
    return false;
  }
  // inout
  output->inout = input->inout;
  return true;
}

gakurobo_msgs__msg__FromF7 *
gakurobo_msgs__msg__FromF7__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__FromF7 * msg = (gakurobo_msgs__msg__FromF7 *)allocator.allocate(sizeof(gakurobo_msgs__msg__FromF7), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gakurobo_msgs__msg__FromF7));
  bool success = gakurobo_msgs__msg__FromF7__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gakurobo_msgs__msg__FromF7__destroy(gakurobo_msgs__msg__FromF7 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gakurobo_msgs__msg__FromF7__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gakurobo_msgs__msg__FromF7__Sequence__init(gakurobo_msgs__msg__FromF7__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__FromF7 * data = NULL;

  if (size) {
    data = (gakurobo_msgs__msg__FromF7 *)allocator.zero_allocate(size, sizeof(gakurobo_msgs__msg__FromF7), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gakurobo_msgs__msg__FromF7__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gakurobo_msgs__msg__FromF7__fini(&data[i - 1]);
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
gakurobo_msgs__msg__FromF7__Sequence__fini(gakurobo_msgs__msg__FromF7__Sequence * array)
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
      gakurobo_msgs__msg__FromF7__fini(&array->data[i]);
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

gakurobo_msgs__msg__FromF7__Sequence *
gakurobo_msgs__msg__FromF7__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__FromF7__Sequence * array = (gakurobo_msgs__msg__FromF7__Sequence *)allocator.allocate(sizeof(gakurobo_msgs__msg__FromF7__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gakurobo_msgs__msg__FromF7__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gakurobo_msgs__msg__FromF7__Sequence__destroy(gakurobo_msgs__msg__FromF7__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gakurobo_msgs__msg__FromF7__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gakurobo_msgs__msg__FromF7__Sequence__are_equal(const gakurobo_msgs__msg__FromF7__Sequence * lhs, const gakurobo_msgs__msg__FromF7__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gakurobo_msgs__msg__FromF7__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__FromF7__Sequence__copy(
  const gakurobo_msgs__msg__FromF7__Sequence * input,
  gakurobo_msgs__msg__FromF7__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gakurobo_msgs__msg__FromF7);
    gakurobo_msgs__msg__FromF7 * data =
      (gakurobo_msgs__msg__FromF7 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gakurobo_msgs__msg__FromF7__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gakurobo_msgs__msg__FromF7__fini(&data[i]);
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
    if (!gakurobo_msgs__msg__FromF7__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
