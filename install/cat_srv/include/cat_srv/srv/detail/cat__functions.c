// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice
#include "cat_srv/srv/detail/cat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cat_srv__srv__Cat_Request__init(cat_srv__srv__Cat_Request * msg)
{
  if (!msg) {
    return false;
  }
  // breed
  return true;
}

void
cat_srv__srv__Cat_Request__fini(cat_srv__srv__Cat_Request * msg)
{
  if (!msg) {
    return;
  }
  // breed
}

cat_srv__srv__Cat_Request *
cat_srv__srv__Cat_Request__create()
{
  cat_srv__srv__Cat_Request * msg = (cat_srv__srv__Cat_Request *)malloc(sizeof(cat_srv__srv__Cat_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cat_srv__srv__Cat_Request));
  bool success = cat_srv__srv__Cat_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cat_srv__srv__Cat_Request__destroy(cat_srv__srv__Cat_Request * msg)
{
  if (msg) {
    cat_srv__srv__Cat_Request__fini(msg);
  }
  free(msg);
}


bool
cat_srv__srv__Cat_Request__Sequence__init(cat_srv__srv__Cat_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cat_srv__srv__Cat_Request * data = NULL;
  if (size) {
    data = (cat_srv__srv__Cat_Request *)calloc(size, sizeof(cat_srv__srv__Cat_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cat_srv__srv__Cat_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cat_srv__srv__Cat_Request__fini(&data[i - 1]);
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
cat_srv__srv__Cat_Request__Sequence__fini(cat_srv__srv__Cat_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cat_srv__srv__Cat_Request__fini(&array->data[i]);
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

cat_srv__srv__Cat_Request__Sequence *
cat_srv__srv__Cat_Request__Sequence__create(size_t size)
{
  cat_srv__srv__Cat_Request__Sequence * array = (cat_srv__srv__Cat_Request__Sequence *)malloc(sizeof(cat_srv__srv__Cat_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cat_srv__srv__Cat_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cat_srv__srv__Cat_Request__Sequence__destroy(cat_srv__srv__Cat_Request__Sequence * array)
{
  if (array) {
    cat_srv__srv__Cat_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cat_srv__srv__Cat_Response__init(cat_srv__srv__Cat_Response * msg)
{
  if (!msg) {
    return false;
  }
  // breed
  return true;
}

void
cat_srv__srv__Cat_Response__fini(cat_srv__srv__Cat_Response * msg)
{
  if (!msg) {
    return;
  }
  // breed
}

cat_srv__srv__Cat_Response *
cat_srv__srv__Cat_Response__create()
{
  cat_srv__srv__Cat_Response * msg = (cat_srv__srv__Cat_Response *)malloc(sizeof(cat_srv__srv__Cat_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cat_srv__srv__Cat_Response));
  bool success = cat_srv__srv__Cat_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cat_srv__srv__Cat_Response__destroy(cat_srv__srv__Cat_Response * msg)
{
  if (msg) {
    cat_srv__srv__Cat_Response__fini(msg);
  }
  free(msg);
}


bool
cat_srv__srv__Cat_Response__Sequence__init(cat_srv__srv__Cat_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cat_srv__srv__Cat_Response * data = NULL;
  if (size) {
    data = (cat_srv__srv__Cat_Response *)calloc(size, sizeof(cat_srv__srv__Cat_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cat_srv__srv__Cat_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cat_srv__srv__Cat_Response__fini(&data[i - 1]);
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
cat_srv__srv__Cat_Response__Sequence__fini(cat_srv__srv__Cat_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cat_srv__srv__Cat_Response__fini(&array->data[i]);
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

cat_srv__srv__Cat_Response__Sequence *
cat_srv__srv__Cat_Response__Sequence__create(size_t size)
{
  cat_srv__srv__Cat_Response__Sequence * array = (cat_srv__srv__Cat_Response__Sequence *)malloc(sizeof(cat_srv__srv__Cat_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cat_srv__srv__Cat_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cat_srv__srv__Cat_Response__Sequence__destroy(cat_srv__srv__Cat_Response__Sequence * array)
{
  if (array) {
    cat_srv__srv__Cat_Response__Sequence__fini(array);
  }
  free(array);
}
