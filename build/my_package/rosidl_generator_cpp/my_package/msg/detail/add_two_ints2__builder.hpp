// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__BUILDER_HPP_
#define MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_package/msg/detail/add_two_ints2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_package
{

namespace msg
{

namespace builder
{

class Init_AddTwoInts2_b
{
public:
  explicit Init_AddTwoInts2_b(::my_package::msg::AddTwoInts2 & msg)
  : msg_(msg)
  {}
  ::my_package::msg::AddTwoInts2 b(::my_package::msg::AddTwoInts2::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::msg::AddTwoInts2 msg_;
};

class Init_AddTwoInts2_a
{
public:
  Init_AddTwoInts2_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts2_b a(::my_package::msg::AddTwoInts2::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts2_b(msg_);
  }

private:
  ::my_package::msg::AddTwoInts2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::msg::AddTwoInts2>()
{
  return my_package::msg::builder::Init_AddTwoInts2_a();
}

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__BUILDER_HPP_
