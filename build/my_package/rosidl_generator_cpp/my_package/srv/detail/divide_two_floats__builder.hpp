// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_package:srv/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_
#define MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_package/srv/detail/divide_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_package
{

namespace srv
{

namespace builder
{

class Init_DivideTwoFloats_Request_b
{
public:
  explicit Init_DivideTwoFloats_Request_b(::my_package::srv::DivideTwoFloats_Request & msg)
  : msg_(msg)
  {}
  ::my_package::srv::DivideTwoFloats_Request b(::my_package::srv::DivideTwoFloats_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Request msg_;
};

class Init_DivideTwoFloats_Request_a
{
public:
  Init_DivideTwoFloats_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivideTwoFloats_Request_b a(::my_package::srv::DivideTwoFloats_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_DivideTwoFloats_Request_b(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::srv::DivideTwoFloats_Request>()
{
  return my_package::srv::builder::Init_DivideTwoFloats_Request_a();
}

}  // namespace my_package


namespace my_package
{

namespace srv
{

namespace builder
{

class Init_DivideTwoFloats_Response_res
{
public:
  Init_DivideTwoFloats_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_package::srv::DivideTwoFloats_Response res(::my_package::srv::DivideTwoFloats_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::srv::DivideTwoFloats_Response>()
{
  return my_package::srv::builder::Init_DivideTwoFloats_Response_res();
}

}  // namespace my_package


namespace my_package
{

namespace srv
{

namespace builder
{

class Init_DivideTwoFloats_Event_response
{
public:
  explicit Init_DivideTwoFloats_Event_response(::my_package::srv::DivideTwoFloats_Event & msg)
  : msg_(msg)
  {}
  ::my_package::srv::DivideTwoFloats_Event response(::my_package::srv::DivideTwoFloats_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Event msg_;
};

class Init_DivideTwoFloats_Event_request
{
public:
  explicit Init_DivideTwoFloats_Event_request(::my_package::srv::DivideTwoFloats_Event & msg)
  : msg_(msg)
  {}
  Init_DivideTwoFloats_Event_response request(::my_package::srv::DivideTwoFloats_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DivideTwoFloats_Event_response(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Event msg_;
};

class Init_DivideTwoFloats_Event_info
{
public:
  Init_DivideTwoFloats_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DivideTwoFloats_Event_request info(::my_package::srv::DivideTwoFloats_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DivideTwoFloats_Event_request(msg_);
  }

private:
  ::my_package::srv::DivideTwoFloats_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_package::srv::DivideTwoFloats_Event>()
{
  return my_package::srv::builder::Init_DivideTwoFloats_Event_info();
}

}  // namespace my_package

#endif  // MY_PACKAGE__SRV__DETAIL__DIVIDE_TWO_FLOATS__BUILDER_HPP_
