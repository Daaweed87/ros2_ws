// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__MSG__DETAIL__DIV_TWO_FLOATS__TRAITS_HPP_
#define D2F__MSG__DETAIL__DIV_TWO_FLOATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "d2f/msg/detail/div_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace d2f
{

namespace msg
{

inline void to_flow_style_yaml(
  const DivTwoFloats & msg,
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
  const DivTwoFloats & msg,
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

inline std::string to_yaml(const DivTwoFloats & msg, bool use_flow_style = false)
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

}  // namespace d2f

namespace rosidl_generator_traits
{

[[deprecated("use d2f::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const d2f::msg::DivTwoFloats & msg,
  std::ostream & out, size_t indentation = 0)
{
  d2f::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use d2f::msg::to_yaml() instead")]]
inline std::string to_yaml(const d2f::msg::DivTwoFloats & msg)
{
  return d2f::msg::to_yaml(msg);
}

template<>
inline const char * data_type<d2f::msg::DivTwoFloats>()
{
  return "d2f::msg::DivTwoFloats";
}

template<>
inline const char * name<d2f::msg::DivTwoFloats>()
{
  return "d2f/msg/DivTwoFloats";
}

template<>
struct has_fixed_size<d2f::msg::DivTwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<d2f::msg::DivTwoFloats>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<d2f::msg::DivTwoFloats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // D2F__MSG__DETAIL__DIV_TWO_FLOATS__TRAITS_HPP_
