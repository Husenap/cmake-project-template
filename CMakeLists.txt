cmake_minimum_required(VERSION 3.16)

project("project_name" C CXX)

include("cmake/prevent_in_source_builds.cmake")
include("cmake/standard_project_setup.cmake")

include("cmake/compiler_features.cmake")
include("cmake/compiler_warnings.cmake")

add_subdirectory("app")

set(PROJECT_NAME_FOLDER
    ${PROJECT_NAME}
    CACHE STRING "The folder that ${PROJECT_NAME} projects will be placed in.")

option(PROJECT_NAME_BUILD_TESTS "If unit tests should be build." OFF)
if(PROJECT_NAME_BUILD_TESTS)
    enable_testing()
    include(GoogleTest)
    include("thirdparty/googletest.cmake")
    add_subdirectory("test")
endif()
