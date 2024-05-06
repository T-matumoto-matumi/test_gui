// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/Setpower.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__Setpower __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__Setpower __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Setpower_
{
  using Type = Setpower_<ContainerAllocator>;

  explicit Setpower_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->w1 = 0.0f;
      this->w2 = 0.0f;
      this->w3 = 0.0f;
      this->w4 = 0.0f;
    }
  }

  explicit Setpower_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->w1 = 0.0f;
      this->w2 = 0.0f;
      this->w3 = 0.0f;
      this->w4 = 0.0f;
    }
  }

  // field types and members
  using _w1_type =
    float;
  _w1_type w1;
  using _w2_type =
    float;
  _w2_type w2;
  using _w3_type =
    float;
  _w3_type w3;
  using _w4_type =
    float;
  _w4_type w4;

  // setters for named parameter idiom
  Type & set__w1(
    const float & _arg)
  {
    this->w1 = _arg;
    return *this;
  }
  Type & set__w2(
    const float & _arg)
  {
    this->w2 = _arg;
    return *this;
  }
  Type & set__w3(
    const float & _arg)
  {
    this->w3 = _arg;
    return *this;
  }
  Type & set__w4(
    const float & _arg)
  {
    this->w4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::Setpower_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::Setpower_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::Setpower_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::Setpower_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__Setpower
    std::shared_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__Setpower
    std::shared_ptr<gakurobo_msgs::msg::Setpower_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Setpower_ & other) const
  {
    if (this->w1 != other.w1) {
      return false;
    }
    if (this->w2 != other.w2) {
      return false;
    }
    if (this->w3 != other.w3) {
      return false;
    }
    if (this->w4 != other.w4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Setpower_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Setpower_

// alias to use template instance with default allocator
using Setpower =
  gakurobo_msgs::msg::Setpower_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SETPOWER__STRUCT_HPP_
