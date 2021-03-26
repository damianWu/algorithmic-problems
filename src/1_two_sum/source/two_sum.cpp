// Copyright [2021] <DamWu>
#include "1_two_sum/two_sum.hpp"

namespace TwoSum {

std::pair<int, int> two_sum_naive(const std::vector<int> &numbers, int target) {
    if (numbers.empty()) {
        throw EmptyVectorException(
            "const std::pair<int, int> two_sum_naive(...)."
            " Input vector was empty.");
    }
    for (uint64_t i = 0; i < numbers.size(); ++i) {
        for (uint64_t j = 0; j < numbers.size(); ++j) {
            if (i != j) {
                if (numbers.at(i) + numbers.at(j) == target) {
                    return std::make_pair(i, j);
                }
            }
        }
    }
    throw TargetNotFoundException{
        "const std::pair<int, int> two_sum_naive(...). "
        "Task conditions guarantee existing of target,"
        " but no one was found."};
}

std::pair<int, int> two_sum_optimal(const std::vector<int> &numbers,
                                    int target) {
    if (numbers.empty()) {
        throw EmptyVectorException{
            "std::pair<int, int> two_sum_optimal(...)"
            " Input vector was empty."};
    }
    auto number_index{buildListOfPairsNumberIndex(numbers)};
    std::sort(number_index.begin(), number_index.end());
    return findIndices(number_index, target);
}

std::pair<int, int> findIndices(
    const std::vector<std::pair<int, int>> &number_index, int target) {
    uint64_t first_index{0};
    uint64_t second_index{number_index.size() - 1};

    while (first_index < second_index) {
        auto sum{number_index.at(first_index).first +
                 number_index.at(second_index).first};
        if (sum == target) {
            return {number_index.at(first_index).second,
                    number_index.at(second_index).second};
        } else if (sum > target) {
            --second_index;
        } else {
            ++first_index;
        }
    }

    throw TargetNotFoundException{
        "std::pair<int, int> findIndices(...) "
        "Task conditions guarantee existing of target,"
        " but no one was found."};
}

std::vector<std::pair<int, int>> buildListOfPairsNumberIndex(
    const std::vector<int> &numbers) {
    // number, index
    std::vector<std::pair<int, int>> number_index;
    // Reserve space in vector
    number_index.reserve(numbers.size());
    for (uint64_t i = 0; i < numbers.size(); ++i) {
        number_index.emplace_back(numbers.at(i), i);
    }
    return number_index;
}

}  // namespace TwoSum
