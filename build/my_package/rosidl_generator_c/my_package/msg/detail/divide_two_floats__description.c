// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_package:msg/DivideTwoFloats.idl
// generated code does not contain a copyright notice

#include "my_package/msg/detail/divide_two_floats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_type_hash_t *
my_package__msg__DivideTwoFloats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x16, 0x63, 0x67, 0x06, 0xf8, 0x50, 0x55,
      0x53, 0x19, 0x5d, 0x72, 0x39, 0x36, 0x98, 0x43,
      0xa8, 0xa0, 0x73, 0x6d, 0xe9, 0xe4, 0xff, 0xa5,
      0x9b, 0xd1, 0xc7, 0x2a, 0x9f, 0xcb, 0x68, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_package__msg__DivideTwoFloats__TYPE_NAME[] = "my_package/msg/DivideTwoFloats";

// Define type names, field names, and default values
static char my_package__msg__DivideTwoFloats__FIELD_NAME__a[] = "a";
static char my_package__msg__DivideTwoFloats__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field my_package__msg__DivideTwoFloats__FIELDS[] = {
  {
    {my_package__msg__DivideTwoFloats__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_package__msg__DivideTwoFloats__FIELD_NAME__b, 1, 1},
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
my_package__msg__DivideTwoFloats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_package__msg__DivideTwoFloats__TYPE_NAME, 30, 30},
      {my_package__msg__DivideTwoFloats__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 a\n"
  "float64 b\n"
  "---\n"
  "float64 res";

static char srv_encoding[] = "srv";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_package__msg__DivideTwoFloats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_package__msg__DivideTwoFloats__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_package__msg__DivideTwoFloats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_package__msg__DivideTwoFloats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
