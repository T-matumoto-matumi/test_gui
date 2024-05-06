// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gakurobo_msgs:msg/InSairo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gakurobo_msgs/msg/detail/in_sairo__struct.hpp"
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

void InSairo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gakurobo_msgs::msg::InSairo(_init);
}

void InSairo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gakurobo_msgs::msg::InSairo *>(message_memory);
  typed_message->~InSairo();
}

size_t size_function__InSairo__sairo1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InSairo__sairo1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InSairo__sairo1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__InSairo__sairo2(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InSairo__sairo2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InSairo__sairo2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__InSairo__sairo3(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InSairo__sairo3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InSairo__sairo3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__InSairo__sairo4(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InSairo__sairo4(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InSairo__sairo4(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__InSairo__sairo5(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InSairo__sairo5(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InSairo__sairo5(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InSairo_message_member_array[5] = {
  {
    "sairo1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::InSairo, sairo1),  // bytes offset in struct
    nullptr,  // default value
    size_function__InSairo__sairo1,  // size() function pointer
    get_const_function__InSairo__sairo1,  // get_const(index) function pointer
    get_function__InSairo__sairo1,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sairo2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::InSairo, sairo2),  // bytes offset in struct
    nullptr,  // default value
    size_function__InSairo__sairo2,  // size() function pointer
    get_const_function__InSairo__sairo2,  // get_const(index) function pointer
    get_function__InSairo__sairo2,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sairo3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::InSairo, sairo3),  // bytes offset in struct
    nullptr,  // default value
    size_function__InSairo__sairo3,  // size() function pointer
    get_const_function__InSairo__sairo3,  // get_const(index) function pointer
    get_function__InSairo__sairo3,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sairo4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::InSairo, sairo4),  // bytes offset in struct
    nullptr,  // default value
    size_function__InSairo__sairo4,  // size() function pointer
    get_const_function__InSairo__sairo4,  // get_const(index) function pointer
    get_function__InSairo__sairo4,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sairo5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(gakurobo_msgs::msg::InSairo, sairo5),  // bytes offset in struct
    nullptr,  // default value
    size_function__InSairo__sairo5,  // size() function pointer
    get_const_function__InSairo__sairo5,  // get_const(index) function pointer
    get_function__InSairo__sairo5,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InSairo_message_members = {
  "gakurobo_msgs::msg",  // message namespace
  "InSairo",  // message name
  5,  // number of fields
  sizeof(gakurobo_msgs::msg::InSairo),
  InSairo_message_member_array,  // message members
  InSairo_init_function,  // function to initialize message memory (memory has to be allocated)
  InSairo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InSairo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InSairo_message_members,
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
get_message_type_support_handle<gakurobo_msgs::msg::InSairo>()
{
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::InSairo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gakurobo_msgs, msg, InSairo)() {
  return &::gakurobo_msgs::msg::rosidl_typesupport_introspection_cpp::InSairo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
