// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gakurobo_msgs:msg/Pid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gakurobo_msgs/msg/detail/pid__rosidl_typesupport_introspection_c.h"
#include "gakurobo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gakurobo_msgs/msg/detail/pid__functions.h"
#include "gakurobo_msgs/msg/detail/pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pid__rosidl_typesupport_introspection_c__Pid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gakurobo_msgs__msg__Pid__init(message_memory);
}

void Pid__rosidl_typesupport_introspection_c__Pid_fini_function(void * message_memory)
{
  gakurobo_msgs__msg__Pid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pid__rosidl_typesupport_introspection_c__Pid_message_member_array[3] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Pid, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Pid, ki),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Pid, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pid__rosidl_typesupport_introspection_c__Pid_message_members = {
  "gakurobo_msgs__msg",  // message namespace
  "Pid",  // message name
  3,  // number of fields
  sizeof(gakurobo_msgs__msg__Pid),
  Pid__rosidl_typesupport_introspection_c__Pid_message_member_array,  // message members
  Pid__rosidl_typesupport_introspection_c__Pid_init_function,  // function to initialize message memory (memory has to be allocated)
  Pid__rosidl_typesupport_introspection_c__Pid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle = {
  0,
  &Pid__rosidl_typesupport_introspection_c__Pid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gakurobo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gakurobo_msgs, msg, Pid)() {
  if (!Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier) {
    Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
