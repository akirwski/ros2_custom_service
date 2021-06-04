// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice

#ifndef DOG_SRV__SRV__DETAIL__DOG__TRAITS_HPP_
#define DOG_SRV__SRV__DETAIL__DOG__TRAITS_HPP_

#include "dog_srv/srv/detail/dog__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dog_srv::srv::Dog_Request>()
{
  return "dog_srv::srv::Dog_Request";
}

template<>
inline const char * name<dog_srv::srv::Dog_Request>()
{
  return "dog_srv/srv/Dog_Request";
}

template<>
struct has_fixed_size<dog_srv::srv::Dog_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dog_srv::srv::Dog_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dog_srv::srv::Dog_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dog_srv::srv::Dog_Response>()
{
  return "dog_srv::srv::Dog_Response";
}

template<>
inline const char * name<dog_srv::srv::Dog_Response>()
{
  return "dog_srv/srv/Dog_Response";
}

template<>
struct has_fixed_size<dog_srv::srv::Dog_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dog_srv::srv::Dog_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dog_srv::srv::Dog_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dog_srv::srv::Dog>()
{
  return "dog_srv::srv::Dog";
}

template<>
inline const char * name<dog_srv::srv::Dog>()
{
  return "dog_srv/srv/Dog";
}

template<>
struct has_fixed_size<dog_srv::srv::Dog>
  : std::integral_constant<
    bool,
    has_fixed_size<dog_srv::srv::Dog_Request>::value &&
    has_fixed_size<dog_srv::srv::Dog_Response>::value
  >
{
};

template<>
struct has_bounded_size<dog_srv::srv::Dog>
  : std::integral_constant<
    bool,
    has_bounded_size<dog_srv::srv::Dog_Request>::value &&
    has_bounded_size<dog_srv::srv::Dog_Response>::value
  >
{
};

template<>
struct is_service<dog_srv::srv::Dog>
  : std::true_type
{
};

template<>
struct is_service_request<dog_srv::srv::Dog_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dog_srv::srv::Dog_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOG_SRV__SRV__DETAIL__DOG__TRAITS_HPP_
