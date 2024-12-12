// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Motors_dir
{
public:
  explicit Init_Motors_dir(::robot_interfaces::msg::Motors & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Motors dir(::robot_interfaces::msg::Motors::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Motors msg_;
};

class Init_Motors_steps
{
public:
  Init_Motors_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motors_dir steps(::robot_interfaces::msg::Motors::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return Init_Motors_dir(msg_);
  }

private:
  ::robot_interfaces::msg::Motors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Motors>()
{
  return robot_interfaces::msg::builder::Init_Motors_steps();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_
