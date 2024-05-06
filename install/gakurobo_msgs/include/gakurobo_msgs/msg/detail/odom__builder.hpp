// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/Odom.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__ODOM__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__ODOM__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/odom__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_Odom_yaw
{
public:
  explicit Init_Odom_yaw(::gakurobo_msgs::msg::Odom & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::Odom yaw(::gakurobo_msgs::msg::Odom::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::Odom msg_;
};

class Init_Odom_y
{
public:
  explicit Init_Odom_y(::gakurobo_msgs::msg::Odom & msg)
  : msg_(msg)
  {}
  Init_Odom_yaw y(::gakurobo_msgs::msg::Odom::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Odom_yaw(msg_);
  }

private:
  ::gakurobo_msgs::msg::Odom msg_;
};

class Init_Odom_x
{
public:
  Init_Odom_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odom_y x(::gakurobo_msgs::msg::Odom::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Odom_y(msg_);
  }

private:
  ::gakurobo_msgs::msg::Odom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::Odom>()
{
  return gakurobo_msgs::msg::builder::Init_Odom_x();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__ODOM__BUILDER_HPP_
