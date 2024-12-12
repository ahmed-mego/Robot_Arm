// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Motor __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steps = 0ll;
      this->dir = false;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steps = 0ll;
      this->dir = false;
    }
  }

  // field types and members
  using _steps_type =
    int64_t;
  _steps_type steps;
  using _dir_type =
    bool;
  _dir_type dir;

  // setters for named parameter idiom
  Type & set__steps(
    const int64_t & _arg)
  {
    this->steps = _arg;
    return *this;
  }
  Type & set__dir(
    const bool & _arg)
  {
    this->dir = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Motor
    std::shared_ptr<robot_interfaces::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Motor
    std::shared_ptr<robot_interfaces::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->steps != other.steps) {
      return false;
    }
    if (this->dir != other.dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  robot_interfaces::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_
