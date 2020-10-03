project(ads_exception VERSION 1.0.0)

add_library(
        ads_exception
        source/ads_exception.cpp
)

target_include_directories(
        ads_exception
        PUBLIC
        include
)
