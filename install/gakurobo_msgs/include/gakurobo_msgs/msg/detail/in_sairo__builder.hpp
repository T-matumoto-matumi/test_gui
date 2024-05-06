// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/InSairo.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/in_sairo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_InSairo_sairo5
{
public:
  explicit Init_InSairo_sairo5(::gakurobo_msgs::msg::InSairo & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::InSairo sairo5(::gakurobo_msgs::msg::InSairo::_sairo5_type arg)
  {
    msg_.sairo5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::InSairo msg_;
};

class Init_InSairo_sairo4
{
public:
  explicit Init_InSairo_sairo4(::gakurobo_msgs::msg::InSairo & msg)
  : msg_(msg)
  {}
  Init_InSairo_sairo5 sairo4(::gakurobo_msgs::msg::InSairo::_sairo4_type arg)
  {
    msg_.sairo4 = std::move(arg);
    return Init_InSairo_sairo5(msg_);
  }

private:
  ::gakurobo_msgs::msg::InSairo msg_;
};

class Init_InSairo_sairo3
{
public:
  explicit Init_InSairo_sairo3(::gakurobo_msgs::msg::InSairo & msg)
  : msg_(msg)
  {}
  Init_InSairo_sairo4 sairo3(::gakurobo_msgs::msg::InSairo::_sairo3_type arg)
  {
    msg_.sairo3 = std::move(arg);
    return Init_InSairo_sairo4(msg_);
  }

private:
  ::gakurobo_msgs::msg::InSairo msg_;
};

class Init_InSairo_sairo2
{
public:
  explicit Init_InSairo_sairo2(::gakurobo_msgs::msg::InSairo & msg)
  : msg_(msg)
  {}
  Init_InSairo_sairo3 sairo2(::gakurobo_msgs::msg::InSairo::_sairo2_type arg)
  {
    msg_.sairo2 = std::move(arg);
    return Init_InSairo_sairo3(msg_);
  }

private:
  ::gakurobo_msgs::msg::InSairo msg_;
};

class Init_InSairo_sairo1
{
public:
  Init_InSairo_sairo1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InSairo_sairo2 sairo1(::gakurobo_msgs::msg::InSairo::_sairo1_type arg)
  {
    msg_.sairo1 = std::move(arg);
    return Init_InSairo_sairo2(msg_);
  }

private:
  ::gakurobo_msgs::msg::InSairo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::InSairo>()
{
  return gakurobo_msgs::msg::builder::Init_InSairo_sairo1();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__BUILDER_HPP_
