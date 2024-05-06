// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/SerchSairo.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__SerchSairo __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__SerchSairo __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerchSairo_
{
  using Type = SerchSairo_<ContainerAllocator>;

  explicit SerchSairo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->blue = 0ll;
    }
  }

  explicit SerchSairo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->blue = 0ll;
    }
  }

  // field types and members
  using _red_type =
    int64_t;
  _red_type red;
  using _blue_type =
    int64_t;
  _blue_type blue;

  // setters for named parameter idiom
  Type & set__red(
    const int64_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__blue(
    const int64_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__SerchSairo
    std::shared_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__SerchSairo
    std::shared_ptr<gakurobo_msgs::msg::SerchSairo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerchSairo_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerchSairo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerchSairo_

// alias to use template instance with default allocator
using SerchSairo =
  gakurobo_msgs::msg::SerchSairo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_SAIRO__STRUCT_HPP_
