set(target_name "app")

set(src_files
    "src/main.cpp")

# Project
add_executable(${target_name} ${src_files})

target_link_libraries(${target_name} CONAN_PKG::glfw)

source_group("src" FILES "src/main.cpp")

set_target_properties(${target_name} PROPERTIES FOLDER ${PROJECT_NAME})
set_target_properties(${target_name} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)

# Tests
add_executable(${target_name}_test "test/test.cpp")

target_link_libraries(${target_name}_test CONAN_PKG::gtest)

gtest_discover_tests(${target_name}_test)

set_target_properties(${target_name}_test PROPERTIES FOLDER ${PROJECT_NAME})
set_target_properties(${target_name}_test PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)