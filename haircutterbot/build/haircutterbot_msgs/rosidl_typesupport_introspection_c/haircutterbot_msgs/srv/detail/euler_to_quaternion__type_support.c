// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from haircutterbot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "haircutterbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
#include "haircutterbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "haircutterbot_msgs/srv/detail/euler_to_quaternion__functions.h"
#include "haircutterbot_msgs/srv/detail/euler_to_quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  haircutterbot_msgs__srv__EulerToQuaternion_Request__init(message_memory);
}

void haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_fini_function(void * message_memory)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Request, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Request, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_members = {
  "haircutterbot_msgs__srv",  // message namespace
  "EulerToQuaternion_Request",  // message name
  3,  // number of fields
  sizeof(haircutterbot_msgs__srv__EulerToQuaternion_Request),
  false,  // has_any_key_member_
  haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_member_array,  // message members
  haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle = {
  0,
  &haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_members,
  get_message_typesupport_handle_function,
  &haircutterbot_msgs__srv__EulerToQuaternion_Request__get_type_hash,
  &haircutterbot_msgs__srv__EulerToQuaternion_Request__get_type_description,
  &haircutterbot_msgs__srv__EulerToQuaternion_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haircutterbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Request)() {
  if (!haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle.typesupport_identifier) {
    haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "haircutterbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__functions.h"
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  haircutterbot_msgs__srv__EulerToQuaternion_Response__init(message_memory);
}

void haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_fini_function(void * message_memory)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Response, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_members = {
  "haircutterbot_msgs__srv",  // message namespace
  "EulerToQuaternion_Response",  // message name
  4,  // number of fields
  sizeof(haircutterbot_msgs__srv__EulerToQuaternion_Response),
  false,  // has_any_key_member_
  haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_member_array,  // message members
  haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle = {
  0,
  &haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_members,
  get_message_typesupport_handle_function,
  &haircutterbot_msgs__srv__EulerToQuaternion_Response__get_type_hash,
  &haircutterbot_msgs__srv__EulerToQuaternion_Response__get_type_description,
  &haircutterbot_msgs__srv__EulerToQuaternion_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haircutterbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Response)() {
  if (!haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle.typesupport_identifier) {
    haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "haircutterbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__functions.h"
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "haircutterbot_msgs/srv/euler_to_quaternion.h"
// Member `request`
// Member `response`
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  haircutterbot_msgs__srv__EulerToQuaternion_Event__init(message_memory);
}

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_fini_function(void * message_memory)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Event__fini(message_memory);
}

size_t haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__size_function__EulerToQuaternion_Event__request(
  const void * untyped_member)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence * member =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__request(
  const void * untyped_member, size_t index)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence * member =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__request(
  void * untyped_member, size_t index)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence * member =
    (haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__fetch_function__EulerToQuaternion_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Request * item =
    ((const haircutterbot_msgs__srv__EulerToQuaternion_Request *)
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__request(untyped_member, index));
  haircutterbot_msgs__srv__EulerToQuaternion_Request * value =
    (haircutterbot_msgs__srv__EulerToQuaternion_Request *)(untyped_value);
  *value = *item;
}

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__assign_function__EulerToQuaternion_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Request * item =
    ((haircutterbot_msgs__srv__EulerToQuaternion_Request *)
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__request(untyped_member, index));
  const haircutterbot_msgs__srv__EulerToQuaternion_Request * value =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Request *)(untyped_value);
  *item = *value;
}

bool haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__resize_function__EulerToQuaternion_Event__request(
  void * untyped_member, size_t size)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence * member =
    (haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence *)(untyped_member);
  haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence__fini(member);
  return haircutterbot_msgs__srv__EulerToQuaternion_Request__Sequence__init(member, size);
}

