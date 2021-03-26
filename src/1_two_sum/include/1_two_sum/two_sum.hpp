// Copyright [2021] <DamWu>
#ifndef SRC_1_TWO_SUM_INCLUDE_1_TWO_SUM_TWO_SUM_HPP_
#define SRC_1_TWO_SUM_INCLUDE_1_TWO_SUM_TWO_SUM_HPP_

#include <map>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

/**
 * Problem type: TWO POINTERS PROBLEM
 */

// Given an array of integers, return INDICES of the two numbers
// such that they add up to a specific target.
// You may assume that each input would have EXACTLY one solution,
// and you may not use the SAME element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

namespace TwoSum {

// All exception classes should derive by template class which is
// out of my skills right now.
// Exception classes
class EmptyVectorException : std::runtime_error {
 public:
    explicit EmptyVectorException(const std::string &what_message)
        : std::runtime_error{what_message} {}

    [[nodiscard]] const char *what() const _GLIBCXX_TXN_SAFE_DYN
        _GLIBCXX_NOTHROW override {
        return std::runtime_error::what();
    }
};

class TargetNotFoundException : std::runtime_error {
 public:
    explicit TargetNotFoundException(const std::string &what_message)
        : std::runtime_error{what_message} {}

    [[nodiscard]] const char *what() const _GLIBCXX_TXN_SAFE_DYN
        _GLIBCXX_NOTHROW override {
        return std::runtime_error::what();
    }
};

// Naive implementation;
// Time complexity: O(n^2)
std::pair<int, int> two_sum_naive(const std::vector<int> &numbers, int target);

// Effective implementation;
// Time complexity: O(n*log(n))
std::pair<int, int> two_sum_optimal(const std::vector<int> &numbers,
                                    int target);

std::vector<std::pair<int, int>> buildListOfPairsNumberIndex(
    const std::vector<int> &numbers);

std::pair<int, int> findIndices(
    const std::vector<std::pair<int, int>> &number_index, int target);

}  // namespace TwoSum

#endif  // SRC_1_TWO_SUM_INCLUDE_1_TWO_SUM_TWO_SUM_HPP_
