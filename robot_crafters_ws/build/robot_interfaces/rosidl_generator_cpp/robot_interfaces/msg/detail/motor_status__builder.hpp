// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_my_location
{
public:
  Init_MotorStatus_my_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::msg::MotorStatus my_location(::robot_interfaces::msg::MotorStatus::_my_location_type arg)
  {
    msg_.my_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::MotorStatus>()
{
  return robot_interfaces::msg::builder::Init_MotorStatus_my_location();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
