// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cat_srv/msg/rosidl_typesupport_c__visibility_control.h"
#include "cat_srv/srv/detail/cat__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cat_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Cat_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Cat_Request_type_support_ids_t;

static const _Cat_Request_type_support_ids_t _Cat_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Cat_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Cat_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Cat_Request_type_support_symbol_names_t _Cat_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cat_srv, srv, Cat_Request)),
  }
};

typedef struct _Cat_Request_type_support_data_t
{
  void * data[2];
} _Cat_Request_type_support_data_t;

static _Cat_Request_type_support_data_t _Cat_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Cat_Request_message_typesupport_map = {
  2,
  "cat_srv",
  &_Cat_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Cat_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Cat_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Cat_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Cat_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cat_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_cat_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cat_srv, srv, Cat_Request)() {
  return &::cat_srv::srv::rosidl_typesupport_c::Cat_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cat_srv/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "cat_srv/srv/detail/cat__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cat_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Cat_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Cat_Response_type_support_ids_t;

static const _Cat_Response_type_support_ids_t _Cat_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Cat_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Cat_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Cat_Response_type_support_symbol_names_t _Cat_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cat_srv, srv, Cat_Response)),
  }
};

typedef struct _Cat_Response_type_support_data_t
{
  void * data[2];
} _Cat_Response_type_support_data_t;

static _Cat_Response_type_support_data_t _Cat_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Cat_Response_message_typesupport_map = {
  2,
  "cat_srv",
  &_Cat_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Cat_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Cat_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Cat_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Cat_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cat_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_cat_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cat_srv, srv, Cat_Response)() {
  return &::cat_srv::srv::rosidl_typesupport_c::Cat_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cat_srv/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cat_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Cat_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Cat_type_support_ids_t;

static const _Cat_type_support_ids_t _Cat_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Cat_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Cat_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Cat_type_support_symbol_names_t _Cat_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cat_srv, srv, Cat)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cat_srv, srv, Cat)),
  }
};

typedef struct _Cat_type_support_data_t
{
  void * data[2];
} _Cat_type_support_data_t;

static _Cat_type_support_data_t _Cat_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Cat_service_typesupport_map = {
  2,
  "cat_srv",
  &_Cat_service_typesupport_ids.typesupport_identifier[0],
  &_Cat_service_typesupport_symbol_names.symbol_name[0],
  &_Cat_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Cat_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Cat_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cat_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_cat_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, cat_srv, srv, Cat)() {
  return &::cat_srv::srv::rosidl_typesupport_c::Cat_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
