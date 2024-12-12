// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motor in the package robot_interfaces.
typedef struct robot_interfaces__msg__Motor
{
  int64_t steps;
  bool dir;
} robot_interfaces__msg__Motor;

// Struct for a sequence of robot_interfaces__msg__Motor.
typedef struct robot_interfaces__msg__Motor__Sequence
{
  robot_interfaces__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR__STRUCT_H_
