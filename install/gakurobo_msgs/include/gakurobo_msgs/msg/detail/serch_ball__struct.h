// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gakurobo_msgs:msg/SerchBall.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_H_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SerchBall in the package gakurobo_msgs.
typedef struct gakurobo_msgs__msg__SerchBall
{
  bool get;
  double l;
  double arg;
} gakurobo_msgs__msg__SerchBall;

// Struct for a sequence of gakurobo_msgs__msg__SerchBall.
typedef struct gakurobo_msgs__msg__SerchBall__Sequence
{
  gakurobo_msgs__msg__SerchBall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gakurobo_msgs__msg__SerchBall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_H_
