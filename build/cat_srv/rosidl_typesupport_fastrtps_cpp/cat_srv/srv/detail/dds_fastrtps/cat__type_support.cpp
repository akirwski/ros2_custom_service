// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice
#include "cat_srv/srv/detail/cat__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cat_srv/srv/detail/cat__struct.hpp"

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

namespace cat_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
cdr_serialize(
  const cat_srv::srv::Cat_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: breed
  cdr << ros_message.breed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cat_srv::srv::Cat_Request & ros_message)
{
  // Member: breed
  cdr >> ros_message.breed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
get_serialized_size(
  const cat_srv::srv::Cat_Request & ros_message,
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
max_serialized_size_Cat_Request(
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

static bool _Cat_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cat_srv::srv::Cat_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Cat_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cat_srv::srv::Cat_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Cat_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cat_srv::srv::Cat_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Cat_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Cat_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Cat_Request__callbacks = {
  "cat_srv::srv",
  "Cat_Request",
  _Cat_Request__cdr_serialize,
  _Cat_Request__cdr_deserialize,
  _Cat_Request__get_serialized_size,
  _Cat_Request__max_serialized_size
};

static rosidl_message_type_support_t _Cat_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Cat_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cat_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cat_srv
const rosidl_message_type_support_t *
get_message_type_support_handle<cat_srv::srv::Cat_Request>()
{
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cat_srv, srv, Cat_Request)() {
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat_Request__handle;
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

namespace cat_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
cdr_serialize(
  const cat_srv::srv::Cat_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: breed
  cdr << ros_message.breed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cat_srv::srv::Cat_Response & ros_message)
{
  // Member: breed
  cdr >> ros_message.breed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
get_serialized_size(
  const cat_srv::srv::Cat_Response & ros_message,
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cat_srv
max_serialized_size_Cat_Response(
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

static bool _Cat_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cat_srv::srv::Cat_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Cat_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cat_srv::srv::Cat_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Cat_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cat_srv::srv::Cat_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Cat_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Cat_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Cat_Response__callbacks = {
  "cat_srv::srv",
  "Cat_Response",
  _Cat_Response__cdr_serialize,
  _Cat_Response__cdr_deserialize,
  _Cat_Response__get_serialized_size,
  _Cat_Response__max_serialized_size
};

static rosidl_message_type_support_t _Cat_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Cat_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cat_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cat_srv
const rosidl_message_type_support_t *
get_message_type_support_handle<cat_srv::srv::Cat_Response>()
{
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cat_srv, srv, Cat_Response)() {
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cat_srv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Cat__callbacks = {
  "cat_srv::srv",
  "Cat",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cat_srv, srv, Cat_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cat_srv, srv, Cat_Response)(),
};

static rosidl_service_type_support_t _Cat__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Cat__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cat_srv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cat_srv
const rosidl_service_type_support_t *
get_service_type_support_handle<cat_srv::srv::Cat>()
{
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cat_srv, srv, Cat)() {
  return &cat_srv::srv::typesupport_fastrtps_cpp::_Cat__handle;
}

#ifdef __cplusplus
}
#endif
