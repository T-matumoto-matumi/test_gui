// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gakurobo_msgs:msg/Setpower.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gakurobo_msgs/msg/detail/setpower__rosidl_typesupport_introspection_c.h"
#include "gakurobo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gakurobo_msgs/msg/detail/setpower__functions.h"
#include "gakurobo_msgs/msg/detail/setpower__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Setpower__rosidl_typesupport_introspection_c__Setpower_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gakurobo_msgs__msg__Setpower__init(message_memory);
}

void Setpower__rosidl_typesupport_introspection_c__Setpower_fini_function(void * message_memory)
{
  gakurobo_msgs__msg__Setpower__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Setpower__rosidl_typesupport_introspection_c__Setpower_message_member_array[4] = {
  {
    "w1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Setpower, w1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Setpower, w2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Setpower, w3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs__msg__Setpower, w4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Setpower__rosidl_typesupport_introspection_c__Setpower_message_members = {
  "gakurobo_msgs__msg",  // message namespace
  "Setpower",  // message name
  4,  // number of fields
  sizeof(gakurobo_msgs__msg__Setpower),
  Setpower__rosidl_typesupport_introspection_c__Setpower_message_member_array,  // message members
  Setpower__rosidl_typesupport_introspection_c__Setpower_init_function,  // function to initialize message memory (memory has to be allocated)
  Setpower__rosidl_typesupport_introspection_c__Setpower_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Setpower__rosidl_typesupport_introspection_c__Setpower_message_type_support_handle = {
  0,
  &Setpower__rosidl_typesupport_introspection_c__Setpower_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gakurobo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gakurobo_msgs, msg, Setpower)() {
  if (!Setpower__rosidl_typesupport_introspection_c__Setpower_message_type_support_handle.typesupport_identifier) {
    Setpower__rosidl_typesupport_introspection_c__Setpower_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Setpower__rosidl_typesupport_introspection_c__Setpower_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
