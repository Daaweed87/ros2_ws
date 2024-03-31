# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_example_interfaces_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED example_interfaces_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(example_interfaces_FOUND FALSE)
  elseif(NOT example_interfaces_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(example_interfaces_FOUND FALSE)
  endif()
  return()
endif()
set(_example_interfaces_CONFIG_INCLUDED TRUE)

# output package information
if(NOT example_interfaces_FIND_QUIETLY)
  message(STATUS "Found example_interfaces: 0.0.0 (${example_interfaces_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'example_interfaces' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT example_interfaces_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(example_interfaces_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${example_interfaces_DIR}/${_extra}")
endforeach()
