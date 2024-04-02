// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_
#define MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_package/msg/detail/two_floats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwoFloats & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_number
  {
    out << "first_number: ";
    rosidl_generator_traits::value_to_yaml(msg.first_number, out);
    out << ", ";
  }

  // member: second_number
  {
    out << "second_number: ";
    rosidl_generator_traits::value_to_yaml(msg.second_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoFloats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_number: ";
    rosidl_generator_traits::value_to_yaml(msg.first_number, out);
    out << "\n";
  }

  // member: second_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second_number: ";
    rosidl_generator_traits::value_to_yaml(msg.second_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoFloats & msg, bool use_flow_style = false)
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
  const my_package::msg::TwoFloats & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_package::msg::TwoFloats & msg)
{
  return my_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_package::msg::TwoFloats>()
{
  return "my_package::msg::TwoFloats";
}

template<>
inline const char * name<my_package::msg::TwoFloats>()
{
  return "my_package/msg/TwoFloats";
}

template<>
struct has_fixed_size<my_package::msg::TwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_package::msg::TwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_package::msg::TwoFloats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_
