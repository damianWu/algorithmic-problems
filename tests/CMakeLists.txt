# Set TARGET(binary file) name for convenience
set(ADS_TEST ${PROJECT_NAME}_test)

# Test files
set(
        TEST_FILES
        test_2_max_consecutive_ones.cpp
)

# (Names of) Tested libraries
set(
        TESTED_LIBRARIES
        max_consecutive_ones
)

# Executable that runs the tests.
add_executable(
        ${ADS_TEST}             # Executable test file name
        test_main.cpp
        ${TEST_FILES}
)

# Link the executable to needed libraries.
target_link_libraries(
        ${ADS_TEST}
        ${TESTED_LIBRARIES}     # Library we are testing
        gtest gtest_main        # GTest libraries
)

# Add gtest to be able to run ctest.
add_test(
        NAME ADSTest            # Test name
        COMMAND ${ADS_TEST}     # Executable test file name
)