size_t haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__size_function__EulerToQuaternion_Event__response(
  const void * untyped_member)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence * member =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__response(
  const void * untyped_member, size_t index)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence * member =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__response(
  void * untyped_member, size_t index)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence * member =
    (haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__fetch_function__EulerToQuaternion_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const haircutterbot_msgs__srv__EulerToQuaternion_Response * item =
    ((const haircutterbot_msgs__srv__EulerToQuaternion_Response *)
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__response(untyped_member, index));
  haircutterbot_msgs__srv__EulerToQuaternion_Response * value =
    (haircutterbot_msgs__srv__EulerToQuaternion_Response *)(untyped_value);
  *value = *item;
}

void haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__assign_function__EulerToQuaternion_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Response * item =
    ((haircutterbot_msgs__srv__EulerToQuaternion_Response *)
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__response(untyped_member, index));
  const haircutterbot_msgs__srv__EulerToQuaternion_Response * value =
    (const haircutterbot_msgs__srv__EulerToQuaternion_Response *)(untyped_value);
  *item = *value;
}

bool haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__resize_function__EulerToQuaternion_Event__response(
  void * untyped_member, size_t size)
{
  haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence * member =
    (haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence *)(untyped_member);
  haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence__fini(member);
  return haircutterbot_msgs__srv__EulerToQuaternion_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Event, request),  // bytes offset in struct
    NULL,  // default value
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__size_function__EulerToQuaternion_Event__request,  // size() function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__request,  // get_const(index) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__request,  // get(index) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__fetch_function__EulerToQuaternion_Event__request,  // fetch(index, &value) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__assign_function__EulerToQuaternion_Event__request,  // assign(index, value) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__resize_function__EulerToQuaternion_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(haircutterbot_msgs__srv__EulerToQuaternion_Event, response),  // bytes offset in struct
    NULL,  // default value
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__size_function__EulerToQuaternion_Event__response,  // size() function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_const_function__EulerToQuaternion_Event__response,  // get_const(index) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__get_function__EulerToQuaternion_Event__response,  // get(index) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__fetch_function__EulerToQuaternion_Event__response,  // fetch(index, &value) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__assign_function__EulerToQuaternion_Event__response,  // assign(index, value) function pointer
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__resize_function__EulerToQuaternion_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_members = {
  "haircutterbot_msgs__srv",  // message namespace
  "EulerToQuaternion_Event",  // message name
  3,  // number of fields
  sizeof(haircutterbot_msgs__srv__EulerToQuaternion_Event),
  false,  // has_any_key_member_
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_member_array,  // message members
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_type_support_handle = {
  0,
  &haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_members,
  get_message_typesupport_handle_function,
  &haircutterbot_msgs__srv__EulerToQuaternion_Event__get_type_hash,
  &haircutterbot_msgs__srv__EulerToQuaternion_Event__get_type_description,
  &haircutterbot_msgs__srv__EulerToQuaternion_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haircutterbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Event)() {
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Request)();
  haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Response)();
  if (!haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_type_support_handle.typesupport_identifier) {
    haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "haircutterbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "haircutterbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_members = {
  "haircutterbot_msgs__srv",  // service namespace
  "EulerToQuaternion",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle,
  NULL,  // response message
  // haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle
  NULL  // event_message
  // haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle
};


static rosidl_service_type_support_t haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle = {
  0,
  &haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_members,
  get_service_typesupport_handle_function,
  &haircutterbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle,
  &haircutterbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle,
  &haircutterbot_msgs__srv__EulerToQuaternion_Event__rosidl_typesupport_introspection_c__EulerToQuaternion_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    haircutterbot_msgs,
    srv,
    EulerToQuaternion
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    haircutterbot_msgs,
    srv,
    EulerToQuaternion
  ),
  &haircutterbot_msgs__srv__EulerToQuaternion__get_type_hash,
  &haircutterbot_msgs__srv__EulerToQuaternion__get_type_description,
  &haircutterbot_msgs__srv__EulerToQuaternion__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haircutterbot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion)(void) {
  if (!haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.typesupport_identifier) {
    haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haircutterbot_msgs, srv, EulerToQuaternion_Event)()->data;
  }

  return &haircutterbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle;
}
