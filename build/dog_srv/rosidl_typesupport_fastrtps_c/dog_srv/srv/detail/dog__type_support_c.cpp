// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice
#include "dog_srv/srv/detail/dog__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dog_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dog_srv/srv/detail/dog__struct.h"
#include "dog_srv/srv/detail/dog__functions.h"
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


using _Dog_Request__ros_msg_type = dog_srv__srv__Dog_Request;

static bool _Dog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Dog_Request__ros_msg_type * ros_message = static_cast<const _Dog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr << ros_message->breed;
  }

  return true;
}

static bool _Dog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Dog_Request__ros_msg_type * ros_message = static_cast<_Dog_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: breed
  {
    cdr >> ros_message->breed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dog_srv
size_t get_serialized_size_dog_srv__srv__Dog_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dog_Request__ros_msg_type * ros_message = static_cast<const _Dog_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Dog_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dog_srv__srv__Dog_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dog_srv
size_t max_serialized_size_dog_srv__srv__Dog_Request(
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

static size_t _Dog_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dog_srv__srv__Dog_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Dog_Request = {
  "dog_srv::srv",
  "Dog_Request",
  _Dog_Request__cdr_serialize,
  _Dog_Request__cdr_deserialize,
  _Dog_Request__get_serialized_size,
  _Dog_Request__max_serialized_size
};

static rosidl_message_type_support_t _Dog_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dog_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dog_srv, srv, Dog_Request)() {
  return &_Dog_Request__type_support;
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
// #include "dog_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dog_srv/srv/detail/dog__struct.h"
// already included above
// #include "dog_srv/srv/detail/dog__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _Dog_Response__ros_msg_type = dog_srv__srv__Dog_Response;

static bool _Dog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Dog_Response__ros_msg_type * ros_message = static_cast<const _Dog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: sex
  {
    cdr << (ros_message->sex ? true : false);
  }

  // Field name: breed
  {
    cdr << ros_message->breed;
  }

  return true;
}

static bool _Dog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Dog_Response__ros_msg_type * ros_message = static_cast<_Dog_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: sex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sex = tmp ? true : false;
  }

  // Field name: breed
  {
    cdr >> ros_message->breed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dog_srv
size_t get_serialized_size_dog_srv__srv__Dog_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dog_Response__ros_msg_type * ros_message = static_cast<const _Dog_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sex
  {
    size_t item_size = sizeof(ros_message->sex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name breed
  {
    size_t item_size = sizeof(ros_message->breed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Dog_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dog_srv__srv__Dog_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dog_srv
size_t max_serialized_size_dog_srv__srv__Dog_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sex
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: breed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Dog_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dog_srv__srv__Dog_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Dog_Response = {
  "dog_srv::srv",
  "Dog_Response",
  _Dog_Response__cdr_serialize,
  _Dog_Response__cdr_deserialize,
  _Dog_Response__get_serialized_size,
  _Dog_Response__max_serialized_size
};

static rosidl_message_type_support_t _Dog_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dog_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dog_srv, srv, Dog_Response)() {
  return &_Dog_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dog_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dog_srv/srv/dog.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Dog__callbacks = {
  "dog_srv::srv",
  "Dog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dog_srv, srv, Dog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dog_srv, srv, Dog_Response)(),
};

static rosidl_service_type_support_t Dog__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Dog__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dog_srv, srv, Dog)() {
  return &Dog__handle;
}

#if defined(__cplusplus)
}
#endif
