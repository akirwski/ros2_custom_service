// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice
#include "cat_srv/srv/detail/cat__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cat_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cat_srv/srv/detail/cat__struct.h"
#include "cat_srv/srv/detail/cat__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Cat_Request__ros_msg_type = cat_srv__srv__Cat_Request;

static bool _Cat_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Cat_Request__ros_msg_type * ros_message = static_cast<const _Cat_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr << ros_message->breed;
  }

  return true;
}

static bool _Cat_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Cat_Request__ros_msg_type * ros_message = static_cast<_Cat_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr >> ros_message->breed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cat_srv
size_t get_serialized_size_cat_srv__srv__Cat_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Cat_Request__ros_msg_type * ros_message = static_cast<const _Cat_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name breed
  {
    size_t item_size = sizeof(ros_message->breed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Cat_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cat_srv__srv__Cat_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cat_srv
size_t max_serialized_size_cat_srv__srv__Cat_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: breed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Cat_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cat_srv__srv__Cat_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Cat_Request = {
  "cat_srv::srv",
  "Cat_Request",
  _Cat_Request__cdr_serialize,
  _Cat_Request__cdr_deserialize,
  _Cat_Request__get_serialized_size,
  _Cat_Request__max_serialized_size
};

static rosidl_message_type_support_t _Cat_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Cat_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Request)() {
  return &_Cat_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cat_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cat_srv/srv/detail/cat__struct.h"
// already included above
// #include "cat_srv/srv/detail/cat__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Cat_Response__ros_msg_type = cat_srv__srv__Cat_Response;

static bool _Cat_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Cat_Response__ros_msg_type * ros_message = static_cast<const _Cat_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr << ros_message->breed;
  }

  return true;
}

static bool _Cat_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Cat_Response__ros_msg_type * ros_message = static_cast<_Cat_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr >> ros_message->breed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cat_srv
size_t get_serialized_size_cat_srv__srv__Cat_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Cat_Response__ros_msg_type * ros_message = static_cast<const _Cat_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name breed
  {
    size_t item_size = sizeof(ros_message->breed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Cat_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cat_srv__srv__Cat_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cat_srv
size_t max_serialized_size_cat_srv__srv__Cat_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: breed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Cat_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cat_srv__srv__Cat_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Cat_Response = {
  "cat_srv::srv",
  "Cat_Response",
  _Cat_Response__cdr_serialize,
  _Cat_Response__cdr_deserialize,
  _Cat_Response__get_serialized_size,
  _Cat_Response__max_serialized_size
};

static rosidl_message_type_support_t _Cat_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Cat_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Response)() {
  return &_Cat_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cat_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cat_srv/srv/cat.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Cat__callbacks = {
  "cat_srv::srv",
  "Cat",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Response)(),
};

static rosidl_service_type_support_t Cat__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Cat__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat)() {
  return &Cat__handle;
}

#if defined(__cplusplus)
}
#endif
