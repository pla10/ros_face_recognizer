// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__STUDENT__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__STUDENT__BUILDER_HPP_

#include "my_interfaces/msg/detail/student__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Student_score
{
public:
  explicit Init_Student_score(::my_interfaces::msg::Student & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Student score(::my_interfaces::msg::Student::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Student msg_;
};

class Init_Student_surname
{
public:
  explicit Init_Student_surname(::my_interfaces::msg::Student & msg)
  : msg_(msg)
  {}
  Init_Student_score surname(::my_interfaces::msg::Student::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return Init_Student_score(msg_);
  }

private:
  ::my_interfaces::msg::Student msg_;
};

class Init_Student_name
{
public:
  Init_Student_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_surname name(::my_interfaces::msg::Student::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Student_surname(msg_);
  }

private:
  ::my_interfaces::msg::Student msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Student>()
{
  return my_interfaces::msg::builder::Init_Student_name();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__STUDENT__BUILDER_HPP_
