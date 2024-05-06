// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/FromF7.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__FromF7 __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__FromF7 __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FromF7_
{
  using Type = FromF7_<ContainerAllocator>;

  explicit FromF7_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inout = false;
    }
  }

  explicit FromF7_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inout = false;
    }
  }

  // field types and members
  using _inout_type =
    bool;
  _inout_type inout;

  // setters for named parameter idiom
  Type & set__inout(
    const bool & _arg)
  {
    this->inout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::FromF7_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::FromF7_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::FromF7_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::FromF7_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__FromF7
    std::shared_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__FromF7
    std::shared_ptr<gakurobo_msgs::msg::FromF7_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FromF7_ & other) const
  {
    if (this->inout != other.inout) {
      return false;
    }
    return true;
  }
  bool operator!=(const FromF7_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FromF7_

// alias to use template instance with default allocator
using FromF7 =
  gakurobo_msgs::msg::FromF7_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__FROM_F7__STRUCT_HPP_
