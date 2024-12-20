// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:srv/MoveMotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__STRUCT_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__srv__MoveMotor_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__srv__MoveMotor_Request __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveMotor_Request_
{
  using Type = MoveMotor_Request_<ContainerAllocator>;

  explicit MoveMotor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steps = 0ll;
      this->dir = false;
    }
  }

  explicit MoveMotor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__srv__MoveMotor_Request
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__srv__MoveMotor_Request
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMotor_Request_ & other) const
  {
    if (this->steps != other.steps) {
      return false;
    }
    if (this->dir != other.dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMotor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMotor_Request_

// alias to use template instance with default allocator
using MoveMotor_Request =
  robot_interfaces::srv::MoveMotor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__srv__MoveMotor_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__srv__MoveMotor_Response __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveMotor_Response_
{
  using Type = MoveMotor_Response_<ContainerAllocator>;

  explicit MoveMotor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_location = 0.0;
    }
  }

  explicit MoveMotor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_location = 0.0;
    }
  }

  // field types and members
  using _new_location_type =
    double;
  _new_location_type new_location;

  // setters for named parameter idiom
  Type & set__new_location(
    const double & _arg)
  {
    this->new_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__srv__MoveMotor_Response
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__srv__MoveMotor_Response
    std::shared_ptr<robot_interfaces::srv::MoveMotor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveMotor_Response_ & other) const
  {
    if (this->new_location != other.new_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveMotor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveMotor_Response_

// alias to use template instance with default allocator
using MoveMotor_Response =
  robot_interfaces::srv::MoveMotor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_interfaces

namespace robot_interfaces
{

namespace srv
{

struct MoveMotor
{
  using Request = robot_interfaces::srv::MoveMotor_Request;
  using Response = robot_interfaces::srv::MoveMotor_Response;
};

}  // namespace srv

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__STRUCT_HPP_
