// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_interfaces/msg/detail/motors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Motors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_interfaces::msg::Motors(_init);
}

void Motors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_interfaces::msg::Motors *>(message_memory);
  typed_message->~Motors();
}

size_t size_function__Motors__steps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Motors__steps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Motors__steps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Motors__steps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Motors__steps(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Motors__steps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Motors__steps(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__Motors__steps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Motors__dir(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__Motors__dir(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__Motors__dir(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__Motors__dir(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Motors_message_member_array[2] = {
  {
    "steps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::Motors, steps),  // bytes offset in struct
    nullptr,  // default value
    size_function__Motors__steps,  // size() function pointer
    get_const_function__Motors__steps,  // get_const(index) function pointer
    get_function__Motors__steps,  // get(index) function pointer
    fetch_function__Motors__steps,  // fetch(index, &value) function pointer
    assign_function__Motors__steps,  // assign(index, value) function pointer
    resize_function__Motors__steps  // resize(index) function pointer
  },
  {
    "dir",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::Motors, dir),  // bytes offset in struct
    nullptr,  // default value
    size_function__Motors__dir,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__Motors__dir,  // fetch(index, &value) function pointer
    assign_function__Motors__dir,  // assign(index, value) function pointer
    resize_function__Motors__dir  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Motors_message_members = {
  "robot_interfaces::msg",  // message namespace
  "Motors",  // message name
  2,  // number of fields
  sizeof(robot_interfaces::msg::Motors),
  Motors_message_member_array,  // message members
  Motors_init_function,  // function to initialize message memory (memory has to be allocated)
  Motors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Motors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Motors_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::msg::Motors>()
{
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::Motors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, msg, Motors)() {
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::Motors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
