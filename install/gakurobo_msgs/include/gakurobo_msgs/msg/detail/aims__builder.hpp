// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/Aims.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__AIMS__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__AIMS__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/aims__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_Aims_aim_arg_rotation
{
public:
  explicit Init_Aims_aim_arg_rotation(::gakurobo_msgs::msg::Aims & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::Aims aim_arg_rotation(::gakurobo_msgs::msg::Aims::_aim_arg_rotation_type arg)
  {
    msg_.aim_arg_rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::Aims msg_;
};

class Init_Aims_aim_arg_parallel
{
public:
  explicit Init_Aims_aim_arg_parallel(::gakurobo_msgs::msg::Aims & msg)
  : msg_(msg)
  {}
  Init_Aims_aim_arg_rotation aim_arg_parallel(::gakurobo_msgs::msg::Aims::_aim_arg_parallel_type arg)
  {
    msg_.aim_arg_parallel = std::move(arg);
    return Init_Aims_aim_arg_rotation(msg_);
  }

private:
  ::gakurobo_msgs::msg::Aims msg_;
};

class Init_Aims_yaw
{
public:
  Init_Aims_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Aims_aim_arg_parallel yaw(::gakurobo_msgs::msg::Aims::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Aims_aim_arg_parallel(msg_);
  }

private:
  ::gakurobo_msgs::msg::Aims msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::Aims>()
{
  return gakurobo_msgs::msg::builder::Init_Aims_yaw();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__AIMS__BUILDER_HPP_
