// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__MSG__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_
#define D2F__MSG__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "d2f/msg/detail/div_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace d2f
{

namespace msg
{

namespace builder
{

class Init_DivTwoFloats_b
{
public:
  explicit Init_DivTwoFloats_b(::d2f::msg::DivTwoFloats & msg)
  : msg_(msg)
  {}
  ::d2f::msg::DivTwoFloats b(::d2f::msg::DivTwoFloats::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::d2f::msg::DivTwoFloats msg_;
};

class Init_DivTwoFloats_a
{
public:
  Init_DivTwoFloats_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivTwoFloats_b a(::d2f::msg::DivTwoFloats::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_DivTwoFloats_b(msg_);
  }

private:
  ::d2f::msg::DivTwoFloats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::d2f::msg::DivTwoFloats>()
{
  return d2f::msg::builder::Init_DivTwoFloats_a();
}

}  // namespace d2f

#endif  // D2F__MSG__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_
