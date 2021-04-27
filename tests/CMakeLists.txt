# Set TARGET(binary file) name for convenience
set(qs_test ${PROJECT_NAME}_qs_test)

# Test files
set(
        TEST_FILES
        test_quicksort.cpp
#        test_temperature_reading.cpp
)

# (Names of) Tested libraries
set(
        TESTED_LIBRARIES
       ${project_name}_quicksort
#        ${project_name}_exception
)

# Executable that runs the tests.
add_executable(
        qs_test             # Executable tests file name
        test_main.cpp
        ${TEST_FILES}
)

# Link the executable to needed libraries.
target_link_libraries(
        qs_test
        ${TESTED_LIBRARIES}     # Library we are testing
        gtest gtest_main        # GTest libraries
)

# Add gtest to be able to run ctest.
add_test(
        NAME CH10Test            # Test name
        COMMAND qs_test     # Executable tests file name
)