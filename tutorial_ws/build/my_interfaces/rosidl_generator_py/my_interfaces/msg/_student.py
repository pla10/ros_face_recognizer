# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:msg/Student.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Student(type):
    """Metaclass of message 'Student'."""

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
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.msg.Student')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__student
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__student
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__student
            cls._TYPE_SUPPORT = module.type_support_msg__msg__student
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__student

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME__DEFAULT': 'Yiming',
        }

    @property
    def NAME__DEFAULT(cls):
        """Return default value for message field 'name'."""
        return 'Yiming'


class Student(metaclass=Metaclass_Student):
    """Message class 'Student'."""

    __slots__ = [
        '_name',
        '_surname',
        '_score',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'surname': 'string',
        'score': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get(
            'name', Student.NAME__DEFAULT)
        self.surname = kwargs.get('surname', str())
        self.score = kwargs.get('score', int())

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
        if self.name != other.name:
            return False
        if self.surname != other.surname:
            return False
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def surname(self):
        """Message field 'surname'."""
        return self._surname

    @surname.setter
    def surname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'surname' field must be of type 'str'"
        self._surname = value

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'score' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'score' field must be an unsigned integer in [0, 255]"
        self._score = value
