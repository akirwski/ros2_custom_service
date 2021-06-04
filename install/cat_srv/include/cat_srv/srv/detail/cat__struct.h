// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#ifndef CAT_SRV__SRV__DETAIL__CAT__STRUCT_H_
#define CAT_SRV__SRV__DETAIL__CAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Cat in the package cat_srv.
typedef struct cat_srv__srv__Cat_Request
{
  int32_t breed;
} cat_srv__srv__Cat_Request;

// Struct for a sequence of cat_srv__srv__Cat_Request.
typedef struct cat_srv__srv__Cat_Request__Sequence
{
  cat_srv__srv__Cat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cat_srv__srv__Cat_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Cat in the package cat_srv.
typedef struct cat_srv__srv__Cat_Response
{
  int32_t breed;
} cat_srv__srv__Cat_Response;

// Struct for a sequence of cat_srv__srv__Cat_Response.
typedef struct cat_srv__srv__Cat_Response__Sequence
{
  cat_srv__srv__Cat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cat_srv__srv__Cat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAT_SRV__SRV__DETAIL__CAT__STRUCT_H_
