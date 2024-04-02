// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_package:msg/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_HPP_
#define MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_package__msg__DivideTwoFloats __attribute__((deprecated))
#else
# define DEPRECATED__my_package__msg__DivideTwoFloats __declspec(deprecated)
#endif

namespace my_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DivideTwoFloats_
{
  using Type = DivideTwoFloats_<ContainerAllocator>;

  explicit DivideTwoFloats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  explicit DivideTwoFloats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_package::msg::DivideTwoFloats_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_package::msg::DivideTwoFloats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_package::msg::DivideTwoFloats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_package::msg::DivideTwoFloats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_package__msg__DivideTwoFloats
    std::shared_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_package__msg__DivideTwoFloats
    std::shared_ptr<my_package::msg::DivideTwoFloats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivideTwoFloats_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivideTwoFloats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivideTwoFloats_

// alias to use template instance with default allocator
using DivideTwoFloats =
  my_package::msg::DivideTwoFloats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_package

#endif  // MY_PACKAGE__MSG__DETAIL__DIVIDE_TWO_FLOATS__STRUCT_HPP_
