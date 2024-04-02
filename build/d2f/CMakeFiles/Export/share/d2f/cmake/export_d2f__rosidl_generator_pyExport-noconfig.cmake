#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "d2f::d2f__rosidl_generator_py" for configuration ""
set_property(TARGET d2f::d2f__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(d2f::d2f__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libd2f__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libd2f__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS d2f::d2f__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_d2f::d2f__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libd2f__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
