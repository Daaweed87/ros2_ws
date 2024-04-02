// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#include "simple_div/msg/detail/two_floats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simple_div
const rosidl_type_hash_t *
simple_div__msg__TwoFloats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x1b, 0x0a, 0x55, 0x62, 0xd0, 0x67, 0x00,
      0x26, 0xea, 0x43, 0x8a, 0x3b, 0xfb, 0x82, 0x45,
      0xe1, 0x45, 0xc8, 0xea, 0x36, 0xe1, 0xb4, 0xd4,
      0xb8, 0x61, 0x66, 0x47, 0x0a, 0xf2, 0x28, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simple_div__msg__TwoFloats__TYPE_NAME[] = "simple_div/msg/TwoFloats";

// Define type names, field names, and default values
static char simple_div__msg__TwoFloats__FIELD_NAME__first_number[] = "first_number";
static char simple_div__msg__TwoFloats__FIELD_NAME__second_number[] = "second_number";

static rosidl_runtime_c__type_description__Field simple_div__msg__TwoFloats__FIELDS[] = {
  {
    {simple_div__msg__TwoFloats__FIELD_NAME__first_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simple_div__msg__TwoFloats__FIELD_NAME__second_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simple_div__msg__TwoFloats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simple_div__msg__TwoFloats__TYPE_NAME, 24, 24},
      {simple_div__msg__TwoFloats__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 first_number\n"
  "float64 second_number";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simple_div__msg__TwoFloats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simple_div__msg__TwoFloats__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simple_div__msg__TwoFloats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simple_div__msg__TwoFloats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
