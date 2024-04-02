// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_package:msg/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_
#define MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_package/msg/detail/divide_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_package
{

namespace msg
{

namespace builder
{

class Init_DivideTwoFloats_b
{
public:
  explicit Init_DivideTwoFloats_b(::my_package::msg::DivideTwoFloats & msg)
  : msg_(msg)
  {}
  ::my_package::msg::DivideTwoFloats b(::my_package::msg::DivideTwoFloats::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::msg::DivideTwoFloats msg_;
};

class Init_DivideTwoFloats_a
{
public:
  Init_DivideTwoFloats_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivideTwoFloats_b a(::my_package::msg::DivideTwoFloats::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_DivideTwoFloats_b(msg_);
  }

private:
  ::my_package::msg::DivideTwoFloats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::msg::DivideTwoFloats>()
{
  return my_package::msg::builder::Init_DivideTwoFloats_a();
}

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_
