#include "1_two_sum/two_sum.hpp"


std::pair<int, int> two_sum_naive(const std::vector<int> &numbers,
                                  int target) {
    if (numbers.empty()) {
        throw EmptyVectorException("const std::pair<int, int> "
                                   "two_sum_naive(...)."
                                   " Input vector was empty.");
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
            "const std::pair<int, int> two_sum_naive(...). "
            "Task conditions guarantee existing of target,"
            " but no one was found."};
}

std::pair<int, int> two_sum_optimal(const std::vector<int> &numbers,
                                    int target) {
    // number, index
    std::vector<std::pair<int, int>> numbers_indexes;
    // Reserve space in vector
    numbers_indexes.reserve(numbers.size());
    buildListOfPairsNumberIndex(numbers, numbers_indexes);
    std::sort(numbers_indexes.begin(), numbers_indexes.end());
    return findIndices(numbers_indexes, target);
}

std::pair<int, int> findIndices(
        const std::vector<std::pair<int, int>> &numbers_indexes,
        int target) {

    unsigned long long first_index{0};
    unsigned long long second_index{numbers_indexes.size() - 1};

    for (unsigned long long i = 0; i < numbers_indexes.size(); ++i) {
        auto sum{numbers_indexes.at(first_index).first +
                 numbers_indexes.at(second_index).first};
        if (sum == target) {
            return {
                    numbers_indexes.at(first_index).second,
                    numbers_indexes.at(second_index).second
            };
        } else if (sum > target) {
            --second_index;
        } else {
            --first_index;
        }
    }

    throw TargetNotFoundException{
            "std::pair<int, int> findIndices(...) "
            "Task conditions guarantee existing of target,"
            " but no one was found."};
}

void buildListOfPairsNumberIndex(const std::vector<int> &numbers,
                                 std::vector<std::pair<int, int>> &numbers_indexes) {
    for (unsigned long long i = 0; i < numbers.size(); ++i) {
        numbers_indexes.emplace_back(numbers.at(i), i);
    }
}
