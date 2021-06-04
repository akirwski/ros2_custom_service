// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cat_srv:srv/Cat.idl
// generated code does not contain a copyright notice

#ifndef CAT_SRV__SRV__DETAIL__CAT__STRUCT_HPP_
#define CAT_SRV__SRV__DETAIL__CAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cat_srv__srv__Cat_Request __attribute__((deprecated))
#else
# define DEPRECATED__cat_srv__srv__Cat_Request __declspec(deprecated)
#endif

namespace cat_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cat_Request_
{
  using Type = Cat_Request_<ContainerAllocator>;

  explicit Cat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breed = 0l;
    }
  }

  explicit Cat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breed = 0l;
    }
  }

  // field types and members
  using _breed_type =
    int32_t;
  _breed_type breed;

  // setters for named parameter idiom
  Type & set__breed(
    const int32_t & _arg)
  {
    this->breed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cat_srv::srv::Cat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cat_srv::srv::Cat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cat_srv::srv::Cat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cat_srv::srv::Cat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cat_srv__srv__Cat_Request
    std::shared_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cat_srv__srv__Cat_Request
    std::shared_ptr<cat_srv::srv::Cat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cat_Request_ & other) const
  {
    if (this->breed != other.breed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cat_Request_

// alias to use template instance with default allocator
using Cat_Request =
  cat_srv::srv::Cat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cat_srv


#ifndef _WIN32
# define DEPRECATED__cat_srv__srv__Cat_Response __attribute__((deprecated))
#else
# define DEPRECATED__cat_srv__srv__Cat_Response __declspec(deprecated)
#endif

namespace cat_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cat_Response_
{
  using Type = Cat_Response_<ContainerAllocator>;

  explicit Cat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breed = 0l;
    }
  }

  explicit Cat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breed = 0l;
    }
  }

  // field types and members
  using _breed_type =
    int32_t;
  _breed_type breed;

  // setters for named parameter idiom
  Type & set__breed(
    const int32_t & _arg)
  {
    this->breed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cat_srv::srv::Cat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cat_srv::srv::Cat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cat_srv::srv::Cat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cat_srv::srv::Cat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cat_srv__srv__Cat_Response
    std::shared_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cat_srv__srv__Cat_Response
    std::shared_ptr<cat_srv::srv::Cat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cat_Response_ & other) const
  {
    if (this->breed != other.breed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cat_Response_

// alias to use template instance with default allocator
using Cat_Response =
  cat_srv::srv::Cat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cat_srv

namespace cat_srv
{

namespace srv
{

struct Cat
{
  using Request = cat_srv::srv::Cat_Request;
  using Response = cat_srv::srv::Cat_Response;
};

}  // namespace srv

}  // namespace cat_srv

#endif  // CAT_SRV__SRV__DETAIL__CAT__STRUCT_HPP_
