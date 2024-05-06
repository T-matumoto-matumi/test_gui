// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gakurobo_msgs:msg/InSairo.idl
// generated code does not contain a copyright notice
#include "gakurobo_msgs/msg/detail/in_sairo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gakurobo_msgs__msg__InSairo__init(gakurobo_msgs__msg__InSairo * msg)
{
  if (!msg) {
    return false;
  }
  // sairo1
  // sairo2
  // sairo3
  // sairo4
  // sairo5
  return true;
}

void
gakurobo_msgs__msg__InSairo__fini(gakurobo_msgs__msg__InSairo * msg)
{
  if (!msg) {
    return;
  }
  // sairo1
  // sairo2
  // sairo3
  // sairo4
  // sairo5
}

bool
gakurobo_msgs__msg__InSairo__are_equal(const gakurobo_msgs__msg__InSairo * lhs, const gakurobo_msgs__msg__InSairo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sairo1
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sairo1[i] != rhs->sairo1[i]) {
      return false;
    }
  }
  // sairo2
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sairo2[i] != rhs->sairo2[i]) {
      return false;
    }
  }
  // sairo3
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sairo3[i] != rhs->sairo3[i]) {
      return false;
    }
  }
  // sairo4
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sairo4[i] != rhs->sairo4[i]) {
      return false;
    }
  }
  // sairo5
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sairo5[i] != rhs->sairo5[i]) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__InSairo__copy(
  const gakurobo_msgs__msg__InSairo * input,
  gakurobo_msgs__msg__InSairo * output)
{
  if (!input || !output) {
    return false;
  }
  // sairo1
  for (size_t i = 0; i < 3; ++i) {
    output->sairo1[i] = input->sairo1[i];
  }
  // sairo2
  for (size_t i = 0; i < 3; ++i) {
    output->sairo2[i] = input->sairo2[i];
  }
  // sairo3
  for (size_t i = 0; i < 3; ++i) {
    output->sairo3[i] = input->sairo3[i];
  }
  // sairo4
  for (size_t i = 0; i < 3; ++i) {
    output->sairo4[i] = input->sairo4[i];
  }
  // sairo5
  for (size_t i = 0; i < 3; ++i) {
    output->sairo5[i] = input->sairo5[i];
  }
  return true;
}

gakurobo_msgs__msg__InSairo *
gakurobo_msgs__msg__InSairo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__InSairo * msg = (gakurobo_msgs__msg__InSairo *)allocator.allocate(sizeof(gakurobo_msgs__msg__InSairo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gakurobo_msgs__msg__InSairo));
  bool success = gakurobo_msgs__msg__InSairo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gakurobo_msgs__msg__InSairo__destroy(gakurobo_msgs__msg__InSairo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gakurobo_msgs__msg__InSairo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gakurobo_msgs__msg__InSairo__Sequence__init(gakurobo_msgs__msg__InSairo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__InSairo * data = NULL;

  if (size) {
    data = (gakurobo_msgs__msg__InSairo *)allocator.zero_allocate(size, sizeof(gakurobo_msgs__msg__InSairo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gakurobo_msgs__msg__InSairo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gakurobo_msgs__msg__InSairo__fini(&data[i - 1]);
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
gakurobo_msgs__msg__InSairo__Sequence__fini(gakurobo_msgs__msg__InSairo__Sequence * array)
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
      gakurobo_msgs__msg__InSairo__fini(&array->data[i]);
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

gakurobo_msgs__msg__InSairo__Sequence *
gakurobo_msgs__msg__InSairo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__InSairo__Sequence * array = (gakurobo_msgs__msg__InSairo__Sequence *)allocator.allocate(sizeof(gakurobo_msgs__msg__InSairo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gakurobo_msgs__msg__InSairo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gakurobo_msgs__msg__InSairo__Sequence__destroy(gakurobo_msgs__msg__InSairo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gakurobo_msgs__msg__InSairo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gakurobo_msgs__msg__InSairo__Sequence__are_equal(const gakurobo_msgs__msg__InSairo__Sequence * lhs, const gakurobo_msgs__msg__InSairo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gakurobo_msgs__msg__InSairo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__InSairo__Sequence__copy(
  const gakurobo_msgs__msg__InSairo__Sequence * input,
  gakurobo_msgs__msg__InSairo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gakurobo_msgs__msg__InSairo);
    gakurobo_msgs__msg__InSairo * data =
      (gakurobo_msgs__msg__InSairo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gakurobo_msgs__msg__InSairo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gakurobo_msgs__msg__InSairo__fini(&data[i]);
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
    if (!gakurobo_msgs__msg__InSairo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
