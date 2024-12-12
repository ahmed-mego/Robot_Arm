// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__MotorStatus __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_location = 0.0;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_location = 0.0;
    }
  }

  // field types and members
  using _my_location_type =
    double;
  _my_location_type my_location;

  // setters for named parameter idiom
  Type & set__my_location(
    const double & _arg)
  {
    this->my_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__MotorStatus
    std::shared_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__MotorStatus
    std::shared_ptr<robot_interfaces::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->my_location != other.my_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  robot_interfaces::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
