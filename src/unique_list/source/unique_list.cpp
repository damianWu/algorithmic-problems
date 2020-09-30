
#include "unique_list/unique_list.hpp"

std::vector<int> getUnique(const std::vector<int> &numbers) {
    std::vector<int> unique{};
    for (const auto number : numbers) {
        const auto &iterator = std::find(unique.begin(),
                                         unique.end(),
                                         number);
        if (iterator == unique.end()) {
            unique.push_back(number);
        }
    }
    return unique;
}

std::vector<int> getUniqueSet(const std::vector<int> &numbers) {
    std::set<int> unique{numbers.begin(), numbers.end()};
    return {unique.begin(), unique.end()};
}
