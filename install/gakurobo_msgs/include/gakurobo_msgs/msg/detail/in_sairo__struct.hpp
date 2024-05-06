// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/InSairo.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__InSairo __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__InSairo __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InSairo_
{
  using Type = InSairo_<ContainerAllocator>;

  explicit InSairo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo1.begin(), this->sairo1.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo2.begin(), this->sairo2.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo3.begin(), this->sairo3.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo4.begin(), this->sairo4.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo5.begin(), this->sairo5.end(), 0);
    }
  }

  explicit InSairo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sairo1(_alloc),
    sairo2(_alloc),
    sairo3(_alloc),
    sairo4(_alloc),
    sairo5(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo1.begin(), this->sairo1.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo2.begin(), this->sairo2.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo3.begin(), this->sairo3.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo4.begin(), this->sairo4.end(), 0);
      std::fill<typename std::array<int8_t, 3>::iterator, int8_t>(this->sairo5.begin(), this->sairo5.end(), 0);
    }
  }

  // field types and members
  using _sairo1_type =
    std::array<int8_t, 3>;
  _sairo1_type sairo1;
  using _sairo2_type =
    std::array<int8_t, 3>;
  _sairo2_type sairo2;
  using _sairo3_type =
    std::array<int8_t, 3>;
  _sairo3_type sairo3;
  using _sairo4_type =
    std::array<int8_t, 3>;
  _sairo4_type sairo4;
  using _sairo5_type =
    std::array<int8_t, 3>;
  _sairo5_type sairo5;

  // setters for named parameter idiom
  Type & set__sairo1(
    const std::array<int8_t, 3> & _arg)
  {
    this->sairo1 = _arg;
    return *this;
  }
  Type & set__sairo2(
    const std::array<int8_t, 3> & _arg)
  {
    this->sairo2 = _arg;
    return *this;
  }
  Type & set__sairo3(
    const std::array<int8_t, 3> & _arg)
  {
    this->sairo3 = _arg;
    return *this;
  }
  Type & set__sairo4(
    const std::array<int8_t, 3> & _arg)
  {
    this->sairo4 = _arg;
    return *this;
  }
  Type & set__sairo5(
    const std::array<int8_t, 3> & _arg)
  {
    this->sairo5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::InSairo_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::InSairo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::InSairo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::InSairo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__InSairo
    std::shared_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__InSairo
    std::shared_ptr<gakurobo_msgs::msg::InSairo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InSairo_ & other) const
  {
    if (this->sairo1 != other.sairo1) {
      return false;
    }
    if (this->sairo2 != other.sairo2) {
      return false;
    }
    if (this->sairo3 != other.sairo3) {
      return false;
    }
    if (this->sairo4 != other.sairo4) {
      return false;
    }
    if (this->sairo5 != other.sairo5) {
      return false;
    }
    return true;
  }
  bool operator!=(const InSairo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InSairo_

// alias to use template instance with default allocator
using InSairo =
  gakurobo_msgs::msg::InSairo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__IN_SAIRO__STRUCT_HPP_
