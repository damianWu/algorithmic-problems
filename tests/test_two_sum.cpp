#include <gtest/gtest.h>

#include "1_two_sum/two_sum.hpp"
s
TEST(TestTwoSumOn2, ShouldThrowExceptionWhenTargetNotReached) {
    // given
    std::vector<int> v{2, 7, 11, 15};
    int target{7};

    // when
    try {
        two_sum_naive(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        ASSERT_STREQ("const std::pair<int, int> two_sum_naive(...). "
                     "Task conditions guarantee existing of target,"
                     " but no one was found.",
                     e.what());
    }
}

TEST(TestTwoSumOn2, ShouldReturnExpectedIndexValues) {
    // given
    std::vector<int> v{2, 5, 11, 15};
    int target{7};

    // when
    auto[i, j]{two_sum_naive(v, target)};

    // then
    ASSERT_EQ(0, i);
    ASSERT_EQ(1, j);
}

TEST(TestTwoSumOn2, ShouldThrowExceptionWhenInputVectorIsEmpty) {
    // given
    std::vector<int> v;
    int target{7};

    try {
        // when
        two_sum_naive(v, target);
        FAIL();
    } catch (const EmptyVectorException &err) {
        // then
        ASSERT_STREQ(
                "const std::pair<int, int> two_sum_naive(...). Input vector "
                "was empty.",
                err.what());
    }
}

TEST(TestTwoSumOn2, ShouldReturnCorrectIndexWhenNegativeNumbersInVector) {
    // given
    std::vector<int> v{-1, -24, -673, 9, 346, -7543, -2, 113};
    int target{7};

    // when
    auto[i, j]{two_sum_naive(v, target)};

    // then
    ASSERT_EQ(i, 3);
    ASSERT_EQ(j, 6);
}

TEST(TestTwoSumOn2,
     ShouldThrowExceptionWhenTargetExistButDoNotSatisfyProblemBoundaries) {
    // Given
    std::vector<int> v{2, 3, 11, 15};
    int target{6};

    try {
        // When
        two_sum_naive(v, target);
        FAIL();
    } catch (const TargetNotFoundException &e) {
        // Then
        ASSERT_STREQ("const std::pair<int, int> two_sum_naive(...). "
                     "Task conditions guarantee existing of target,"
                     " but no one was found.",
                     e.what());
    }
}