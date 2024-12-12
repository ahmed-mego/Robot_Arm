// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:srv/MoveMotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__TRAITS_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/srv/detail/move_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveMotor_Request & msg,
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
  const MoveMotor_Request & msg,
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

inline std::string to_yaml(const MoveMotor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::srv::MoveMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::MoveMotor_Request & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::MoveMotor_Request>()
{
  return "robot_interfaces::srv::MoveMotor_Request";
}

template<>
inline const char * name<robot_interfaces::srv::MoveMotor_Request>()
{
  return "robot_interfaces/srv/MoveMotor_Request";
}

template<>
struct has_fixed_size<robot_interfaces::srv::MoveMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::MoveMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::MoveMotor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveMotor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_location
  {
    out << "new_location: ";
    rosidl_generator_traits::value_to_yaml(msg.new_location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_location: ";
    rosidl_generator_traits::value_to_yaml(msg.new_location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveMotor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::srv::MoveMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::MoveMotor_Response & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::MoveMotor_Response>()
{
  return "robot_interfaces::srv::MoveMotor_Response";
}

template<>
inline const char * name<robot_interfaces::srv::MoveMotor_Response>()
{
  return "robot_interfaces/srv/MoveMotor_Response";
}

template<>
struct has_fixed_size<robot_interfaces::srv::MoveMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::MoveMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::MoveMotor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::MoveMotor>()
{
  return "robot_interfaces::srv::MoveMotor";
}

template<>
inline const char * name<robot_interfaces::srv::MoveMotor>()
{
  return "robot_interfaces/srv/MoveMotor";
}

template<>
struct has_fixed_size<robot_interfaces::srv::MoveMotor>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::srv::MoveMotor_Request>::value &&
    has_fixed_size<robot_interfaces::srv::MoveMotor_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::srv::MoveMotor>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::srv::MoveMotor_Request>::value &&
    has_bounded_size<robot_interfaces::srv::MoveMotor_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::srv::MoveMotor>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::srv::MoveMotor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::srv::MoveMotor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__SRV__DETAIL__MOVE_MOTOR__TRAITS_HPP_
