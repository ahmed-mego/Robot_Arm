// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_interfaces:srv/MoveMotor.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/srv/detail/move_motor__struct.h"
#include "robot_interfaces/srv/detail/move_motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_interfaces__srv__move_motor__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_interfaces.srv._move_motor.MoveMotor_Request", full_classname_dest, 50) == 0);
  }
  robot_interfaces__srv__MoveMotor_Request * ros_message = _ros_message;
  {  // steps
    PyObject * field = PyObject_GetAttrString(_pymsg, "steps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steps = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dir = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_interfaces__srv__move_motor__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveMotor_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_interfaces.srv._move_motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveMotor_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_interfaces__srv__MoveMotor_Request * ros_message = (robot_interfaces__srv__MoveMotor_Request *)raw_ros_message;
  {  // steps
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->steps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dir ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "robot_interfaces/srv/detail/move_motor__struct.h"
// already included above
// #include "robot_interfaces/srv/detail/move_motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_interfaces__srv__move_motor__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_interfaces.srv._move_motor.MoveMotor_Response", full_classname_dest, 51) == 0);
  }
  robot_interfaces__srv__MoveMotor_Response * ros_message = _ros_message;
  {  // new_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_location");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_location = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_interfaces__srv__move_motor__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveMotor_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_interfaces.srv._move_motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveMotor_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_interfaces__srv__MoveMotor_Response * ros_message = (robot_interfaces__srv__MoveMotor_Response *)raw_ros_message;
  {  // new_location
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
