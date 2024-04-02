// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_
#define SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_div/msg/detail/two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_div
{

namespace msg
{

namespace builder
{

class Init_TwoFloats_second_number
{
public:
  explicit Init_TwoFloats_second_number(::simple_div::msg::TwoFloats & msg)
  : msg_(msg)
  {}
  ::simple_div::msg::TwoFloats second_number(::simple_div::msg::TwoFloats::_second_number_type arg)
  {
    msg_.second_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_div::msg::TwoFloats msg_;
};

class Init_TwoFloats_first_number
{
public:
  Init_TwoFloats_first_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoFloats_second_number first_number(::simple_div::msg::TwoFloats::_first_number_type arg)
  {
    msg_.first_number = std::move(arg);
    return Init_TwoFloats_second_number(msg_);
  }

private:
  ::simple_div::msg::TwoFloats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_div::msg::TwoFloats>()
{
  return simple_div::msg::builder::Init_TwoFloats_first_number();
}

}  // namespace simple_div

#endif  // SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__BUILDER_HPP_
