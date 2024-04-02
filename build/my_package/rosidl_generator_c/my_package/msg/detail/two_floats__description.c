// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_package:msg/TwoFloats.idl
// generated code does not contain a copyright notice

#include "my_package/msg/detail/two_floats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_type_hash_t *
my_package__msg__TwoFloats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xb6, 0xfd, 0x6f, 0x6f, 0x86, 0xfa, 0xd0,
      0x84, 0xbe, 0x08, 0x3f, 0x2f, 0x7e, 0xcd, 0x52,
      0x09, 0xac, 0xc8, 0x20, 0x87, 0x8f, 0xe3, 0x52,
      0x6a, 0x63, 0x58, 0x60, 0x8e, 0x12, 0x0c, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_package__msg__TwoFloats__TYPE_NAME[] = "my_package/msg/TwoFloats";

// Define type names, field names, and default values
static char my_package__msg__TwoFloats__FIELD_NAME__first_number[] = "first_number";
static char my_package__msg__TwoFloats__FIELD_NAME__second_number[] = "second_number";

static rosidl_runtime_c__type_description__Field my_package__msg__TwoFloats__FIELDS[] = {
  {
    {my_package__msg__TwoFloats__FIELD_NAME__first_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_package__msg__TwoFloats__FIELD_NAME__second_number, 13, 13},
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
my_package__msg__TwoFloats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_package__msg__TwoFloats__TYPE_NAME, 24, 24},
      {my_package__msg__TwoFloats__FIELDS, 2, 2},
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
my_package__msg__TwoFloats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_package__msg__TwoFloats__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_package__msg__TwoFloats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_package__msg__TwoFloats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
