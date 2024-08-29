// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from team4_msgs:msg/StoragyStatus.idl
// generated code does not contain a copyright notice

#ifndef TEAM4_MSGS__MSG__DETAIL__STORAGY_STATUS__BUILDER_HPP_
#define TEAM4_MSGS__MSG__DETAIL__STORAGY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "team4_msgs/msg/detail/storagy_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace team4_msgs
{

namespace msg
{

namespace builder
{

class Init_StoragyStatus_storagy_status
{
public:
  Init_StoragyStatus_storagy_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::team4_msgs::msg::StoragyStatus storagy_status(::team4_msgs::msg::StoragyStatus::_storagy_status_type arg)
  {
    msg_.storagy_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::team4_msgs::msg::StoragyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::team4_msgs::msg::StoragyStatus>()
{
  return team4_msgs::msg::builder::Init_StoragyStatus_storagy_status();
}

}  // namespace team4_msgs

#endif  // TEAM4_MSGS__MSG__DETAIL__STORAGY_STATUS__BUILDER_HPP_
