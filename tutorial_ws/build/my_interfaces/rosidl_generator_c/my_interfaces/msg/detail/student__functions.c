// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/Student.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/student__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `surname`
#include "rosidl_runtime_c/string_functions.h"

bool
my_interfaces__msg__Student__init(my_interfaces__msg__Student * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    my_interfaces__msg__Student__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->name, "Yiming");
    if (!success) {
      goto abort_init_0;
    }
  }
  // surname
  if (!rosidl_runtime_c__String__init(&msg->surname)) {
    my_interfaces__msg__Student__fini(msg);
    return false;
  }
  // score
  return true;
abort_init_0:
  return false;
}

void
my_interfaces__msg__Student__fini(my_interfaces__msg__Student * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // surname
  rosidl_runtime_c__String__fini(&msg->surname);
  // score
}

my_interfaces__msg__Student *
my_interfaces__msg__Student__create()
{
  my_interfaces__msg__Student * msg = (my_interfaces__msg__Student *)malloc(sizeof(my_interfaces__msg__Student));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__Student));
  bool success = my_interfaces__msg__Student__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__Student__destroy(my_interfaces__msg__Student * msg)
{
  if (msg) {
    my_interfaces__msg__Student__fini(msg);
  }
  free(msg);
}


bool
my_interfaces__msg__Student__Sequence__init(my_interfaces__msg__Student__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_interfaces__msg__Student * data = NULL;
  if (size) {
    data = (my_interfaces__msg__Student *)calloc(size, sizeof(my_interfaces__msg__Student));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__Student__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__Student__fini(&data[i - 1]);
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
my_interfaces__msg__Student__Sequence__fini(my_interfaces__msg__Student__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interfaces__msg__Student__fini(&array->data[i]);
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

my_interfaces__msg__Student__Sequence *
my_interfaces__msg__Student__Sequence__create(size_t size)
{
  my_interfaces__msg__Student__Sequence * array = (my_interfaces__msg__Student__Sequence *)malloc(sizeof(my_interfaces__msg__Student__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__Student__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__Student__Sequence__destroy(my_interfaces__msg__Student__Sequence * array)
{
  if (array) {
    my_interfaces__msg__Student__Sequence__fini(array);
  }
  free(array);
}
