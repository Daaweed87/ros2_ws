// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_
#define SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_div/msg/detail/two_floats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_div
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

}  // namespace simple_div

namespace rosidl_generator_traits
{

[[deprecated("use simple_div::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_div::msg::TwoFloats & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_div::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_div::msg::to_yaml() instead")]]
inline std::string to_yaml(const simple_div::msg::TwoFloats & msg)
{
  return simple_div::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simple_div::msg::TwoFloats>()
{
  return "simple_div::msg::TwoFloats";
}

template<>
inline const char * name<simple_div::msg::TwoFloats>()
{
  return "simple_div/msg/TwoFloats";
}

template<>
struct has_fixed_size<simple_div::msg::TwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_div::msg::TwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_div::msg::TwoFloats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_DIV__MSG__DETAIL__TWO_FLOATS__TRAITS_HPP_
