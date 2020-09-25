
add_library(
    two_sum 
    source/two_sum.cpp
)

target_include_directories(
    two_sum
    PUBLIC
    include
)