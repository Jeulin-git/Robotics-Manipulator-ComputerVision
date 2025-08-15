// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from haircutterbot_msgs:action/HaircutterbotTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haircutterbot_msgs/action/haircutterbot_task.hpp"


#ifndef HAIRCUTTERBOT_MSGS__ACTION__DETAIL__HAIRCUTTERBOT_TASK__TRAITS_HPP_
#define HAIRCUTTERBOT_MSGS__ACTION__DETAIL__HAIRCUTTERBOT_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "haircutterbot_msgs/action/detail/haircutterbot_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_number
  {
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_Goal & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_Goal>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_Goal";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_Goal>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_Goal";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_Result & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_Result>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_Result";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_Result>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_Result";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: percentage
  {
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_Feedback & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_Feedback>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_Feedback";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_Feedback>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_Feedback";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "haircutterbot_msgs/action/detail/haircutterbot_task__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_SendGoal_Request";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_SendGoal_Response";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_SendGoal_Event";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>::value && has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_SendGoal>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_SendGoal";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_SendGoal>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_SendGoal";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>::value &&
    has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>::value &&
    has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<haircutterbot_msgs::action::HaircutterbotTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<haircutterbot_msgs::action::HaircutterbotTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_GetResult_Request";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_GetResult_Response";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Result>::value> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Result>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_GetResult_Event";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>::value && has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_GetResult>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_GetResult";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_GetResult>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_GetResult";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>::value &&
    has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>::value &&
    has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<haircutterbot_msgs::action::HaircutterbotTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<haircutterbot_msgs::action::HaircutterbotTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__traits.hpp"

namespace haircutterbot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const HaircutterbotTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HaircutterbotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HaircutterbotTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace haircutterbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use haircutterbot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  haircutterbot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haircutterbot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage & msg)
{
  return haircutterbot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage>()
{
  return "haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage";
}

template<>
inline const char * name<haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage>()
{
  return "haircutterbot_msgs/action/HaircutterbotTask_FeedbackMessage";
}

template<>
struct has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<haircutterbot_msgs::action::HaircutterbotTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<haircutterbot_msgs::action::HaircutterbotTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<haircutterbot_msgs::action::HaircutterbotTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<haircutterbot_msgs::action::HaircutterbotTask>
  : std::true_type
{
};

template<>
struct is_action_goal<haircutterbot_msgs::action::HaircutterbotTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<haircutterbot_msgs::action::HaircutterbotTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<haircutterbot_msgs::action::HaircutterbotTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HAIRCUTTERBOT_MSGS__ACTION__DETAIL__HAIRCUTTERBOT_TASK__TRAITS_HPP_
