set(target_name "app")

set(src_files
    "src/main.cpp")

# Project
add_executable(${target_name} ${src_files})

target_link_libraries(${target_name}
    compiler_features
    compiler_warnings)

source_group("src" FILES "src/main.cpp")

set_target_properties(${target_name} PROPERTIES FOLDER ${PROJECT_NAME}_FOLDER)
