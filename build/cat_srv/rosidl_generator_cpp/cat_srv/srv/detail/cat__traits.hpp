// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#ifndef CAT_SRV__SRV__DETAIL__CAT__TRAITS_HPP_
#define CAT_SRV__SRV__DETAIL__CAT__TRAITS_HPP_

#include "cat_srv/srv/detail/cat__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cat_srv::srv::Cat_Request>()
{
  return "cat_srv::srv::Cat_Request";
}

template<>
inline const char * name<cat_srv::srv::Cat_Request>()
{
  return "cat_srv/srv/Cat_Request";
}

template<>
struct has_fixed_size<cat_srv::srv::Cat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cat_srv::srv::Cat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cat_srv::srv::Cat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cat_srv::srv::Cat_Response>()
{
  return "cat_srv::srv::Cat_Response";
}

template<>
inline const char * name<cat_srv::srv::Cat_Response>()
{
  return "cat_srv/srv/Cat_Response";
}

template<>
struct has_fixed_size<cat_srv::srv::Cat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cat_srv::srv::Cat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cat_srv::srv::Cat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cat_srv::srv::Cat>()
{
  return "cat_srv::srv::Cat";
}

template<>
inline const char * name<cat_srv::srv::Cat>()
{
  return "cat_srv/srv/Cat";
}

template<>
struct has_fixed_size<cat_srv::srv::Cat>
  : std::integral_constant<
    bool,
    has_fixed_size<cat_srv::srv::Cat_Request>::value &&
    has_fixed_size<cat_srv::srv::Cat_Response>::value
  >
{
};

template<>
struct has_bounded_size<cat_srv::srv::Cat>
  : std::integral_constant<
    bool,
    has_bounded_size<cat_srv::srv::Cat_Request>::value &&
    has_bounded_size<cat_srv::srv::Cat_Response>::value
  >
{
};

template<>
struct is_service<cat_srv::srv::Cat>
  : std::true_type
{
};

template<>
struct is_service_request<cat_srv::srv::Cat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cat_srv::srv::Cat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAT_SRV__SRV__DETAIL__CAT__TRAITS_HPP_
