// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#ifndef CAT_SRV__SRV__DETAIL__CAT__FUNCTIONS_H_
#define CAT_SRV__SRV__DETAIL__CAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cat_srv/msg/rosidl_generator_c__visibility_control.h"

#include "cat_srv/srv/detail/cat__struct.h"

/// Initialize srv/Cat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cat_srv__srv__Cat_Request
 * )) before or use
 * cat_srv__srv__Cat_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
bool
cat_srv__srv__Cat_Request__init(cat_srv__srv__Cat_Request * msg);

/// Finalize srv/Cat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Request__fini(cat_srv__srv__Cat_Request * msg);

/// Create srv/Cat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cat_srv__srv__Cat_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
cat_srv__srv__Cat_Request *
cat_srv__srv__Cat_Request__create();

/// Destroy srv/Cat message.
/**
 * It calls
 * cat_srv__srv__Cat_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Request__destroy(cat_srv__srv__Cat_Request * msg);


/// Initialize array of srv/Cat messages.
/**
 * It allocates the memory for the number of elements and calls
 * cat_srv__srv__Cat_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
bool
cat_srv__srv__Cat_Request__Sequence__init(cat_srv__srv__Cat_Request__Sequence * array, size_t size);

/// Finalize array of srv/Cat messages.
/**
 * It calls
 * cat_srv__srv__Cat_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Request__Sequence__fini(cat_srv__srv__Cat_Request__Sequence * array);

/// Create array of srv/Cat messages.
/**
 * It allocates the memory for the array and calls
 * cat_srv__srv__Cat_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
cat_srv__srv__Cat_Request__Sequence *
cat_srv__srv__Cat_Request__Sequence__create(size_t size);

/// Destroy array of srv/Cat messages.
/**
 * It calls
 * cat_srv__srv__Cat_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Request__Sequence__destroy(cat_srv__srv__Cat_Request__Sequence * array);

/// Initialize srv/Cat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cat_srv__srv__Cat_Response
 * )) before or use
 * cat_srv__srv__Cat_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
bool
cat_srv__srv__Cat_Response__init(cat_srv__srv__Cat_Response * msg);

/// Finalize srv/Cat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Response__fini(cat_srv__srv__Cat_Response * msg);

/// Create srv/Cat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cat_srv__srv__Cat_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
cat_srv__srv__Cat_Response *
cat_srv__srv__Cat_Response__create();

/// Destroy srv/Cat message.
/**
 * It calls
 * cat_srv__srv__Cat_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Response__destroy(cat_srv__srv__Cat_Response * msg);


/// Initialize array of srv/Cat messages.
/**
 * It allocates the memory for the number of elements and calls
 * cat_srv__srv__Cat_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
bool
cat_srv__srv__Cat_Response__Sequence__init(cat_srv__srv__Cat_Response__Sequence * array, size_t size);

/// Finalize array of srv/Cat messages.
/**
 * It calls
 * cat_srv__srv__Cat_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Response__Sequence__fini(cat_srv__srv__Cat_Response__Sequence * array);

/// Create array of srv/Cat messages.
/**
 * It allocates the memory for the array and calls
 * cat_srv__srv__Cat_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
cat_srv__srv__Cat_Response__Sequence *
cat_srv__srv__Cat_Response__Sequence__create(size_t size);

/// Destroy array of srv/Cat messages.
/**
 * It calls
 * cat_srv__srv__Cat_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cat_srv
void
cat_srv__srv__Cat_Response__Sequence__destroy(cat_srv__srv__Cat_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CAT_SRV__SRV__DETAIL__CAT__FUNCTIONS_H_
