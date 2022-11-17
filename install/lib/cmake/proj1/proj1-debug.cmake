#----------------------------------------------------------------
# Generated CMake target import file for configuration "debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "proj1::libproj1" for configuration "debug"
set_property(TARGET proj1::libproj1 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(proj1::libproj1 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libproj1_d.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS proj1::libproj1 )
list(APPEND _IMPORT_CHECK_FILES_FOR_proj1::libproj1 "${_IMPORT_PREFIX}/lib/libproj1_d.a" )

# Import target "proj1::proj1-test" for configuration "debug"
set_property(TARGET proj1::proj1-test APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(proj1::proj1-test PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/proj1-test"
  )

list(APPEND _IMPORT_CHECK_TARGETS proj1::proj1-test )
list(APPEND _IMPORT_CHECK_FILES_FOR_proj1::proj1-test "${_IMPORT_PREFIX}/bin/proj1-test" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
