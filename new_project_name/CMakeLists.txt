set(target_name "new_project_name")

set(src_precompiled
    "src/new_project_name/precompiled.h")

set(src_new_project_name
    "src/new_project_name/new_project_name.h")

set(src_files
    ${src_precompiled}
    ${src_new_project_name})

# Project
add_library(${target_name} STATIC ${src_files})
set_target_properties(${target_name} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${target_name}
    compiler_features
    compiler_warnings)

target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_precompile_headers(${target_name} PUBLIC ${src_precompiled})

auto_group_sources(src_files ${CMAKE_CURRENT_SOURCE_DIR})
source_group("src/precompiled" REGULAR_EXPRESSION "cmake_pch\.[ch]xx")

set_target_properties(${target_name} PROPERTIES FOLDER ${${PROJECT_NAME}_FOLDER})
