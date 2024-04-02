// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from d2f:srv/DivTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef D2F__SRV__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_
#define D2F__SRV__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "d2f/srv/detail/div_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace d2f
{

namespace srv
{

namespace builder
{

class Init_DivTwoFloats_Request_b
{
public:
  explicit Init_DivTwoFloats_Request_b(::d2f::srv::DivTwoFloats_Request & msg)
  : msg_(msg)
  {}
  ::d2f::srv::DivTwoFloats_Request b(::d2f::srv::DivTwoFloats_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Request msg_;
};

class Init_DivTwoFloats_Request_a
{
public:
  Init_DivTwoFloats_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivTwoFloats_Request_b a(::d2f::srv::DivTwoFloats_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_DivTwoFloats_Request_b(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::d2f::srv::DivTwoFloats_Request>()
{
  return d2f::srv::builder::Init_DivTwoFloats_Request_a();
}

}  // namespace d2f


namespace d2f
{

namespace srv
{

namespace builder
{

class Init_DivTwoFloats_Response_sum
{
public:
  Init_DivTwoFloats_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::d2f::srv::DivTwoFloats_Response sum(::d2f::srv::DivTwoFloats_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::d2f::srv::DivTwoFloats_Response>()
{
  return d2f::srv::builder::Init_DivTwoFloats_Response_sum();
}

}  // namespace d2f


namespace d2f
{

namespace srv
{

namespace builder
{

class Init_DivTwoFloats_Event_response
{
public:
  explicit Init_DivTwoFloats_Event_response(::d2f::srv::DivTwoFloats_Event & msg)
  : msg_(msg)
  {}
  ::d2f::srv::DivTwoFloats_Event response(::d2f::srv::DivTwoFloats_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Event msg_;
};

class Init_DivTwoFloats_Event_request
{
public:
  explicit Init_DivTwoFloats_Event_request(::d2f::srv::DivTwoFloats_Event & msg)
  : msg_(msg)
  {}
  Init_DivTwoFloats_Event_response request(::d2f::srv::DivTwoFloats_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DivTwoFloats_Event_response(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Event msg_;
};

class Init_DivTwoFloats_Event_info
{
public:
  Init_DivTwoFloats_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivTwoFloats_Event_request info(::d2f::srv::DivTwoFloats_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DivTwoFloats_Event_request(msg_);
  }

private:
  ::d2f::srv::DivTwoFloats_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::d2f::srv::DivTwoFloats_Event>()
{
  return d2f::srv::builder::Init_DivTwoFloats_Event_info();
}

}  // namespace d2f

#endif  // D2F__SRV__DETAIL__DIV_TWO_FLOATS__BUILDER_HPP_
