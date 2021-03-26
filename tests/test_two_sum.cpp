#include <gtest/gtest.h>

#include "1_two_sum/two_sum.hpp"

using TwoSum::TargetNotFoundException, TwoSum::EmptyVectorException;
using TwoSum::two_sum_naive, TwoSum::two_sum_optimal;

class TwoSumNaiveTest : public ::testing::Test {
 protected:
    //    void SetUp() override {
    //        target = 7;
    //    }

    int target{7};
};

class TwoSumOptimalTest : public ::testing::Test {
 protected:
    int target{7};
};

/**
 * Naive
 */
TEST_F(TwoSumNaiveTest, ShouldThrowExceptionWhenTargetNotReached) {
    // Given
    std::vector<int> v{2, 7, 11, 15};

    try {
        // When
        two_sum_naive(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        // Then
        ASSERT_STREQ(
            "const std::pair<int, int> two_sum_naive(...). "
            "Task conditions guarantee existing of target,"
            " but no one was found.",
            e.what());
    }
}

TEST_F(TwoSumNaiveTest, ShouldReturnExpectedIndexValues) {
    // Given
    std::vector<int> v{2, 5, 11, 15};
    const unsigned long long i_index_expected{0};
    const unsigned long long j_index_expected{1};

    // When
    auto [i, j]{two_sum_naive(v, target)};

    // Then
    ASSERT_EQ(i_index_expected, i);
    ASSERT_EQ(j_index_expected, j);
}

TEST_F(TwoSumNaiveTest, ShouldThrowExceptionWhenInputVectorIsEmpty) {
    // Given
    std::vector<int> v;

    try {
        // When
        two_sum_naive(v, target);
        FAIL();
    } catch (const EmptyVectorException &err) {
        // Then
        ASSERT_STREQ(
            "const std::pair<int, int> two_sum_naive(...). Input vector "
            "was empty.",
            err.what());
    }
}

TEST_F(TwoSumNaiveTest, ShouldReturnCorrectIndexWhenNegativeNumbersInVector) {
    // Given
    std::vector<int> v{-1, -24, -673, 9, 346, -7543, -2, 113};
    const unsigned long long i_index_expected{3};
    const unsigned long long j_index_expected{6};

    // When
    auto [i, j]{two_sum_naive(v, target)};

    // Then
    ASSERT_EQ(i_index_expected, i);
    ASSERT_EQ(j_index_expected, j);
}

TEST_F(TwoSumNaiveTest,
       ShouldThrowExceptionWhenTargetExistButDoNotSatisfyProblemBoundaries) {
    // Given
    std::vector<int> v{2, 3, 11, 15};
    target = 6;

    try {
        // When
        two_sum_naive(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        // Then
        ASSERT_STREQ(
            "const std::pair<int, int> two_sum_naive(...). "
            "Task conditions guarantee existing of target,"
            " but no one was found.",
            e.what());
    }
}

/**
 * Optimal
 */

TEST_F(TwoSumOptimalTest, ShouldThrowExceptionWhenTargetNotReached) {
    // Given
    std::vector<int> v{2, 7, 11, 15};

    try {
        // When
        two_sum_optimal(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        // Then
        ASSERT_STREQ(
            "std::pair<int, int> findIndices(...) "
            "Task conditions guarantee existing of target,"
            " but no one was found.",
            e.what());
    }
}

TEST_F(TwoSumOptimalTest, ShouldReturnExpectedIndexValues) {
    // Given
    std::vector<int> v{2, 5, 11, 15};
    const unsigned long long i_index_expected{0};
    const unsigned long long j_index_expected{1};

    // When
    auto [i, j]{two_sum_optimal(v, target)};

    // Then
    ASSERT_EQ(i_index_expected, i);
    ASSERT_EQ(j_index_expected, j);
}

TEST_F(TwoSumOptimalTest, ShouldThrowExceptionWhenInputVectorIsEmpty) {
    // Given
    std::vector<int> v;

    try {
        // When
        two_sum_optimal(v, target);
        FAIL();
    } catch (const EmptyVectorException &err) {
        // Then
        ASSERT_STREQ(
            "std::pair<int, int> two_sum_optimal(...) "
            "Input vector was empty.",
            err.what());
    }
}

TEST_F(TwoSumOptimalTest, ShouldReturnCorrectIndexWhenNegativeNumbersInVector) {
    // Given
    std::vector<int> v{-1, -24, -673, 9, 346, -7543, -2, 113};
    const unsigned long long i_expected_index{6};
    const unsigned long long j_expected_index{3};

    // When
    auto [i, j]{two_sum_optimal(v, target)};

    // Then
    ASSERT_EQ(i, i_expected_index);
    ASSERT_EQ(j, j_expected_index);
}

TEST_F(TwoSumOptimalTest,
       ShouldThrowExceptionWhenTargetExistButDoNotSatisfyProblemBoundaries) {
    // Given
    std::vector<int> v{2, 3, 11, 15};
    target = 6;
    try {
        // When
        two_sum_optimal(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        // Then
        ASSERT_STREQ(
            "std::pair<int, int> findIndices(...) "
            "Task conditions guarantee existing of target,"
            " but no one was found.",
            e.what());
    }
}

// TEST(TestTwoSumOn2,
//      ShouldThrowExceptionWhenTargetExistButDoNotSatisfyProblemBoundaries) {
//     // Given
//     std::vector<int> v{2, 3, 11, 15};
//     int target{6};

//     try {
//         // When
//         two_sum_on2(v, target);
//         FAIL();
//     } catch (const TargetNotFoundException &e) {
//         // Then
//         ASSERT_STREQ(
//             "const std::pair<int, int> two_sum_on2(...). Task "
//             "condtion guarantee "
//             "exisiting of target, but no one was found.",
//             e.what());
//     }
// }
