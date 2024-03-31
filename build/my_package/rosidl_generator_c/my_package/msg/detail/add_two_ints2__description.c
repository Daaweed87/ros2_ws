// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_package:msg/AddTwoInts2.idl
// generated code does not contain a copyright notice

#include "my_package/msg/detail/add_two_ints2__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_package
const rosidl_type_hash_t *
my_package__msg__AddTwoInts2__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x02, 0x20, 0x0e, 0x4b, 0x0d, 0x49, 0x33,
      0x88, 0x9e, 0x17, 0xa4, 0x61, 0x8e, 0x6e, 0xe7,
      0xe4, 0xba, 0x80, 0x7b, 0xfc, 0x32, 0x7c, 0x8e,
      0x1e, 0xa1, 0x1c, 0xea, 0xc1, 0xbb, 0x04, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_package__msg__AddTwoInts2__TYPE_NAME[] = "my_package/msg/AddTwoInts2";

// Define type names, field names, and default values
static char my_package__msg__AddTwoInts2__FIELD_NAME__a[] = "a";
static char my_package__msg__AddTwoInts2__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field my_package__msg__AddTwoInts2__FIELDS[] = {
  {
    {my_package__msg__AddTwoInts2__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_package__msg__AddTwoInts2__FIELD_NAME__b, 1, 1},
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
my_package__msg__AddTwoInts2__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_package__msg__AddTwoInts2__TYPE_NAME, 26, 26},
      {my_package__msg__AddTwoInts2__FIELDS, 2, 2},
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
my_package__msg__AddTwoInts2__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_package__msg__AddTwoInts2__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_package__msg__AddTwoInts2__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_package__msg__AddTwoInts2__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
