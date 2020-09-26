#ifndef TWO_SUM
#define TWO_SUM

// Given an array of integers, return INDICES of the two numbers
// such that they add up to a specific target.
// You may assume that each input would have EXACTLY one solution,
// and you may not use the SAME element twice.
// If negative index value is returned, means that solution was not found.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <string>
#include <vector>

// Exception classes
class EmptyVectorException {
public:
  explicit EmptyVectorException(const std::string &what_message)
      : what_message_{what_message} {}

  const char *what() const { return what_message_.c_str(); }

private:
  std::string what_message_;
};

class SumTargetNotFoundException {
public:
  explicit SumTargetNotFoundException(const std::string &what_message)
      : what_message_{what_message} {}

  const char *what() { return what_message_.c_str(); }

private:
  const std::string what_message_;
};

// Naive implementation;
// Time complexity: O(n^2)
const std::pair<int, int>
two_sum_on2(const std::vector<int> &numbers, int target);

#endif // TWO_SUM
