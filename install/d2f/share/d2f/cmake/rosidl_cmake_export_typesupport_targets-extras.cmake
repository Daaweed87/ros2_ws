# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:d2f__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:d2f__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:d2f__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:d2f__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:d2f__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:d2f__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:d2f__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:d2f__rosidl_typesupport_cpp;__rosidl_generator_py:d2f__rosidl_generator_py")

# populate d2f_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "d2f::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'd2f' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND d2f_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
