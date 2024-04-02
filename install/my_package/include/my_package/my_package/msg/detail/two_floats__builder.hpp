// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_
#define MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_package/msg/detail/two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_package
{

namespace msg
{

namespace builder
{

class Init_TwoFloats_second_number
{
public:
  explicit Init_TwoFloats_second_number(::my_package::msg::TwoFloats & msg)
  : msg_(msg)
  {}
  ::my_package::msg::TwoFloats second_number(::my_package::msg::TwoFloats::_second_number_type arg)
  {
    msg_.second_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::msg::TwoFloats msg_;
};

class Init_TwoFloats_first_number
{
public:
  Init_TwoFloats_first_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoFloats_second_number first_number(::my_package::msg::TwoFloats::_first_number_type arg)
  {
    msg_.first_number = std::move(arg);
    return Init_TwoFloats_second_number(msg_);
  }

private:
  ::my_package::msg::TwoFloats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::msg::TwoFloats>()
{
  return my_package::msg::builder::Init_TwoFloats_first_number();
}

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_
