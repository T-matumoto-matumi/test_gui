// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__PID__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__PID__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/pid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_Pid_kd
{
public:
  explicit Init_Pid_kd(::gakurobo_msgs::msg::Pid & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::Pid kd(::gakurobo_msgs::msg::Pid::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::Pid msg_;
};

class Init_Pid_ki
{
public:
  explicit Init_Pid_ki(::gakurobo_msgs::msg::Pid & msg)
  : msg_(msg)
  {}
  Init_Pid_kd ki(::gakurobo_msgs::msg::Pid::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_Pid_kd(msg_);
  }

private:
  ::gakurobo_msgs::msg::Pid msg_;
};

class Init_Pid_kp
{
public:
  Init_Pid_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pid_ki kp(::gakurobo_msgs::msg::Pid::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_Pid_ki(msg_);
  }

private:
  ::gakurobo_msgs::msg::Pid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::Pid>()
{
  return gakurobo_msgs::msg::builder::Init_Pid_kp();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__PID__BUILDER_HPP_
