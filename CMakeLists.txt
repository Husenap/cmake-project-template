cmake_minimum_required(VERSION 3.16)
set(PROJECT_NAME "project_name")
project(${PROJECT_NAME} C CXX)

include("cmake/compiler_features.cmake")
include("cmake/compiler_warnings.cmake")
include("cmake/conan.cmake")

set_property(GLOBAL PROPERTY CXX_STANDARD 20)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "predefined")

include(GoogleTest)
enable_testing()

add_subdirectory("app")