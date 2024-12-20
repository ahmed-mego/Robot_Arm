// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/MoveMotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/move_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveMotor_Request_dir
{
public:
  explicit Init_MoveMotor_Request_dir(::robot_interfaces::srv::MoveMotor_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::MoveMotor_Request dir(::robot_interfaces::srv::MoveMotor_Request::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::MoveMotor_Request msg_;
};

class Init_MoveMotor_Request_steps
{
public:
  Init_MoveMotor_Request_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveMotor_Request_dir steps(::robot_interfaces::srv::MoveMotor_Request::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return Init_MoveMotor_Request_dir(msg_);
  }

private:
  ::robot_interfaces::srv::MoveMotor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::MoveMotor_Request>()
{
  return robot_interfaces::srv::builder::Init_MoveMotor_Request_steps();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveMotor_Response_new_location
{
public:
  Init_MoveMotor_Response_new_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::srv::MoveMotor_Response new_location(::robot_interfaces::srv::MoveMotor_Response::_new_location_type arg)
  {
    msg_.new_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::MoveMotor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::MoveMotor_Response>()
{
  return robot_interfaces::srv::builder::Init_MoveMotor_Response_new_location();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__BUILDER_HPP_
