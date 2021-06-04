// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dog_srv:srv/Dog.idl
// generated code does not contain a copyright notice

#ifndef DOG_SRV__SRV__DETAIL__DOG__STRUCT_HPP_
#define DOG_SRV__SRV__DETAIL__DOG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dog_srv__srv__Dog_Request __attribute__((deprecated))
#else
# define DEPRECATED__dog_srv__srv__Dog_Request __declspec(deprecated)
#endif

namespace dog_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dog_Request_
{
  using Type = Dog_Request_<ContainerAllocator>;

  explicit Dog_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breed = 0l;
    }
  }

  explicit Dog_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dog_srv::srv::Dog_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dog_srv::srv::Dog_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dog_srv::srv::Dog_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dog_srv::srv::Dog_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dog_srv__srv__Dog_Request
    std::shared_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dog_srv__srv__Dog_Request
    std::shared_ptr<dog_srv::srv::Dog_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dog_Request_ & other) const
  {
    if (this->breed != other.breed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dog_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dog_Request_

// alias to use template instance with default allocator
using Dog_Request =
  dog_srv::srv::Dog_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dog_srv


#ifndef _WIN32
# define DEPRECATED__dog_srv__srv__Dog_Response __attribute__((deprecated))
#else
# define DEPRECATED__dog_srv__srv__Dog_Response __declspec(deprecated)
#endif

namespace dog_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dog_Response_
{
  using Type = Dog_Response_<ContainerAllocator>;

  explicit Dog_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->sex = false;
      this->breed = 0l;
    }
  }

  explicit Dog_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->sex = false;
      this->breed = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _age_type =
    int32_t;
  _age_type age;
  using _sex_type =
    bool;
  _sex_type sex;
  using _breed_type =
    int32_t;
  _breed_type breed;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__sex(
    const bool & _arg)
  {
    this->sex = _arg;
    return *this;
  }
  Type & set__breed(
    const int32_t & _arg)
  {
    this->breed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dog_srv::srv::Dog_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dog_srv::srv::Dog_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dog_srv::srv::Dog_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dog_srv::srv::Dog_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dog_srv__srv__Dog_Response
    std::shared_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dog_srv__srv__Dog_Response
    std::shared_ptr<dog_srv::srv::Dog_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dog_Response_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->sex != other.sex) {
      return false;
    }
    if (this->breed != other.breed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dog_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dog_Response_

// alias to use template instance with default allocator
using Dog_Response =
  dog_srv::srv::Dog_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dog_srv

namespace dog_srv
{

namespace srv
{

struct Dog
{
  using Request = dog_srv::srv::Dog_Request;
  using Response = dog_srv::srv::Dog_Response;
};

}  // namespace srv

}  // namespace dog_srv

#endif  // DOG_SRV__SRV__DETAIL__DOG__STRUCT_HPP_
