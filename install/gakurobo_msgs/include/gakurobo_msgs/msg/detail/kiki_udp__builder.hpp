// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gakurobo_msgs:msg/KikiUdp.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__KIKI_UDP__BUILDER_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__KIKI_UDP__BUILDER_HPP_

#include "gakurobo_msgs/msg/detail/kiki_udp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gakurobo_msgs
{

namespace msg
{

namespace builder
{

class Init_KikiUdp_emission
{
public:
  explicit Init_KikiUdp_emission(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  ::gakurobo_msgs::msg::KikiUdp emission(::gakurobo_msgs::msg::KikiUdp::_emission_type arg)
  {
    msg_.emission = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_elevator
{
public:
  explicit Init_KikiUdp_elevator(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_emission elevator(::gakurobo_msgs::msg::KikiUdp::_elevator_type arg)
  {
    msg_.elevator = std::move(arg);
    return Init_KikiUdp_emission(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_sairo_in_2
{
public:
  explicit Init_KikiUdp_sairo_in_2(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_elevator sairo_in_2(::gakurobo_msgs::msg::KikiUdp::_sairo_in_2_type arg)
  {
    msg_.sairo_in_2 = std::move(arg);
    return Init_KikiUdp_elevator(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_sairo_in_1
{
public:
  explicit Init_KikiUdp_sairo_in_1(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_sairo_in_2 sairo_in_1(::gakurobo_msgs::msg::KikiUdp::_sairo_in_1_type arg)
  {
    msg_.sairo_in_1 = std::move(arg);
    return Init_KikiUdp_sairo_in_2(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_collect
{
public:
  explicit Init_KikiUdp_collect(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_sairo_in_1 collect(::gakurobo_msgs::msg::KikiUdp::_collect_type arg)
  {
    msg_.collect = std::move(arg);
    return Init_KikiUdp_sairo_in_1(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_w4
{
public:
  explicit Init_KikiUdp_w4(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_collect w4(::gakurobo_msgs::msg::KikiUdp::_w4_type arg)
  {
    msg_.w4 = std::move(arg);
    return Init_KikiUdp_collect(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_w3
{
public:
  explicit Init_KikiUdp_w3(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_w4 w3(::gakurobo_msgs::msg::KikiUdp::_w3_type arg)
  {
    msg_.w3 = std::move(arg);
    return Init_KikiUdp_w4(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_w2
{
public:
  explicit Init_KikiUdp_w2(::gakurobo_msgs::msg::KikiUdp & msg)
  : msg_(msg)
  {}
  Init_KikiUdp_w3 w2(::gakurobo_msgs::msg::KikiUdp::_w2_type arg)
  {
    msg_.w2 = std::move(arg);
    return Init_KikiUdp_w3(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

class Init_KikiUdp_w1
{
public:
  Init_KikiUdp_w1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KikiUdp_w2 w1(::gakurobo_msgs::msg::KikiUdp::_w1_type arg)
  {
    msg_.w1 = std::move(arg);
    return Init_KikiUdp_w2(msg_);
  }

private:
  ::gakurobo_msgs::msg::KikiUdp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gakurobo_msgs::msg::KikiUdp>()
{
  return gakurobo_msgs::msg::builder::Init_KikiUdp_w1();
}

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__KIKI_UDP__BUILDER_HPP_
