// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/FromF7.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/from_f7__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_FromF7_inout
{
public:
  Init_FromF7_inout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gakurobo_msgs::msg::FromF7 inout(::gakurobo_msgs::msg::FromF7::_inout_type arg)
  {
    msg_.inout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::FromF7 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::FromF7>()
{
  return gakurobo_msgs::msg::builder::Init_FromF7_inout();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__BUILDER_HPP_
