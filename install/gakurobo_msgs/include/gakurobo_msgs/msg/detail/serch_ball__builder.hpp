// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/SerchBall.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/serch_ball__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_SerchBall_arg
{
public:
  explicit Init_SerchBall_arg(::gakurobo_msgs::msg::SerchBall & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::SerchBall arg(::gakurobo_msgs::msg::SerchBall::_arg_type arg)
  {
    msg_.arg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::SerchBall msg_;
};

class Init_SerchBall_l
{
public:
  explicit Init_SerchBall_l(::gakurobo_msgs::msg::SerchBall & msg)
  : msg_(msg)
  {}
  Init_SerchBall_arg l(::gakurobo_msgs::msg::SerchBall::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_SerchBall_arg(msg_);
  }

private:
  ::gakurobo_msgs::msg::SerchBall msg_;
};

class Init_SerchBall_get
{
public:
  Init_SerchBall_get()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerchBall_l get(::gakurobo_msgs::msg::SerchBall::_get_type arg)
  {
    msg_.get = std::move(arg);
    return Init_SerchBall_l(msg_);
  }

private:
  ::gakurobo_msgs::msg::SerchBall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::SerchBall>()
{
  return gakurobo_msgs::msg::builder::Init_SerchBall_get();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__BUILDER_HPP_
