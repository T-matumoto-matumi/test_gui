// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gakurobo_msgs:msg/Setpower.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_H_
#define GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Setpower in the package gakurobo_msgs.
typedef struct gakurobo_msgs__msg__Setpower
{
  float w1;
  float w2;
  float w3;
  float w4;
} gakurobo_msgs__msg__Setpower;

// Struct for a sequence of gakurobo_msgs__msg__Setpower.
typedef struct gakurobo_msgs__msg__Setpower__Sequence
{
  gakurobo_msgs__msg__Setpower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gakurobo_msgs__msg__Setpower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_H_
