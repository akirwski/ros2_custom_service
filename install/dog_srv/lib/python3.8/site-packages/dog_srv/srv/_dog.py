# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dog_srv:srv/Dog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dog_Request(type):
    """Metaclass of message 'Dog_Request'."""

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
            module = import_type_support('dog_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dog_srv.srv.Dog_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dog__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dog__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dog__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dog__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dog__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dog_Request(metaclass=Metaclass_Dog_Request):
    """Message class 'Dog_Request'."""

    __slots__ = [
        '_breed',
    ]

    _fields_and_field_types = {
        'breed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.breed = kwargs.get('breed', int())

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
        if self.breed != other.breed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def breed(self):
        """Message field 'breed'."""
        return self._breed

    @breed.setter
    def breed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'breed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'breed' field must be an integer in [-2147483648, 2147483647]"
        self._breed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Dog_Response(type):
    """Metaclass of message 'Dog_Response'."""

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
            module = import_type_support('dog_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dog_srv.srv.Dog_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dog__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dog__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dog__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dog__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dog__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dog_Response(metaclass=Metaclass_Dog_Response):
    """Message class 'Dog_Response'."""

    __slots__ = [
        '_name',
        '_age',
        '_sex',
        '_breed',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'age': 'int32',
        'sex': 'boolean',
        'breed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.age = kwargs.get('age', int())
        self.sex = kwargs.get('sex', bool())
        self.breed = kwargs.get('breed', int())

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
        if self.age != other.age:
            return False
        if self.sex != other.sex:
            return False
        if self.breed != other.breed:
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
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'age' field must be an integer in [-2147483648, 2147483647]"
        self._age = value

    @property
    def sex(self):
        """Message field 'sex'."""
        return self._sex

    @sex.setter
    def sex(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sex' field must be of type 'bool'"
        self._sex = value

    @property
    def breed(self):
        """Message field 'breed'."""
        return self._breed

    @breed.setter
    def breed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'breed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'breed' field must be an integer in [-2147483648, 2147483647]"
        self._breed = value


class Metaclass_Dog(type):
    """Metaclass of service 'Dog'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dog_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dog_srv.srv.Dog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dog

            from dog_srv.srv import _dog
            if _dog.Metaclass_Dog_Request._TYPE_SUPPORT is None:
                _dog.Metaclass_Dog_Request.__import_type_support__()
            if _dog.Metaclass_Dog_Response._TYPE_SUPPORT is None:
                _dog.Metaclass_Dog_Response.__import_type_support__()


class Dog(metaclass=Metaclass_Dog):
    from dog_srv.srv._dog import Dog_Request as Request
    from dog_srv.srv._dog import Dog_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
