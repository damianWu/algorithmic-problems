# Set TARGET(binary file) name for convenience
set(ADS_TEST ${PROJECT_NAME}_test)

# Test files names
set(TWO_SUM test_two_sum.cpp)

# Executable that runs the tests.
add_executable(${ADS_TEST} test_main.cpp ${TWO_SUM})

# Link the executable to needed libraries.
target_link_libraries(
    ${ADS_TEST}
    two_sum             # Library we are testing
    gtest gtest_main    # GTest libraries
)

# Add gtest to be able to run ctest
add_test(
    # NAME ${TEST_BLAH}
    # COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BLAH}
    ${ADS_TEST}
    ${ADS_TEST}
)