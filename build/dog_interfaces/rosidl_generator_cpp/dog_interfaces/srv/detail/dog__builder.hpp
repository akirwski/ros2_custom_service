// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dog_interfaces:srv/Dog.idl
// generated code does not contain a copyright notice

#ifndef DOG_INTERFACES__SRV__DETAIL__DOG__BUILDER_HPP_
#define DOG_INTERFACES__SRV__DETAIL__DOG__BUILDER_HPP_

#include "dog_interfaces/srv/detail/dog__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dog_interfaces
{

namespace srv
{

namespace builder
{

class Init_Dog_Request_breed
{
public:
  Init_Dog_Request_breed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dog_interfaces::srv::Dog_Request breed(::dog_interfaces::srv::Dog_Request::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dog_interfaces::srv::Dog_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dog_interfaces::srv::Dog_Request>()
{
  return dog_interfaces::srv::builder::Init_Dog_Request_breed();
}

}  // namespace dog_interfaces


namespace dog_interfaces
{

namespace srv
{

namespace builder
{

class Init_Dog_Response_breed
{
public:
  explicit Init_Dog_Response_breed(::dog_interfaces::srv::Dog_Response & msg)
  : msg_(msg)
  {}
  ::dog_interfaces::srv::Dog_Response breed(::dog_interfaces::srv::Dog_Response::_breed_type arg)
  {
    msg_.breed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dog_interfaces::srv::Dog_Response msg_;
};

class Init_Dog_Response_sex
{
public:
  explicit Init_Dog_Response_sex(::dog_interfaces::srv::Dog_Response & msg)
  : msg_(msg)
  {}
  Init_Dog_Response_breed sex(::dog_interfaces::srv::Dog_Response::_sex_type arg)
  {
    msg_.sex = std::move(arg);
    return Init_Dog_Response_breed(msg_);
  }

private:
  ::dog_interfaces::srv::Dog_Response msg_;
};

class Init_Dog_Response_age
{
public:
  explicit Init_Dog_Response_age(::dog_interfaces::srv::Dog_Response & msg)
  : msg_(msg)
  {}
  Init_Dog_Response_sex age(::dog_interfaces::srv::Dog_Response::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Dog_Response_sex(msg_);
  }

private:
  ::dog_interfaces::srv::Dog_Response msg_;
};

class Init_Dog_Response_name
{
public:
  Init_Dog_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dog_Response_age name(::dog_interfaces::srv::Dog_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Dog_Response_age(msg_);
  }

private:
  ::dog_interfaces::srv::Dog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dog_interfaces::srv::Dog_Response>()
{
  return dog_interfaces::srv::builder::Init_Dog_Response_name();
}

}  // namespace dog_interfaces

#endif  // DOG_INTERFACES__SRV__DETAIL__DOG__BUILDER_HPP_
