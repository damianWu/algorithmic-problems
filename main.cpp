#include <iostream>

#include "1_two_sum/two_sum.hpp"

int main() {
    std::vector<int> v{2, 7, 11, 15};
    int target{7};
    auto [i, j]{two_sum_on2(v, target)};
    std::cout << "i: " << i << " j: " << j << "\n";
    return 0;
}
