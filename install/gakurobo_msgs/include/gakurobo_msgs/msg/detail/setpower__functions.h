// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gakurobo_msgs:msg/Setpower.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__FUNCTIONS_H_
#define GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gakurobo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gakurobo_msgs/msg/detail/setpower__struct.h"

/// Initialize msg/Setpower message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gakurobo_msgs__msg__Setpower
 * )) before or use
 * gakurobo_msgs__msg__Setpower__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__init(gakurobo_msgs__msg__Setpower * msg);

/// Finalize msg/Setpower message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
void
gakurobo_msgs__msg__Setpower__fini(gakurobo_msgs__msg__Setpower * msg);

/// Create msg/Setpower message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gakurobo_msgs__msg__Setpower__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
gakurobo_msgs__msg__Setpower *
gakurobo_msgs__msg__Setpower__create();

/// Destroy msg/Setpower message.
/**
 * It calls
 * gakurobo_msgs__msg__Setpower__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
void
gakurobo_msgs__msg__Setpower__destroy(gakurobo_msgs__msg__Setpower * msg);

/// Check for msg/Setpower message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__are_equal(const gakurobo_msgs__msg__Setpower * lhs, const gakurobo_msgs__msg__Setpower * rhs);

/// Copy a msg/Setpower message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__copy(
  const gakurobo_msgs__msg__Setpower * input,
  gakurobo_msgs__msg__Setpower * output);

/// Initialize array of msg/Setpower messages.
/**
 * It allocates the memory for the number of elements and calls
 * gakurobo_msgs__msg__Setpower__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__Sequence__init(gakurobo_msgs__msg__Setpower__Sequence * array, size_t size);

/// Finalize array of msg/Setpower messages.
/**
 * It calls
 * gakurobo_msgs__msg__Setpower__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
void
gakurobo_msgs__msg__Setpower__Sequence__fini(gakurobo_msgs__msg__Setpower__Sequence * array);

/// Create array of msg/Setpower messages.
/**
 * It allocates the memory for the array and calls
 * gakurobo_msgs__msg__Setpower__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
gakurobo_msgs__msg__Setpower__Sequence *
gakurobo_msgs__msg__Setpower__Sequence__create(size_t size);

/// Destroy array of msg/Setpower messages.
/**
 * It calls
 * gakurobo_msgs__msg__Setpower__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
void
gakurobo_msgs__msg__Setpower__Sequence__destroy(gakurobo_msgs__msg__Setpower__Sequence * array);

/// Check for msg/Setpower message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__Sequence__are_equal(const gakurobo_msgs__msg__Setpower__Sequence * lhs, const gakurobo_msgs__msg__Setpower__Sequence * rhs);

/// Copy an array of msg/Setpower messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gakurobo_msgs
bool
gakurobo_msgs__msg__Setpower__Sequence__copy(
  const gakurobo_msgs__msg__Setpower__Sequence * input,
  gakurobo_msgs__msg__Setpower__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__FUNCTIONS_H_
