// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/target_coordinates__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__TargetCoordinates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x6e, 0x78, 0x42, 0x0b, 0x45, 0x2e, 0xa6,
      0x03, 0x69, 0xe2, 0x6b, 0xaf, 0x47, 0xcf, 0x10,
      0x38, 0x9d, 0x90, 0xb9, 0xe5, 0x38, 0xd1, 0x31,
      0x76, 0x44, 0xb5, 0x73, 0x05, 0xb5, 0xa2, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char my_robot_interfaces__msg__TargetCoordinates__TYPE_NAME[] = "my_robot_interfaces/msg/TargetCoordinates";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__TargetCoordinates__FIELD_NAME__name[] = "name";
static char my_robot_interfaces__msg__TargetCoordinates__FIELD_NAME__coordinates[] = "coordinates";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__TargetCoordinates__FIELDS[] = {
  {
    {my_robot_interfaces__msg__TargetCoordinates__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__TargetCoordinates__FIELD_NAME__coordinates, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interfaces__msg__TargetCoordinates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__TargetCoordinates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__TargetCoordinates__TYPE_NAME, 41, 41},
      {my_robot_interfaces__msg__TargetCoordinates__FIELDS, 2, 2},
    },
    {my_robot_interfaces__msg__TargetCoordinates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "geometry_msgs/Point coordinates";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__TargetCoordinates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__TargetCoordinates__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__TargetCoordinates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__TargetCoordinates__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
