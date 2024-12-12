// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/motors__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/motors__functions.h"
#include "robot_interfaces/msg/detail/motors__struct.h"


// Include directives for member types
// Member `steps`
// Member `dir`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__Motors__init(message_memory);
}

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_fini_function(void * message_memory)
{
  robot_interfaces__msg__Motors__fini(message_memory);
}

size_t robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__size_function__Motors__steps(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__steps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__steps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__fetch_function__Motors__steps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__steps(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__assign_function__Motors__steps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__steps(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__resize_function__Motors__steps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__size_function__Motors__dir(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__dir(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__dir(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__fetch_function__Motors__dir(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__dir(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__assign_function__Motors__dir(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__dir(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__resize_function__Motors__dir(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_member_array[2] = {
  {
    "steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Motors, steps),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__size_function__Motors__steps,  // size() function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__steps,  // get_const(index) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__steps,  // get(index) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__fetch_function__Motors__steps,  // fetch(index, &value) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__assign_function__Motors__steps,  // assign(index, value) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__resize_function__Motors__steps  // resize(index) function pointer
  },
  {
    "dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Motors, dir),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__size_function__Motors__dir,  // size() function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_const_function__Motors__dir,  // get_const(index) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__get_function__Motors__dir,  // get(index) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__fetch_function__Motors__dir,  // fetch(index, &value) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__assign_function__Motors__dir,  // assign(index, value) function pointer
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__resize_function__Motors__dir  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_members = {
  "robot_interfaces__msg",  // message namespace
  "Motors",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__msg__Motors),
  robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_member_array,  // message members
  robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_type_support_handle = {
  0,
  &robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, Motors)() {
  if (!robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__Motors__rosidl_typesupport_introspection_c__Motors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
