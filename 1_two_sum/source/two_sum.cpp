#include "1_two_sum/two_sum.hpp"

const std::pair<int, int> two_sum_on2(const std::vector<int>& numbers,
                                        int target) {
    for (unsigned long long i = 0; i < numbers.size(); ++i) {
        for (unsigned long long j = 0; j < numbers.size(); ++j) {
            if (numbers.at(i) + numbers.at(j) == target) {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}
