// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gakurobo_msgs:msg/Aims.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gakurobo_msgs/msg/detail/aims__rosidl_typesupport_introspection_c.h"
#include "gakurobo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gakurobo_msgs/msg/detail/aims__functions.h"
#include "gakurobo_msgs/msg/detail/aims__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Aims__rosidl_typesupport_introspection_c__Aims_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gakurobo_msgs__msg__Aims__init(message_memory);
}

void Aims__rosidl_typesupport_introspection_c__Aims_fini_function(void * message_memory)
{
  gakurobo_msgs__msg__Aims__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Aims__rosidl_typesupport_introspection_c__Aims_message_member_array[3] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Aims, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aim_arg_parallel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Aims, aim_arg_parallel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aim_arg_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Aims, aim_arg_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Aims__rosidl_typesupport_introspection_c__Aims_message_members = {
  "gakurobo_msgs__msg",  // message namespace
  "Aims",  // message name
  3,  // number of fields
  sizeof(gakurobo_msgs__msg__Aims),
  Aims__rosidl_typesupport_introspection_c__Aims_message_member_array,  // message members
  Aims__rosidl_typesupport_introspection_c__Aims_init_function,  // function to initialize message memory (memory has to be allocated)
  Aims__rosidl_typesupport_introspection_c__Aims_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Aims__rosidl_typesupport_introspection_c__Aims_message_type_support_handle = {
  0,
  &Aims__rosidl_typesupport_introspection_c__Aims_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gakurobo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gakurobo_msgs, msg, Aims)() {
  if (!Aims__rosidl_typesupport_introspection_c__Aims_message_type_support_handle.typesupport_identifier) {
    Aims__rosidl_typesupport_introspection_c__Aims_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Aims__rosidl_typesupport_introspection_c__Aims_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
