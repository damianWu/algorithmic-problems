#include <gtest/gtest.h>

#include "quicksort/quicksort.hpp"

// Tuple used only for educational purposes
// class MaxConsecutiveOnesNaiveParameterizedTestFixture
//     : public ::testing::TestWithParam<std::tuple<unsigned int>> {};

TEST(QuicksortTest, ShouldReturnCorrectAscendingOrder1) {
    // Given
    std::vector<int> expected{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // When
    std::vector<int> actual{1, 2, 3, 4, 5, 6, 7, 8, 9};
    quicksort(std::begin(actual), std::end(actual));

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(QuicksortTest, ShouldReturnCorrectAscendingOrder2) {
    // Given
    std::vector<int> expected{1, 2, 3, 7, 8};

    // When
    std::vector<int> actual{3, 7, 8, 2, 1};
    quicksort(std::begin(actual), std::end(actual));

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(QuicksortTest, ShouldReturnCorrectAscendingOrder3) {
    // Given
    std::vector<int> expected{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // When
    std::vector<int> actual{1, 5, 3, 8, 6, 2, 9, 7, 4};
    quicksort(std::begin(actual), std::end(actual));

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(QuicksortTest, ShouldReturnCorrectAscendingOrder4) {
    // Given
    std::vector<int> expected{-235, -23, 1, 2, 6, 7, 23, 89, 235};

    // When
    std::vector<int> actual{-23, 235, -235, 6, 7, 89, 2, 1, 23};
    quicksort(std::begin(actual), std::end(actual));

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(QuicksortTest, ShouldReturnCorrectAscendingOrder5) {
    // Given
    std::vector<int> expected{0};

    // When
    std::vector<int> actual{0};
    quicksort(std::begin(actual), std::end(actual));

    // Then
    ASSERT_EQ(expected, actual);
}

/*
//
        // std::vector<int> input_data{1, 5, 3, 8, 6, 2, 9, 7, 4};
TEST(TemperatureReadingHomeworkTestEx2, ShouldReturnCorrectMeanValue) {
    // Given
    std::vector<Reading> r{Reading{0, 0, 10},
                           Reading{0, 0, 20},
                           Reading{0, 0, 30},
                           Reading{0, 0, 40}};

    std::vector<Reading> r2{Reading{0, 0, 10},
                            Reading{0, 0, 10},
                            Reading{0, 0, 10},
                            Reading{0, 0, 10}};

    double expected{25.0};
    double expected2{10.0};

    // When
    double actual = mean(r);
    double actual2 = mean(r2);

    // Then
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(expected2, actual2);
}

TEST(TemperatureReadingHomeworkTestEx2, ShouldReturnCorrectMedianValueOrdered) {
    // Given
    std::vector<Reading> r{Reading{0, 0, 10},
                           Reading{0, 0, 20},
                           Reading{0, 0, 30}};

    double expected{20.0};

    // When
    double actual = median(r);

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(TemperatureReadingHomeworkTestEx2,
     ShouldReturnCorrectMedianValueUnordered) {
    // Given
    std::vector<Reading> r{Reading{0, 0, 10},
                           Reading{0, 0, 120},
                           Reading{0, 0, 20},
                           Reading{0, 0, 420},
                           Reading{0, 0, 60},
                           Reading{0, 0, 50},
                           Reading{0, 0, 30}};

    double expected{50.0};

    // When
    double actual = median(r);

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(TemperatureReadingHomeworkTestEx3,
     ShouldReturnCorrectTemperatureConvertedValueCtoF) {
    // Given
    double input_c_temperature{25.0};
    double actual{77.0};

    // When
    double result = convert_celsius_to_fahrenheit(given);

    // Then
    ASSERT_EQ(actual, result);
}
*/
