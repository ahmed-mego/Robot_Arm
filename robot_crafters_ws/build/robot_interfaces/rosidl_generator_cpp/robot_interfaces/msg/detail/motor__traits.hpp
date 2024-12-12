// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motor & msg,
  std::ostream & out)
{
  out << "{";
  // member: steps
  {
    out << "steps: ";
    rosidl_generator_traits::value_to_yaml(msg.steps, out);
    out << ", ";
  }

  // member: dir
  {
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steps: ";
    rosidl_generator_traits::value_to_yaml(msg.steps, out);
    out << "\n";
  }

  // member: dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Motor & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Motor>()
{
  return "robot_interfaces::msg::Motor";
}

template<>
inline const char * name<robot_interfaces::msg::Motor>()
{
  return "robot_interfaces/msg/Motor";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::msg::Motor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR__TRAITS_HPP_
