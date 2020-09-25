cmake_minimum_required(VERSION 3.16)


set(project_name "algorithms_data_structures")


project(${project_name})


if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()


# Required for DEBUGGING
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")
#set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")  # Release


# Compiler flags
set(GCC_COVERAGE_COMPILE_FLAGS "-std=c++20 -Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -Wold-style-cast -Wpointer-arith -Wcast-qual -Wno-unused-function")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")


add_subdirectory(1_two_sum)


# Testing
# enable_testing() # Must be defined in top-most CMakeLists.txt file.
# Outsource test to another folder.
# add_subdirectory(tests)


add_executable(
    ${project_name} 
    main.cpp
)


# Search header file in <dir>
# include_directories(${CMAKE_SOURCE_DIR}/<dir>)

target_link_libraries(
    ${project_name} 
    two_sum
)



