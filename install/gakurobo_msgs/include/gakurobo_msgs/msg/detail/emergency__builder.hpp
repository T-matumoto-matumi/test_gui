// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/Emergency.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/emergency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_Emergency_emergency
{
public:
  Init_Emergency_emergency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gakurobo_msgs::msg::Emergency emergency(::gakurobo_msgs::msg::Emergency::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::Emergency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::Emergency>()
{
  return gakurobo_msgs::msg::builder::Init_Emergency_emergency();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
