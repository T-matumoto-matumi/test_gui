// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gakurobo_msgs:msg/SerchSairo.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__TRAITS_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__TRAITS_HPP_

#include "gakurobo_msgs/msg/detail/serch_sairo__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gakurobo_msgs::msg::SerchSairo>()
{
  return "gakurobo_msgs::msg::SerchSairo";
}

template<>
inline const char * name<gakurobo_msgs::msg::SerchSairo>()
{
  return "gakurobo_msgs/msg/SerchSairo";
}

template<>
struct has_fixed_size<gakurobo_msgs::msg::SerchSairo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gakurobo_msgs::msg::SerchSairo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gakurobo_msgs::msg::SerchSairo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__TRAITS_HPP_
