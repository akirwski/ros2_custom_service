// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dog_interfaces:srv/Dog.idl
// generated code does not contain a copyright notice
#include "dog_interfaces/srv/detail/dog__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dog_interfaces/srv/detail/dog__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dog_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
cdr_serialize(
  const dog_interfaces::srv::Dog_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: breed
  cdr << ros_message.breed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dog_interfaces::srv::Dog_Request & ros_message)
{
  // Member: breed
  cdr >> ros_message.breed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
get_serialized_size(
  const dog_interfaces::srv::Dog_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: breed
  {
    size_t item_size = sizeof(ros_message.breed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
max_serialized_size_Dog_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: breed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Dog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dog_interfaces::srv::Dog_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dog_interfaces::srv::Dog_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dog_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dog_interfaces::srv::Dog_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dog_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Dog_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Dog_Request__callbacks = {
  "dog_interfaces::srv",
  "Dog_Request",
  _Dog_Request__cdr_serialize,
  _Dog_Request__cdr_deserialize,
  _Dog_Request__get_serialized_size,
  _Dog_Request__max_serialized_size
};

static rosidl_message_type_support_t _Dog_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dog_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dog_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dog_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dog_interfaces::srv::Dog_Request>()
{
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dog_interfaces, srv, Dog_Request)() {
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dog_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
cdr_serialize(
  const dog_interfaces::srv::Dog_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: age
  cdr << ros_message.age;
  // Member: sex
  cdr << (ros_message.sex ? true : false);
  // Member: breed
  cdr << ros_message.breed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dog_interfaces::srv::Dog_Response & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: age
  cdr >> ros_message.age;

  // Member: sex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sex = tmp ? true : false;
  }

  // Member: breed
  cdr >> ros_message.breed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
get_serialized_size(
  const dog_interfaces::srv::Dog_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sex
  {
    size_t item_size = sizeof(ros_message.sex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: breed
  {
    size_t item_size = sizeof(ros_message.breed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dog_interfaces
max_serialized_size_Dog_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sex
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: breed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Dog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dog_interfaces::srv::Dog_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dog_interfaces::srv::Dog_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dog_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dog_interfaces::srv::Dog_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dog_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Dog_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Dog_Response__callbacks = {
  "dog_interfaces::srv",
  "Dog_Response",
  _Dog_Response__cdr_serialize,
  _Dog_Response__cdr_deserialize,
  _Dog_Response__get_serialized_size,
  _Dog_Response__max_serialized_size
};

static rosidl_message_type_support_t _Dog_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dog_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dog_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dog_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dog_interfaces::srv::Dog_Response>()
{
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dog_interfaces, srv, Dog_Response)() {
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dog_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Dog__callbacks = {
  "dog_interfaces::srv",
  "Dog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dog_interfaces, srv, Dog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dog_interfaces, srv, Dog_Response)(),
};

static rosidl_service_type_support_t _Dog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dog__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dog_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dog_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<dog_interfaces::srv::Dog>()
{
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dog_interfaces, srv, Dog)() {
  return &dog_interfaces::srv::typesupport_fastrtps_cpp::_Dog__handle;
}

#ifdef __cplusplus
}
#endif
