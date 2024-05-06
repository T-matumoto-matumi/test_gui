// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gakurobo_msgs:msg/SerchSairo.idl
// generated code does not contain a copyright notice
#include "gakurobo_msgs/msg/detail/serch_sairo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gakurobo_msgs__msg__SerchSairo__init(gakurobo_msgs__msg__SerchSairo * msg)
{
  if (!msg) {
    return false;
  }
  // red
  // blue
  return true;
}

void
gakurobo_msgs__msg__SerchSairo__fini(gakurobo_msgs__msg__SerchSairo * msg)
{
  if (!msg) {
    return;
  }
  // red
  // blue
}

bool
gakurobo_msgs__msg__SerchSairo__are_equal(const gakurobo_msgs__msg__SerchSairo * lhs, const gakurobo_msgs__msg__SerchSairo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red
  if (lhs->red != rhs->red) {
    return false;
  }
  // blue
  if (lhs->blue != rhs->blue) {
    return false;
  }
  return true;
}

bool
gakurobo_msgs__msg__SerchSairo__copy(
  const gakurobo_msgs__msg__SerchSairo * input,
  gakurobo_msgs__msg__SerchSairo * output)
{
  if (!input || !output) {
    return false;
  }
  // red
  output->red = input->red;
  // blue
  output->blue = input->blue;
  return true;
}

gakurobo_msgs__msg__SerchSairo *
gakurobo_msgs__msg__SerchSairo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__SerchSairo * msg = (gakurobo_msgs__msg__SerchSairo *)allocator.allocate(sizeof(gakurobo_msgs__msg__SerchSairo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gakurobo_msgs__msg__SerchSairo));
  bool success = gakurobo_msgs__msg__SerchSairo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gakurobo_msgs__msg__SerchSairo__destroy(gakurobo_msgs__msg__SerchSairo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gakurobo_msgs__msg__SerchSairo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gakurobo_msgs__msg__SerchSairo__Sequence__init(gakurobo_msgs__msg__SerchSairo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__SerchSairo * data = NULL;

  if (size) {
    data = (gakurobo_msgs__msg__SerchSairo *)allocator.zero_allocate(size, sizeof(gakurobo_msgs__msg__SerchSairo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gakurobo_msgs__msg__SerchSairo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gakurobo_msgs__msg__SerchSairo__fini(&data[i - 1]);
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
gakurobo_msgs__msg__SerchSairo__Sequence__fini(gakurobo_msgs__msg__SerchSairo__Sequence * array)
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
      gakurobo_msgs__msg__SerchSairo__fini(&array->data[i]);
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

gakurobo_msgs__msg__SerchSairo__Sequence *
gakurobo_msgs__msg__SerchSairo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__SerchSairo__Sequence * array = (gakurobo_msgs__msg__SerchSairo__Sequence *)allocator.allocate(sizeof(gakurobo_msgs__msg__SerchSairo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gakurobo_msgs__msg__SerchSairo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gakurobo_msgs__msg__SerchSairo__Sequence__destroy(gakurobo_msgs__msg__SerchSairo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gakurobo_msgs__msg__SerchSairo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gakurobo_msgs__msg__SerchSairo__Sequence__are_equal(const gakurobo_msgs__msg__SerchSairo__Sequence * lhs, const gakurobo_msgs__msg__SerchSairo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gakurobo_msgs__msg__SerchSairo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__SerchSairo__Sequence__copy(
  const gakurobo_msgs__msg__SerchSairo__Sequence * input,
  gakurobo_msgs__msg__SerchSairo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gakurobo_msgs__msg__SerchSairo);
    gakurobo_msgs__msg__SerchSairo * data =
      (gakurobo_msgs__msg__SerchSairo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gakurobo_msgs__msg__SerchSairo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gakurobo_msgs__msg__SerchSairo__fini(&data[i]);
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
    if (!gakurobo_msgs__msg__SerchSairo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
