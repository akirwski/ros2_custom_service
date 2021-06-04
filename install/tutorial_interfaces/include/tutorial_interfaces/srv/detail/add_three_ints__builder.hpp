// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_breed
{
public:
  Init_AddThreeInts_Request_breed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::AddThreeInts_Request breed(::tutorial_interfaces::srv::AddThreeInts_Request::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::AddThreeInts_Request>()
{
  return tutorial_interfaces::srv::builder::Init_AddThreeInts_Request_breed();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_breed
{
public:
  Init_AddThreeInts_Response_breed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::AddThreeInts_Response breed(::tutorial_interfaces::srv::AddThreeInts_Response::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::AddThreeInts_Response>()
{
  return tutorial_interfaces::srv::builder::Init_AddThreeInts_Response_breed();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
