// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from d2f:msg/DivTwoFloats.idl
// generated code does not contain a copyright notice

#include "d2f/msg/detail/div_two_floats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_d2f
const rosidl_type_hash_t *
d2f__msg__DivTwoFloats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xa6, 0xf9, 0xe7, 0x86, 0xfe, 0x0b, 0x13,
      0x64, 0x53, 0x2f, 0x03, 0x1d, 0xe0, 0x51, 0x75,
      0x05, 0x23, 0x97, 0xaf, 0x04, 0x58, 0xd7, 0xb6,
      0x9d, 0xf4, 0x7f, 0x77, 0xf1, 0x88, 0x02, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char d2f__msg__DivTwoFloats__TYPE_NAME[] = "d2f/msg/DivTwoFloats";

// Define type names, field names, and default values
static char d2f__msg__DivTwoFloats__FIELD_NAME__a[] = "a";
static char d2f__msg__DivTwoFloats__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field d2f__msg__DivTwoFloats__FIELDS[] = {
  {
    {d2f__msg__DivTwoFloats__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {d2f__msg__DivTwoFloats__FIELD_NAME__b, 1, 1},
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
d2f__msg__DivTwoFloats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {d2f__msg__DivTwoFloats__TYPE_NAME, 20, 20},
      {d2f__msg__DivTwoFloats__FIELDS, 2, 2},
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
  "float64 sum";

static char srv_encoding[] = "srv";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
d2f__msg__DivTwoFloats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {d2f__msg__DivTwoFloats__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
d2f__msg__DivTwoFloats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *d2f__msg__DivTwoFloats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
