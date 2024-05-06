// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gakurobo_msgs:msg/KikiUdp.idl
// generated code does not contain a copyright notice
#include "gakurobo_msgs/msg/detail/kiki_udp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gakurobo_msgs__msg__KikiUdp__init(gakurobo_msgs__msg__KikiUdp * msg)
{
  if (!msg) {
    return false;
  }
  // w1
  // w2
  // w3
  // w4
  // collect
  // sairo_in_1
  // sairo_in_2
  // elevator
  // emission
  return true;
}

void
gakurobo_msgs__msg__KikiUdp__fini(gakurobo_msgs__msg__KikiUdp * msg)
{
  if (!msg) {
    return;
  }
  // w1
  // w2
  // w3
  // w4
  // collect
  // sairo_in_1
  // sairo_in_2
  // elevator
  // emission
}

bool
gakurobo_msgs__msg__KikiUdp__are_equal(const gakurobo_msgs__msg__KikiUdp * lhs, const gakurobo_msgs__msg__KikiUdp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // w1
  if (lhs->w1 != rhs->w1) {
    return false;
  }
  // w2
  if (lhs->w2 != rhs->w2) {
    return false;
  }
  // w3
  if (lhs->w3 != rhs->w3) {
    return false;
  }
  // w4
  if (lhs->w4 != rhs->w4) {
    return false;
  }
  // collect
  if (lhs->collect != rhs->collect) {
    return false;
  }
  // sairo_in_1
  if (lhs->sairo_in_1 != rhs->sairo_in_1) {
    return false;
  }
  // sairo_in_2
  if (lhs->sairo_in_2 != rhs->sairo_in_2) {
    return false;
  }
  // elevator
  if (lhs->elevator != rhs->elevator) {
    return false;
  }
  // emission
  if (lhs->emission != rhs->emission) {
    return false;
  }
  return true;
}

bool
gakurobo_msgs__msg__KikiUdp__copy(
  const gakurobo_msgs__msg__KikiUdp * input,
  gakurobo_msgs__msg__KikiUdp * output)
{
  if (!input || !output) {
    return false;
  }
  // w1
  output->w1 = input->w1;
  // w2
  output->w2 = input->w2;
  // w3
  output->w3 = input->w3;
  // w4
  output->w4 = input->w4;
  // collect
  output->collect = input->collect;
  // sairo_in_1
  output->sairo_in_1 = input->sairo_in_1;
  // sairo_in_2
  output->sairo_in_2 = input->sairo_in_2;
  // elevator
  output->elevator = input->elevator;
  // emission
  output->emission = input->emission;
  return true;
}

gakurobo_msgs__msg__KikiUdp *
gakurobo_msgs__msg__KikiUdp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__KikiUdp * msg = (gakurobo_msgs__msg__KikiUdp *)allocator.allocate(sizeof(gakurobo_msgs__msg__KikiUdp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gakurobo_msgs__msg__KikiUdp));
  bool success = gakurobo_msgs__msg__KikiUdp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gakurobo_msgs__msg__KikiUdp__destroy(gakurobo_msgs__msg__KikiUdp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gakurobo_msgs__msg__KikiUdp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gakurobo_msgs__msg__KikiUdp__Sequence__init(gakurobo_msgs__msg__KikiUdp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__KikiUdp * data = NULL;

  if (size) {
    data = (gakurobo_msgs__msg__KikiUdp *)allocator.zero_allocate(size, sizeof(gakurobo_msgs__msg__KikiUdp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gakurobo_msgs__msg__KikiUdp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gakurobo_msgs__msg__KikiUdp__fini(&data[i - 1]);
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
gakurobo_msgs__msg__KikiUdp__Sequence__fini(gakurobo_msgs__msg__KikiUdp__Sequence * array)
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
      gakurobo_msgs__msg__KikiUdp__fini(&array->data[i]);
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

gakurobo_msgs__msg__KikiUdp__Sequence *
gakurobo_msgs__msg__KikiUdp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gakurobo_msgs__msg__KikiUdp__Sequence * array = (gakurobo_msgs__msg__KikiUdp__Sequence *)allocator.allocate(sizeof(gakurobo_msgs__msg__KikiUdp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gakurobo_msgs__msg__KikiUdp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gakurobo_msgs__msg__KikiUdp__Sequence__destroy(gakurobo_msgs__msg__KikiUdp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gakurobo_msgs__msg__KikiUdp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gakurobo_msgs__msg__KikiUdp__Sequence__are_equal(const gakurobo_msgs__msg__KikiUdp__Sequence * lhs, const gakurobo_msgs__msg__KikiUdp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gakurobo_msgs__msg__KikiUdp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gakurobo_msgs__msg__KikiUdp__Sequence__copy(
  const gakurobo_msgs__msg__KikiUdp__Sequence * input,
  gakurobo_msgs__msg__KikiUdp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gakurobo_msgs__msg__KikiUdp);
    gakurobo_msgs__msg__KikiUdp * data =
      (gakurobo_msgs__msg__KikiUdp *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gakurobo_msgs__msg__KikiUdp__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gakurobo_msgs__msg__KikiUdp__fini(&data[i]);
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
    if (!gakurobo_msgs__msg__KikiUdp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
