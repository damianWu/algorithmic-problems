#include <iostream>

#include "1_two_sum/two_sum.hpp"

int main() {
    std::vector<int> v{2, 17, 11, 7, 15};
    int target{9};
    auto[i, j]{two_sum_optimal(v, target)};
    std::cout << "i: " << i << " j: " << j << "\n";
    return 0;
}
