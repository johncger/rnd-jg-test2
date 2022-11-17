#
# Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
#
get_filename_component(EXE_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(PROJECT_TEST_NAME ${PROJECT_NAME}-${EXE_NAME})
# ##############################################################################
# Clone Google Test
# ##############################################################################
include(${CMAKE_SOURCE_DIR}/cmake/fetch-gtest.cmake)

# ##############################################################################
# Source groups
# ##############################################################################
file(GLOB SOURCES "*.cpp")

# ##############################################################################
# Target
# ##############################################################################
add_executable(${PROJECT_TEST_NAME} ${SOURCES})

# ##############################################################################
# Dependencies
# ##############################################################################
message(STATUS "Project lib list: ${PROJECT_LIB_LIST}")
target_link_libraries(${PROJECT_TEST_NAME} PRIVATE GTest::GTest
                                                   -pthread)
include(add-project-libs)
add_project_libs(${PROJECT_TEST_NAME})
include(add-external-project-libs)
add_external_project_libs(${PROJECT_TEST_NAME})

# ##############################################################################
# Tests
# ##############################################################################
add_test(NAME unit-test COMMAND ${BINARY_DIR}/${PROJECT_TEST_NAME})

install(TARGETS ${PROJECT_TEST_NAME} EXPORT ${PROJECT_NAME})
