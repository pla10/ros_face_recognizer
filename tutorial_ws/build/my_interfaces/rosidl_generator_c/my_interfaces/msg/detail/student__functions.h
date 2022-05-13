// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_interfaces:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__STUDENT__FUNCTIONS_H_
#define MY_INTERFACES__MSG__DETAIL__STUDENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_interfaces/msg/detail/student__struct.h"

/// Initialize msg/Student message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces__msg__Student
 * )) before or use
 * my_interfaces__msg__Student__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Student__init(my_interfaces__msg__Student * msg);

/// Finalize msg/Student message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Student__fini(my_interfaces__msg__Student * msg);

/// Create msg/Student message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces__msg__Student__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__Student *
my_interfaces__msg__Student__create();

/// Destroy msg/Student message.
/**
 * It calls
 * my_interfaces__msg__Student__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Student__destroy(my_interfaces__msg__Student * msg);


/// Initialize array of msg/Student messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces__msg__Student__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__Student__Sequence__init(my_interfaces__msg__Student__Sequence * array, size_t size);

/// Finalize array of msg/Student messages.
/**
 * It calls
 * my_interfaces__msg__Student__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Student__Sequence__fini(my_interfaces__msg__Student__Sequence * array);

/// Create array of msg/Student messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces__msg__Student__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__Student__Sequence *
my_interfaces__msg__Student__Sequence__create(size_t size);

/// Destroy array of msg/Student messages.
/**
 * It calls
 * my_interfaces__msg__Student__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__Student__Sequence__destroy(my_interfaces__msg__Student__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__STUDENT__FUNCTIONS_H_
