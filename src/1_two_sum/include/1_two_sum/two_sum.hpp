#ifndef TWO_SUM
#define TWO_SUM

/**
 * Problem TYPE: TWO POINTER PROBLEM
 */

// Given an array of integers, return INDICES of the two numbers
// such that they add up to a specific target.
// You may assume that each input would have EXACTLY one solution,
// and you may not use the SAME element twice.
// If negative index value is returned, means that solution was not found.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <stdexcept>
#include <string>
#include <vector>

// All exception classes should derive by template class which is
// out of my skills.
// Exception classes
class EmptyVectorException : std::runtime_error {
public:
    explicit EmptyVectorException(const std::string &what_message)
            : std::runtime_error{what_message} {}

    [[nodiscard]] const char *
    what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override {
        return std::runtime_error::what();
    }
};

class TargetNotFoundException : std::runtime_error {
public:
    explicit TargetNotFoundException(const std::string &what_message)
            : std::runtime_error{what_message} {}

    [[nodiscard]] const char *
    what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override {
        return std::runtime_error::what();
    }
};

// Naive implementation;
// Time complexity: O(n^2)
std::pair<int, int> two_sum_on2(const std::vector<int> &numbers,
                                int target);

#endif // TWO_SUM
