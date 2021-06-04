// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice

#ifndef DOG_SRV__SRV__DETAIL__DOG__STRUCT_H_
#define DOG_SRV__SRV__DETAIL__DOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Dog in the package dog_srv.
typedef struct dog_srv__srv__Dog_Request
{
  int32_t breed;
} dog_srv__srv__Dog_Request;

// Struct for a sequence of dog_srv__srv__Dog_Request.
typedef struct dog_srv__srv__Dog_Request__Sequence
{
  dog_srv__srv__Dog_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dog_srv__srv__Dog_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Dog in the package dog_srv.
typedef struct dog_srv__srv__Dog_Response
{
  rosidl_runtime_c__String name;
  int32_t age;
  bool sex;
  int32_t breed;
} dog_srv__srv__Dog_Response;

// Struct for a sequence of dog_srv__srv__Dog_Response.
typedef struct dog_srv__srv__Dog_Response__Sequence
{
  dog_srv__srv__Dog_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dog_srv__srv__Dog_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOG_SRV__SRV__DETAIL__DOG__STRUCT_H_
