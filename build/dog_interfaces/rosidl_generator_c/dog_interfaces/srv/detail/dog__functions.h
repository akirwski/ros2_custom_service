// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dog_interfaces:srv/Dog.idl
// generated code does not contain a copyright notice

#ifndef DOG_INTERFACES__SRV__DETAIL__DOG__FUNCTIONS_H_
#define DOG_INTERFACES__SRV__DETAIL__DOG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dog_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dog_interfaces/srv/detail/dog__struct.h"

/// Initialize srv/Dog message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dog_interfaces__srv__Dog_Request
 * )) before or use
 * dog_interfaces__srv__Dog_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
bool
dog_interfaces__srv__Dog_Request__init(dog_interfaces__srv__Dog_Request * msg);

/// Finalize srv/Dog message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Request__fini(dog_interfaces__srv__Dog_Request * msg);

/// Create srv/Dog message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dog_interfaces__srv__Dog_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
dog_interfaces__srv__Dog_Request *
dog_interfaces__srv__Dog_Request__create();

/// Destroy srv/Dog message.
/**
 * It calls
 * dog_interfaces__srv__Dog_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Request__destroy(dog_interfaces__srv__Dog_Request * msg);


/// Initialize array of srv/Dog messages.
/**
 * It allocates the memory for the number of elements and calls
 * dog_interfaces__srv__Dog_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
bool
dog_interfaces__srv__Dog_Request__Sequence__init(dog_interfaces__srv__Dog_Request__Sequence * array, size_t size);

/// Finalize array of srv/Dog messages.
/**
 * It calls
 * dog_interfaces__srv__Dog_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Request__Sequence__fini(dog_interfaces__srv__Dog_Request__Sequence * array);

/// Create array of srv/Dog messages.
/**
 * It allocates the memory for the array and calls
 * dog_interfaces__srv__Dog_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
dog_interfaces__srv__Dog_Request__Sequence *
dog_interfaces__srv__Dog_Request__Sequence__create(size_t size);

/// Destroy array of srv/Dog messages.
/**
 * It calls
 * dog_interfaces__srv__Dog_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Request__Sequence__destroy(dog_interfaces__srv__Dog_Request__Sequence * array);

/// Initialize srv/Dog message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dog_interfaces__srv__Dog_Response
 * )) before or use
 * dog_interfaces__srv__Dog_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
bool
dog_interfaces__srv__Dog_Response__init(dog_interfaces__srv__Dog_Response * msg);

/// Finalize srv/Dog message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Response__fini(dog_interfaces__srv__Dog_Response * msg);

/// Create srv/Dog message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dog_interfaces__srv__Dog_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
dog_interfaces__srv__Dog_Response *
dog_interfaces__srv__Dog_Response__create();

/// Destroy srv/Dog message.
/**
 * It calls
 * dog_interfaces__srv__Dog_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Response__destroy(dog_interfaces__srv__Dog_Response * msg);


/// Initialize array of srv/Dog messages.
/**
 * It allocates the memory for the number of elements and calls
 * dog_interfaces__srv__Dog_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
bool
dog_interfaces__srv__Dog_Response__Sequence__init(dog_interfaces__srv__Dog_Response__Sequence * array, size_t size);

/// Finalize array of srv/Dog messages.
/**
 * It calls
 * dog_interfaces__srv__Dog_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Response__Sequence__fini(dog_interfaces__srv__Dog_Response__Sequence * array);

/// Create array of srv/Dog messages.
/**
 * It allocates the memory for the array and calls
 * dog_interfaces__srv__Dog_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
dog_interfaces__srv__Dog_Response__Sequence *
dog_interfaces__srv__Dog_Response__Sequence__create(size_t size);

/// Destroy array of srv/Dog messages.
/**
 * It calls
 * dog_interfaces__srv__Dog_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dog_interfaces
void
dog_interfaces__srv__Dog_Response__Sequence__destroy(dog_interfaces__srv__Dog_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DOG_INTERFACES__SRV__DETAIL__DOG__FUNCTIONS_H_
