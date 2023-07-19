cmake_minimum_required(VERSION 3.22.1)

project("thesimpsonshitandrun")

add_subdirectory(game)

add_library(thesimpsonshitandrun SHARED thesimpsonshitandrun.cpp)
target_link_libraries(thesimpsonshitandrun code)
