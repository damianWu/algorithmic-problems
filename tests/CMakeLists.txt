# Set TARGET(binary file) name for convenience
set(TWO_SUM ${PROJECT_NAME}_test)

# Executable that runs the tests.
add_executable(${TWO_SUM} test_two_sum.cpp)

# Link the executable to needed libraries.
target_link_libraries(
    ${TWO_SUM}
    two_sum             # Library we are testing
    gtest gtest_main    # GTest libraries
)

# Add gtest to be able to run ctest
add_test(
    # NAME ${TEST_BLAH}
    # COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BLAH}
    ${TWO_SUM}
    ${TWO_SUM}
)