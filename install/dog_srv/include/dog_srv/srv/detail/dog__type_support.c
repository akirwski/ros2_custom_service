// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dog_srv/srv/detail/dog__rosidl_typesupport_introspection_c.h"
#include "dog_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dog_srv/srv/detail/dog__functions.h"
#include "dog_srv/srv/detail/dog__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dog_srv__srv__Dog_Request__init(message_memory);
}

void Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_fini_function(void * message_memory)
{
  dog_srv__srv__Dog_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_member_array[1] = {
  {
    "breed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dog_srv__srv__Dog_Request, breed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_members = {
  "dog_srv__srv",  // message namespace
  "Dog_Request",  // message name
  1,  // number of fields
  sizeof(dog_srv__srv__Dog_Request),
  Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_member_array,  // message members
  Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_type_support_handle = {
  0,
  &Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dog_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Request)() {
  if (!Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_type_support_handle.typesupport_identifier) {
    Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Dog_Request__rosidl_typesupport_introspection_c__Dog_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dog_srv/srv/detail/dog__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dog_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dog_srv/srv/detail/dog__functions.h"
// already included above
// #include "dog_srv/srv/detail/dog__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dog_srv__srv__Dog_Response__init(message_memory);
}

void Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_fini_function(void * message_memory)
{
  dog_srv__srv__Dog_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dog_srv__srv__Dog_Response, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dog_srv__srv__Dog_Response, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dog_srv__srv__Dog_Response, sex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "breed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dog_srv__srv__Dog_Response, breed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_members = {
  "dog_srv__srv",  // message namespace
  "Dog_Response",  // message name
  4,  // number of fields
  sizeof(dog_srv__srv__Dog_Response),
  Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_member_array,  // message members
  Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_type_support_handle = {
  0,
  &Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dog_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Response)() {
  if (!Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_type_support_handle.typesupport_identifier) {
    Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Dog_Response__rosidl_typesupport_introspection_c__Dog_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dog_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dog_srv/srv/detail/dog__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_members = {
  "dog_srv__srv",  // service namespace
  "Dog",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_Request_message_type_support_handle,
  NULL  // response message
  // dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_Response_message_type_support_handle
};

static rosidl_service_type_support_t dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_type_support_handle = {
  0,
  &dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dog_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog)() {
  if (!dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_type_support_handle.typesupport_identifier) {
    dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dog_srv, srv, Dog_Response)()->data;
  }

  return &dog_srv__srv__detail__dog__rosidl_typesupport_introspection_c__Dog_service_type_support_handle;
}
