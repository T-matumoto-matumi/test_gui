// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/SerchSairo.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/serch_sairo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_SerchSairo_blue
{
public:
  explicit Init_SerchSairo_blue(::gakurobo_msgs::msg::SerchSairo & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::SerchSairo blue(::gakurobo_msgs::msg::SerchSairo::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::SerchSairo msg_;
};

class Init_SerchSairo_red
{
public:
  Init_SerchSairo_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerchSairo_blue red(::gakurobo_msgs::msg::SerchSairo::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_SerchSairo_blue(msg_);
  }

private:
  ::gakurobo_msgs::msg::SerchSairo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::SerchSairo>()
{
  return gakurobo_msgs::msg::builder::Init_SerchSairo_red();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__BUILDER_HPP_
