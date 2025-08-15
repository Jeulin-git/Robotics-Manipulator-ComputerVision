// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from haircutterbot_msgs:action/HaircutterbotTask.idl
// generated code does not contain a copyright notice
#include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__init(haircutterbot_msgs__action__HaircutterbotTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_number
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(haircutterbot_msgs__action__HaircutterbotTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_number
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Goal * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_number
  if (lhs->task_number != rhs->task_number) {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Goal * input,
  haircutterbot_msgs__action__HaircutterbotTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_number
  output->task_number = input->task_number;
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_Goal *
haircutterbot_msgs__action__HaircutterbotTask_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Goal * msg = (haircutterbot_msgs__action__HaircutterbotTask_Goal *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Goal));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Goal__destroy(haircutterbot_msgs__action__HaircutterbotTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Goal * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_Goal *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_Goal * data =
      (haircutterbot_msgs__action__HaircutterbotTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
haircutterbot_msgs__action__HaircutterbotTask_Result__init(haircutterbot_msgs__action__HaircutterbotTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Result__fini(haircutterbot_msgs__action__HaircutterbotTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Result__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Result * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Result__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Result * input,
  haircutterbot_msgs__action__HaircutterbotTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_Result *
haircutterbot_msgs__action__HaircutterbotTask_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Result * msg = (haircutterbot_msgs__action__HaircutterbotTask_Result *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Result));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Result__destroy(haircutterbot_msgs__action__HaircutterbotTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Result * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_Result *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_Result * data =
      (haircutterbot_msgs__action__HaircutterbotTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__init(haircutterbot_msgs__action__HaircutterbotTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(haircutterbot_msgs__action__HaircutterbotTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Feedback * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Feedback * input,
  haircutterbot_msgs__action__HaircutterbotTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_Feedback *
haircutterbot_msgs__action__HaircutterbotTask_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Feedback * msg = (haircutterbot_msgs__action__HaircutterbotTask_Feedback *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Feedback));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Feedback__destroy(haircutterbot_msgs__action__HaircutterbotTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Feedback * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_Feedback *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_Feedback * data =
      (haircutterbot_msgs__action__HaircutterbotTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__init(&msg->goal)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  haircutterbot_msgs__action__HaircutterbotTask_Goal__fini(&msg->goal);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!haircutterbot_msgs__action__HaircutterbotTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * msg = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request * data =
      (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * msg = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response * data =
      (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * msg = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event * data =
      (haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * msg = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request * data =
      (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!haircutterbot_msgs__action__HaircutterbotTask_Result__init(&msg->result)) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  haircutterbot_msgs__action__HaircutterbotTask_Result__fini(&msg->result);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!haircutterbot_msgs__action__HaircutterbotTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!haircutterbot_msgs__action__HaircutterbotTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * msg = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response * data =
      (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__init(&msg->request, 0)) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__init(&msg->response, 0)) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__fini(&msg->request);
  // response
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__fini(&msg->response);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * msg = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event * data =
      (haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "haircutterbot_msgs/action/detail/haircutterbot_task__functions.h"

bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__init(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__init(&msg->feedback)) {
    haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  haircutterbot_msgs__action__HaircutterbotTask_Feedback__fini(&msg->feedback);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * lhs, const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * input,
  haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!haircutterbot_msgs__action__HaircutterbotTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage *
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * msg = (haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage));
  bool success = haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__destroy(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__init(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__fini(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence *
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * array = (haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__destroy(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__are_equal(const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * lhs, const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence__copy(
  const haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * input,
  haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage * data =
      (haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haircutterbot_msgs__action__HaircutterbotTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
