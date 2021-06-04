// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#ifndef CAT_SRV__SRV__DETAIL__CAT__BUILDER_HPP_
#define CAT_SRV__SRV__DETAIL__CAT__BUILDER_HPP_

#include "cat_srv/srv/detail/cat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cat_srv
{

namespace srv
{

namespace builder
{

class Init_Cat_Request_breed
{
public:
  Init_Cat_Request_breed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cat_srv::srv::Cat_Request breed(::cat_srv::srv::Cat_Request::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cat_srv::srv::Cat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cat_srv::srv::Cat_Request>()
{
  return cat_srv::srv::builder::Init_Cat_Request_breed();
}

}  // namespace cat_srv


namespace cat_srv
{

namespace srv
{

namespace builder
{

class Init_Cat_Response_breed
{
public:
  Init_Cat_Response_breed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cat_srv::srv::Cat_Response breed(::cat_srv::srv::Cat_Response::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cat_srv::srv::Cat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cat_srv::srv::Cat_Response>()
{
  return cat_srv::srv::builder::Init_Cat_Response_breed();
}

}  // namespace cat_srv

#endif  // CAT_SRV__SRV__DETAIL__CAT__BUILDER_HPP_
