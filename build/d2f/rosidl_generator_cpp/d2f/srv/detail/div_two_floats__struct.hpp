// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_HPP_
#define D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__d2f__srv__DivTwoFloats_Request __attribute__((deprecated))
#else
# define DEPRECATED__d2f__srv__DivTwoFloats_Request __declspec(deprecated)
#endif

namespace d2f
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DivTwoFloats_Request_
{
  using Type = DivTwoFloats_Request_<ContainerAllocator>;

  explicit DivTwoFloats_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  explicit DivTwoFloats_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    d2f::srv::DivTwoFloats_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const d2f::srv::DivTwoFloats_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Request
    std::shared_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Request
    std::shared_ptr<d2f::srv::DivTwoFloats_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivTwoFloats_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivTwoFloats_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivTwoFloats_Request_

// alias to use template instance with default allocator
using DivTwoFloats_Request =
  d2f::srv::DivTwoFloats_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace d2f


#ifndef _WIN32
# define DEPRECATED__d2f__srv__DivTwoFloats_Response __attribute__((deprecated))
#else
# define DEPRECATED__d2f__srv__DivTwoFloats_Response __declspec(deprecated)
#endif

namespace d2f
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DivTwoFloats_Response_
{
  using Type = DivTwoFloats_Response_<ContainerAllocator>;

  explicit DivTwoFloats_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  explicit DivTwoFloats_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  // field types and members
  using _sum_type =
    double;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const double & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    d2f::srv::DivTwoFloats_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const d2f::srv::DivTwoFloats_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Response
    std::shared_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Response
    std::shared_ptr<d2f::srv::DivTwoFloats_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivTwoFloats_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivTwoFloats_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivTwoFloats_Response_

// alias to use template instance with default allocator
using DivTwoFloats_Response =
  d2f::srv::DivTwoFloats_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace d2f


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__d2f__srv__DivTwoFloats_Event __attribute__((deprecated))
#else
# define DEPRECATED__d2f__srv__DivTwoFloats_Event __declspec(deprecated)
#endif

namespace d2f
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DivTwoFloats_Event_
{
  using Type = DivTwoFloats_Event_<ContainerAllocator>;

  explicit DivTwoFloats_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DivTwoFloats_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<d2f::srv::DivTwoFloats_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<d2f::srv::DivTwoFloats_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    d2f::srv::DivTwoFloats_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const d2f::srv::DivTwoFloats_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      d2f::srv::DivTwoFloats_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Event
    std::shared_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__d2f__srv__DivTwoFloats_Event
    std::shared_ptr<d2f::srv::DivTwoFloats_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DivTwoFloats_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DivTwoFloats_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DivTwoFloats_Event_

// alias to use template instance with default allocator
using DivTwoFloats_Event =
  d2f::srv::DivTwoFloats_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace d2f

namespace d2f
{

namespace srv
{

struct DivTwoFloats
{
  using Request = d2f::srv::DivTwoFloats_Request;
  using Response = d2f::srv::DivTwoFloats_Response;
  using Event = d2f::srv::DivTwoFloats_Event;
};

}  // namespace srv

}  // namespace d2f

#endif  // D2F__SRV__DETAIL__DIV_TWO_FLOATS__STRUCT_HPP_
