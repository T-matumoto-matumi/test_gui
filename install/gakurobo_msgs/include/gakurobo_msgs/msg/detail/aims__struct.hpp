// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gakurobo_msgs:msg/Aims.idl
// generated code does not contain a copyright notice

#ifndef GAKUROBO_MSGS__MSG__DETAIL__AIMS__STRUCT_HPP_
#define GAKUROBO_MSGS__MSG__DETAIL__AIMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gakurobo_msgs__msg__Aims __attribute__((deprecated))
#else
# define DEPRECATED__gakurobo_msgs__msg__Aims __declspec(deprecated)
#endif

namespace gakurobo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Aims_
{
  using Type = Aims_<ContainerAllocator>;

  explicit Aims_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->aim_arg_parallel = 0.0f;
      this->aim_arg_rotation = 0.0f;
    }
  }

  explicit Aims_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->aim_arg_parallel = 0.0f;
      this->aim_arg_rotation = 0.0f;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _aim_arg_parallel_type =
    float;
  _aim_arg_parallel_type aim_arg_parallel;
  using _aim_arg_rotation_type =
    float;
  _aim_arg_rotation_type aim_arg_rotation;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__aim_arg_parallel(
    const float & _arg)
  {
    this->aim_arg_parallel = _arg;
    return *this;
  }
  Type & set__aim_arg_rotation(
    const float & _arg)
  {
    this->aim_arg_rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gakurobo_msgs::msg::Aims_<ContainerAllocator> *;
  using ConstRawPtr =
    const gakurobo_msgs::msg::Aims_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::Aims_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gakurobo_msgs::msg::Aims_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gakurobo_msgs__msg__Aims
    std::shared_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gakurobo_msgs__msg__Aims
    std::shared_ptr<gakurobo_msgs::msg::Aims_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Aims_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->aim_arg_parallel != other.aim_arg_parallel) {
      return false;
    }
    if (this->aim_arg_rotation != other.aim_arg_rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Aims_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Aims_

// alias to use template instance with default allocator
using Aims =
  gakurobo_msgs::msg::Aims_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gakurobo_msgs

#endif  // GAKUROBO_MSGS__MSG__DETAIL__AIMS__STRUCT_HPP_
