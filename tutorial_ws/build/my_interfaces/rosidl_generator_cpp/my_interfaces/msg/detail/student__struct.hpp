// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__STUDENT__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__STUDENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__Student __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__Student __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Student_
{
  using Type = Student_<ContainerAllocator>;

  explicit Student_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->name = "Yiming";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->surname = "";
      this->score = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surname = "";
      this->score = 0;
    }
  }

  explicit Student_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    surname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->name = "Yiming";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->surname = "";
      this->score = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surname = "";
      this->score = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _surname_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _surname_type surname;
  using _score_type =
    uint8_t;
  _score_type score;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__surname(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->surname = _arg;
    return *this;
  }
  Type & set__score(
    const uint8_t & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::Student_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::Student_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::Student_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::Student_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Student_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Student_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Student_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Student_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::Student_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::Student_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__Student
    std::shared_ptr<my_interfaces::msg::Student_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__Student
    std::shared_ptr<my_interfaces::msg::Student_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Student_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->surname != other.surname) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const Student_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Student_

// alias to use template instance with default allocator
using Student =
  my_interfaces::msg::Student_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__STUDENT__STRUCT_HPP_
