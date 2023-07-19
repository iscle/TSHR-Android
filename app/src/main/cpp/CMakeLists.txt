cmake_minimum_required(VERSION 3.22.1)

project("thesimpsonshitandrun")

# Define RAD_RELEASE, RAD_ANDROID
add_compile_definitions(RAD_RELEASE)
add_compile_definitions(RAD_ANDROID)
add_compile_definitions(RAD_CONSOLE)

add_subdirectory(game)

add_library(thesimpsonshitandrun SHARED thesimpsonshitandrun.cpp)
target_link_libraries(thesimpsonshitandrun code)
