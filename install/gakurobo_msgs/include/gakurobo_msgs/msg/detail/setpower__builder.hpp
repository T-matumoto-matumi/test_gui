// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/Setpower.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/setpower__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_Setpower_w4
{
public:
  explicit Init_Setpower_w4(::gakurobo_msgs::msg::Setpower & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::Setpower w4(::gakurobo_msgs::msg::Setpower::_w4_type arg)
  {
    msg_.w4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::Setpower msg_;
};

class Init_Setpower_w3
{
public:
  explicit Init_Setpower_w3(::gakurobo_msgs::msg::Setpower & msg)
  : msg_(msg)
  {}
  Init_Setpower_w4 w3(::gakurobo_msgs::msg::Setpower::_w3_type arg)
  {
    msg_.w3 = std::move(arg);
    return Init_Setpower_w4(msg_);
  }

private:
  ::gakurobo_msgs::msg::Setpower msg_;
};

class Init_Setpower_w2
{
public:
  explicit Init_Setpower_w2(::gakurobo_msgs::msg::Setpower & msg)
  : msg_(msg)
  {}
  Init_Setpower_w3 w2(::gakurobo_msgs::msg::Setpower::_w2_type arg)
  {
    msg_.w2 = std::move(arg);
    return Init_Setpower_w3(msg_);
  }

private:
  ::gakurobo_msgs::msg::Setpower msg_;
};

class Init_Setpower_w1
{
public:
  Init_Setpower_w1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Setpower_w2 w1(::gakurobo_msgs::msg::Setpower::_w1_type arg)
  {
    msg_.w1 = std::move(arg);
    return Init_Setpower_w2(msg_);
  }

private:
  ::gakurobo_msgs::msg::Setpower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::Setpower>()
{
  return gakurobo_msgs::msg::builder::Init_Setpower_w1();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__BUILDER_HPP_
