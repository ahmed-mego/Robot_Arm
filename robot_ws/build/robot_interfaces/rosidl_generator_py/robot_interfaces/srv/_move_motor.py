# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:srv/MoveMotor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveMotor_Request(type):
    """Metaclass of message 'MoveMotor_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.MoveMotor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_motor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_motor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_motor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_motor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_motor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveMotor_Request(metaclass=Metaclass_MoveMotor_Request):
    """Message class 'MoveMotor_Request'."""

    __slots__ = [
        '_steps',
        '_dir',
    ]

    _fields_and_field_types = {
        'steps': 'int64',
        'dir': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.steps = kwargs.get('steps', int())
        self.dir = kwargs.get('dir', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.steps != other.steps:
            return False
        if self.dir != other.dir:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def steps(self):
        """Message field 'steps'."""
        return self._steps

    @steps.setter
    def steps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steps' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'steps' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._steps = value

    @builtins.property  # noqa: A003
    def dir(self):  # noqa: A003
        """Message field 'dir'."""
        return self._dir

    @dir.setter  # noqa: A003
    def dir(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dir' field must be of type 'bool'"
        self._dir = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveMotor_Response(type):
    """Metaclass of message 'MoveMotor_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.MoveMotor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_motor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_motor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_motor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_motor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_motor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveMotor_Response(metaclass=Metaclass_MoveMotor_Response):
    """Message class 'MoveMotor_Response'."""

    __slots__ = [
        '_new_location',
    ]

    _fields_and_field_types = {
        'new_location': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.new_location = kwargs.get('new_location', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.new_location != other.new_location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def new_location(self):
        """Message field 'new_location'."""
        return self._new_location

    @new_location.setter
    def new_location(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_location' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'new_location' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._new_location = value


class Metaclass_MoveMotor(type):
    """Metaclass of service 'MoveMotor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.MoveMotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_motor

            from robot_interfaces.srv import _move_motor
            if _move_motor.Metaclass_MoveMotor_Request._TYPE_SUPPORT is None:
                _move_motor.Metaclass_MoveMotor_Request.__import_type_support__()
            if _move_motor.Metaclass_MoveMotor_Response._TYPE_SUPPORT is None:
                _move_motor.Metaclass_MoveMotor_Response.__import_type_support__()


class MoveMotor(metaclass=Metaclass_MoveMotor):
    from robot_interfaces.srv._move_motor import MoveMotor_Request as Request
    from robot_interfaces.srv._move_motor import MoveMotor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
