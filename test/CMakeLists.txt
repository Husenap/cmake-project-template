set(target_name "app_test")

set(src_files "src/unit.cpp")

add_executable(${target_name} ${src_files})

target_link_libraries(
    ${target_name}
    gtest
    gmock
    gmock_main)

set_target_properties(${target_name} PROPERTIES FOLDER ${PROJECT_NAME}/test)

gtest_discover_tests(${target_name})
