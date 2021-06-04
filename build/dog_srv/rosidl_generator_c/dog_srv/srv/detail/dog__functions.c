// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice
#include "dog_srv/srv/detail/dog__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
dog_srv__srv__Dog_Request__init(dog_srv__srv__Dog_Request * msg)
{
  if (!msg) {
    return false;
  }
  // breed
  return true;
}

void
dog_srv__srv__Dog_Request__fini(dog_srv__srv__Dog_Request * msg)
{
  if (!msg) {
    return;
  }
  // breed
}

dog_srv__srv__Dog_Request *
dog_srv__srv__Dog_Request__create()
{
  dog_srv__srv__Dog_Request * msg = (dog_srv__srv__Dog_Request *)malloc(sizeof(dog_srv__srv__Dog_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dog_srv__srv__Dog_Request));
  bool success = dog_srv__srv__Dog_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dog_srv__srv__Dog_Request__destroy(dog_srv__srv__Dog_Request * msg)
{
  if (msg) {
    dog_srv__srv__Dog_Request__fini(msg);
  }
  free(msg);
}


bool
dog_srv__srv__Dog_Request__Sequence__init(dog_srv__srv__Dog_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dog_srv__srv__Dog_Request * data = NULL;
  if (size) {
    data = (dog_srv__srv__Dog_Request *)calloc(size, sizeof(dog_srv__srv__Dog_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dog_srv__srv__Dog_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dog_srv__srv__Dog_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dog_srv__srv__Dog_Request__Sequence__fini(dog_srv__srv__Dog_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dog_srv__srv__Dog_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dog_srv__srv__Dog_Request__Sequence *
dog_srv__srv__Dog_Request__Sequence__create(size_t size)
{
  dog_srv__srv__Dog_Request__Sequence * array = (dog_srv__srv__Dog_Request__Sequence *)malloc(sizeof(dog_srv__srv__Dog_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dog_srv__srv__Dog_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dog_srv__srv__Dog_Request__Sequence__destroy(dog_srv__srv__Dog_Request__Sequence * array)
{
  if (array) {
    dog_srv__srv__Dog_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
dog_srv__srv__Dog_Response__init(dog_srv__srv__Dog_Response * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    dog_srv__srv__Dog_Response__fini(msg);
    return false;
  }
  // age
  // sex
  // breed
  return true;
}

void
dog_srv__srv__Dog_Response__fini(dog_srv__srv__Dog_Response * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // age
  // sex
  // breed
}

dog_srv__srv__Dog_Response *
dog_srv__srv__Dog_Response__create()
{
  dog_srv__srv__Dog_Response * msg = (dog_srv__srv__Dog_Response *)malloc(sizeof(dog_srv__srv__Dog_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dog_srv__srv__Dog_Response));
  bool success = dog_srv__srv__Dog_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dog_srv__srv__Dog_Response__destroy(dog_srv__srv__Dog_Response * msg)
{
  if (msg) {
    dog_srv__srv__Dog_Response__fini(msg);
  }
  free(msg);
}


bool
dog_srv__srv__Dog_Response__Sequence__init(dog_srv__srv__Dog_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dog_srv__srv__Dog_Response * data = NULL;
  if (size) {
    data = (dog_srv__srv__Dog_Response *)calloc(size, sizeof(dog_srv__srv__Dog_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dog_srv__srv__Dog_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dog_srv__srv__Dog_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dog_srv__srv__Dog_Response__Sequence__fini(dog_srv__srv__Dog_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dog_srv__srv__Dog_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dog_srv__srv__Dog_Response__Sequence *
dog_srv__srv__Dog_Response__Sequence__create(size_t size)
{
  dog_srv__srv__Dog_Response__Sequence * array = (dog_srv__srv__Dog_Response__Sequence *)malloc(sizeof(dog_srv__srv__Dog_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dog_srv__srv__Dog_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dog_srv__srv__Dog_Response__Sequence__destroy(dog_srv__srv__Dog_Response__Sequence * array)
{
  if (array) {
    dog_srv__srv__Dog_Response__Sequence__fini(array);
  }
  free(array);
}
