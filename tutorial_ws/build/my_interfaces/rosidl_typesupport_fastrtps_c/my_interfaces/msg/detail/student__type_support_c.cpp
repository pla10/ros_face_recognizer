// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_interfaces:msg/Student.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/student__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces/msg/detail/student__struct.h"
#include "my_interfaces/msg/detail/student__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name, surname
#include "rosidl_runtime_c/string_functions.h"  // name, surname

// forward declare type support functions


using _Student__ros_msg_type = my_interfaces__msg__Student;

static bool _Student__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Student__ros_msg_type * ros_message = static_cast<const _Student__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: surname
  {
    const rosidl_runtime_c__String * str = &ros_message->surname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  return true;
}

static bool _Student__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Student__ros_msg_type * ros_message = static_cast<_Student__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: surname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->surname.data) {
      rosidl_runtime_c__String__init(&ros_message->surname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->surname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'surname'\n");
      return false;
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_my_interfaces__msg__Student(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Student__ros_msg_type * ros_message = static_cast<const _Student__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name surname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->surname.size + 1);
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Student__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_interfaces__msg__Student(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_my_interfaces__msg__Student(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: surname
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Student__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_interfaces__msg__Student(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Student = {
  "my_interfaces::msg",
  "Student",
  _Student__cdr_serialize,
  _Student__cdr_deserialize,
  _Student__get_serialized_size,
  _Student__max_serialized_size
};

static rosidl_message_type_support_t _Student__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Student,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, msg, Student)() {
  return &_Student__type_support;
}

#if defined(__cplusplus)
}
#endif
