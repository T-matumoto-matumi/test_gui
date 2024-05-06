// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gakurobo_msgs:msg/Aims.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gakurobo_msgs/msg/detail/aims__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gakurobo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Aims_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gakurobo_msgs::msg::Aims(_init);
}

void Aims_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gakurobo_msgs::msg::Aims *>(message_memory);
  typed_message->~Aims();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Aims_message_member_array[3] = {
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::Aims, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aim_arg_parallel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::Aims, aim_arg_parallel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aim_arg_rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::Aims, aim_arg_rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Aims_message_members = {
  "gakurobo_msgs::msg",  // message namespace
  "Aims",  // message name
  3,  // number of fields
  sizeof(gakurobo_msgs::msg::Aims),
  Aims_message_member_array,  // message members
  Aims_init_function,  // function to initialize message memory (memory has to be allocated)
  Aims_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Aims_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Aims_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gakurobo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gakurobo_msgs::msg::Aims>()
{
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::Aims_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gakurobo_msgs, msg, Aims)() {
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::Aims_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
