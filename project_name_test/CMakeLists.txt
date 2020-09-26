set(target_name "project_name_test")

set(src_files
    "src/unit.cpp")

add_executable(${target_name} ${src_files})

target_link_libraries(${target_name}
    gmock_main)

set_target_properties(${target_name} PROPERTIES FOLDER ${${PROJECT_NAME}_FOLDER}/test)

gtest_discover_tests(${target_name})
