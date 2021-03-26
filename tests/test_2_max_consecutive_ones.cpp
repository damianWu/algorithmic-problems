#include <gtest/gtest.h>

#include <2_max_consecutive_ones/max_consecutive_ones.hpp>
#include <utils/ads_exception.hpp>

// Tuple used only for educational purposes
class MaxConsecutiveOnesNaiveParameterizedTestFixture
    : public ::testing::TestWithParam<std::tuple<unsigned int>> {};

/**
 * Naive
 */
TEST(MaxConsecutiveOnesNaiveTest, ShouldReturnExpectedResult) {
    // Given
    unsigned int expected{3};
    std::vector<unsigned int> input{1, 1, 0, 1, 1, 1};

    // When
    unsigned int actual{max_consecutive_ones(input)};

    // Then
    ASSERT_EQ(expected, actual);
}

INSTANTIATE_TEST_SUITE_P(MaxConsecutiveOnesNaiveParameterized,
                         MaxConsecutiveOnesNaiveParameterizedTestFixture,
                         ::testing::Values(1  // Input vector size
                                           ));

TEST_P(MaxConsecutiveOnesNaiveParameterizedTestFixture,
       ShouldReturnExpectedResultWhenInputVectorSizeIsOne) {
    // Given
    unsigned int expected{1};
    auto [bit]{GetParam()};  // Tuple used only for educational purposes
    std::vector<unsigned int> input{bit};

    // When
    unsigned int actual{max_consecutive_ones(input)};

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(MaxConsecutiveOnesNaiveTest, ShouldReturnExceptionWhenInputVectorIsEmpty) {
    // Given
    std::vector<unsigned int> input;
    try {
        // When
        max_consecutive_ones(input);
        FAIL() << "Expected exception from unsigned"
                  "int max_consecutive_ones(...)"
                  " when input vector is empty.";
    } catch (const ADSException::EmptyVectorException &e) {
        // Then
        ASSERT_STREQ(
            "unsigned int max_consecutive_ones(...)."
            " Input vector was empty.",
            e.what());
    } catch (...) {
        FAIL() << "Unknown exception was catch."
                  " Expected TwoSum::EmptyVectorException";
    }
}
