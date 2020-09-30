#include <iostream>

#include "1_two_sum/two_sum.hpp"

using TwoSum::two_sum_optimal, TwoSum::two_sum_naive;

int main() {
    std::vector<int> v{-1, -24, -673, 9, 346, -7543, -2, 113};
    int target{7};
    auto[i, j]{two_sum_optimal(v, target)};
    std::cout << "i: " << i << " j: " << j << "\n";
    return 0;
}
