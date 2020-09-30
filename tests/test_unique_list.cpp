#include <gtest/gtest.h>

#include "unique_list/unique_list.hpp"

TEST(UniqueList, shouldReturnCorrectResult) {
    // Given
    const std::vector<int> input{1, 2, 3, 2, 1, 3, 2};
    const std::vector<int> expected{1, 2, 3};

    // When
    const std::vector<int> &actual = getUnique(input);

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(UniqueList, shouldReturnEmptyVectorWhenInputVectorIsEmpty) {
    // Given
    const std::vector<int> input{};
    const std::vector<int> expected{};

    // When
    const std::vector<int> &actual = getUnique(input);

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(UniqueListSet, shouldReturnCorrectResult) {
    // Given
    const std::vector<int> input{1, 2, 3, 2, 1, 3, 2};
    const std::vector<int> expected{1, 2, 3};

    // When
    const std::vector<int> &actual = getUniqueSet(input);

    // Then
    ASSERT_EQ(expected, actual);
}

TEST(UniqueListSet, shouldReturnEmptyVectorWhenInputVectorIsEmpty) {
    // Given
    const std::vector<int> input{};
    const std::vector<int> expected{};

    // When
    const std::vector<int> &actual = getUniqueSet(input);

    // Then
    ASSERT_EQ(expected, actual);
}

// Given

// When

// Then