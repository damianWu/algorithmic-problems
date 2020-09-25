#include <gtest/gtest.h>

#include "1_two_sum/two_sum.hpp"

TEST(TestTwoSum, ShouldReturnNegativeIndexValue) {
    // given
    std::vector<int> v{2, 7, 11, 15};
    int target{7};

    // when
    auto [i, j]{two_sum_on2(v, target)};

    // then
    ASSERT_EQ(-1, i);
    ASSERT_EQ(-1, j);
}


TEST(TestTwoSum, ShouldReturnExpectedIndexValues) {
    // given
    std::vector<int> v{2, 5, 11, 15};
    int target{7};

    // when
    auto [i, j]{two_sum_on2(v, target)};

    // then
    ASSERT_EQ(0, i);
    ASSERT_EQ(1, j);
}


