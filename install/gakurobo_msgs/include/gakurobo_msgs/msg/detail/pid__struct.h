// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gakurobo_msgs:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__PID__STRUCT_H_
#define GAKUROBO_MSGS__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pid in the package gakurobo_msgs.
typedef struct gakurobo_msgs__msg__Pid
{
  float kp;
  float ki;
  float kd;
} gakurobo_msgs__msg__Pid;

// Struct for a sequence of gakurobo_msgs__msg__Pid.
typedef struct gakurobo_msgs__msg__Pid__Sequence
{
  gakurobo_msgs__msg__Pid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gakurobo_msgs__msg__Pid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAKUROBO_MSGS__MSG__DETAIL__PID__STRUCT_H_
