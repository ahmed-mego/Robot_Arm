// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steps'
// Member 'dir'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Motors in the package robot_interfaces.
typedef struct robot_interfaces__msg__Motors
{
  rosidl_runtime_c__int64__Sequence steps;
  rosidl_runtime_c__boolean__Sequence dir;
} robot_interfaces__msg__Motors;

// Struct for a sequence of robot_interfaces__msg__Motors.
typedef struct robot_interfaces__msg__Motors__Sequence
{
  robot_interfaces__msg__Motors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Motors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_
