#include "1_two_sum/two_sum.hpp"

const std::pair<int, int> two_sum_on2(const std::vector<int> &numbers,
                                      int target) {
    if (numbers.size() == 0) {
        throw EmptyVectorException("const std::pair<int, int> "
                                   "two_sum_on2(...). Input vector was empty.");
    }

    for (unsigned long long i = 0; i < numbers.size(); ++i) {
        for (unsigned long long j = 0; j < numbers.size(); ++j) {
            if (i != j) {
                if (numbers.at(i) + numbers.at(j) == target) {
                    return std::make_pair(i, j);
                }
            }
        }
    }

    throw TargetNotFoundException{
        "const std::pair<int, int> two_sum_on2(...). Task condtion guarantee "
        "exisiting of target, but no one was found."};
}
