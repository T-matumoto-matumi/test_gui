// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gakurobo_msgs:msg/FromF7.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gakurobo_msgs/msg/detail/from_f7__struct.hpp"
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

void FromF7_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gakurobo_msgs::msg::FromF7(_init);
}

void FromF7_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gakurobo_msgs::msg::FromF7 *>(message_memory);
  typed_message->~FromF7();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FromF7_message_member_array[1] = {
  {
    "inout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::FromF7, inout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FromF7_message_members = {
  "gakurobo_msgs::msg",  // message namespace
  "FromF7",  // message name
  1,  // number of fields
  sizeof(gakurobo_msgs::msg::FromF7),
  FromF7_message_member_array,  // message members
  FromF7_init_function,  // function to initialize message memory (memory has to be allocated)
  FromF7_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FromF7_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FromF7_message_members,
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
get_message_type_support_handle<gakurobo_msgs::msg::FromF7>()
{
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::FromF7_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gakurobo_msgs, msg, FromF7)() {
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::FromF7_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
