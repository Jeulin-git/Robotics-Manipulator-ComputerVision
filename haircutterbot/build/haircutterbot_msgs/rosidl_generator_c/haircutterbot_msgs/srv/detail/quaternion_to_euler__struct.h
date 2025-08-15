// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haircutterbot_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haircutterbot_msgs/srv/quaternion_to_euler.h"


#ifndef HAIRCUTTERBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_
#define HAIRCUTTERBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/QuaternionToEuler in the package haircutterbot_msgs.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Request
{
  double x;
  double y;
  double z;
  double w;
} haircutterbot_msgs__srv__QuaternionToEuler_Request;

// Struct for a sequence of haircutterbot_msgs__srv__QuaternionToEuler_Request.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Request__Sequence
{
  haircutterbot_msgs__srv__QuaternionToEuler_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haircutterbot_msgs__srv__QuaternionToEuler_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/QuaternionToEuler in the package haircutterbot_msgs.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Response
{
  double roll;
  double pitch;
  double yaw;
} haircutterbot_msgs__srv__QuaternionToEuler_Response;

// Struct for a sequence of haircutterbot_msgs__srv__QuaternionToEuler_Response.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Response__Sequence
{
  haircutterbot_msgs__srv__QuaternionToEuler_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haircutterbot_msgs__srv__QuaternionToEuler_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  haircutterbot_msgs__srv__QuaternionToEuler_Event__request__MAX_SIZE = 1
};
// response
enum
{
  haircutterbot_msgs__srv__QuaternionToEuler_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/QuaternionToEuler in the package haircutterbot_msgs.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Event
{
  service_msgs__msg__ServiceEventInfo info;
  haircutterbot_msgs__srv__QuaternionToEuler_Request__Sequence request;
  haircutterbot_msgs__srv__QuaternionToEuler_Response__Sequence response;
} haircutterbot_msgs__srv__QuaternionToEuler_Event;

// Struct for a sequence of haircutterbot_msgs__srv__QuaternionToEuler_Event.
typedef struct haircutterbot_msgs__srv__QuaternionToEuler_Event__Sequence
{
  haircutterbot_msgs__srv__QuaternionToEuler_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haircutterbot_msgs__srv__QuaternionToEuler_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAIRCUTTERBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_
