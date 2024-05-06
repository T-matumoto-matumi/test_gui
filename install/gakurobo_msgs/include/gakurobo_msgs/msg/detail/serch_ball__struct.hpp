// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/SerchBall.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__SerchBall __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__SerchBall __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerchBall_
{
  using Type = SerchBall_<ContainerAllocator>;

  explicit SerchBall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get = false;
      this->l = 0.0;
      this->arg = 0.0;
    }
  }

  explicit SerchBall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get = false;
      this->l = 0.0;
      this->arg = 0.0;
    }
  }

  // field types and members
  using _get_type =
    bool;
  _get_type get;
  using _l_type =
    double;
  _l_type l;
  using _arg_type =
    double;
  _arg_type arg;

  // setters for named parameter idiom
  Type & set__get(
    const bool & _arg)
  {
    this->get = _arg;
    return *this;
  }
  Type & set__l(
    const double & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__arg(
    const double & _arg)
  {
    this->arg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::SerchBall_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::SerchBall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::SerchBall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::SerchBall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__SerchBall
    std::shared_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__SerchBall
    std::shared_ptr<gakurobo_msgs::msg::SerchBall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerchBall_ & other) const
  {
    if (this->get != other.get) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->arg != other.arg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerchBall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerchBall_

// alias to use template instance with default allocator
using SerchBall =
  gakurobo_msgs::msg::SerchBall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__SERCH_BALL__STRUCT_HPP_
