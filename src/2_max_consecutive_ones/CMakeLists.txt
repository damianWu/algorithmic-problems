project(max_consecutive_ones VERSION 1.0.0)

add_library(
        max_consecutive_ones
        source/max_consecutive_ones.cpp
)

target_include_directories(
        max_consecutive_ones
        PUBLIC
        include
)

# TODO - Is this proper way of add two_sum lib to scope?
target_link_libraries(
        max_consecutive_ones
        two_sum
)
