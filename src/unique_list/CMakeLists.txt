project(unique_list VERSION 1.0.0)

add_library(
        unique_list
        source/unique_list.cpp
)

target_include_directories(
        unique_list
        PUBLIC
        include
)