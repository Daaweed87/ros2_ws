// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__TRAITS_HPP_
#define MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_package/msg/detail/add_two_ints2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const AddTwoInts2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInts2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInts2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_package

namespace rosidl_generator_traits
{

[[deprecated("use my_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_package::msg::AddTwoInts2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_package::msg::AddTwoInts2 & msg)
{
  return my_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_package::msg::AddTwoInts2>()
{
  return "my_package::msg::AddTwoInts2";
}

template<>
inline const char * name<my_package::msg::AddTwoInts2>()
{
  return "my_package/msg/AddTwoInts2";
}

template<>
struct has_fixed_size<my_package::msg::AddTwoInts2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_package::msg::AddTwoInts2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_package::msg::AddTwoInts2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PACKAGE__MSG__DETAIL__ADD_TWO_INTS2__TRAITS_HPP_
