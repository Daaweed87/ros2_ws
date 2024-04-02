// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_HPP_
#define MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_package__msg__TwoFloats __attribute__((deprecated))
#else
# define DEPRECATED__my_package__msg__TwoFloats __declspec(deprecated)
#endif

namespace my_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwoFloats_
{
  using Type = TwoFloats_<ContainerAllocator>;

  explicit TwoFloats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_number = 0.0;
      this->second_number = 0.0;
    }
  }

  explicit TwoFloats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_number = 0.0;
      this->second_number = 0.0;
    }
  }

  // field types and members
  using _first_number_type =
    double;
  _first_number_type first_number;
  using _second_number_type =
    double;
  _second_number_type second_number;

  // setters for named parameter idiom
  Type & set__first_number(
    const double & _arg)
  {
    this->first_number = _arg;
    return *this;
  }
  Type & set__second_number(
    const double & _arg)
  {
    this->second_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_package::msg::TwoFloats_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_package::msg::TwoFloats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_package::msg::TwoFloats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_package::msg::TwoFloats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_package::msg::TwoFloats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_package::msg::TwoFloats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_package::msg::TwoFloats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_package::msg::TwoFloats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_package::msg::TwoFloats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_package::msg::TwoFloats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_package__msg__TwoFloats
    std::shared_ptr<my_package::msg::TwoFloats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_package__msg__TwoFloats
    std::shared_ptr<my_package::msg::TwoFloats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoFloats_ & other) const
  {
    if (this->first_number != other.first_number) {
      return false;
    }
    if (this->second_number != other.second_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoFloats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoFloats_

// alias to use template instance with default allocator
using TwoFloats =
  my_package::msg::TwoFloats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__TWO_FLOATS__STRUCT_HPP_
