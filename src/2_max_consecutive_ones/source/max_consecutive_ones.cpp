#include "2_max_consecutive_ones/max_consecutive_ones.hpp"
#include "utils/ads_exception.hpp"

unsigned int max_consecutive_ones(const std::vector<unsigned int> &nums) {
    check_and_throw_if_bit_is_empty(nums);
    unsigned int max_consecutive{0};
    unsigned int actual_consecutive{0};
    for (const auto &bit : nums) {
        if (bit == 1) {
            ++actual_consecutive;
        } else {
            if (actual_consecutive > max_consecutive) {
                max_consecutive = actual_consecutive;
            }
            actual_consecutive = 0;
        }
    }
    if (actual_consecutive > max_consecutive) {
        max_consecutive = actual_consecutive;
    }
    return max_consecutive;
}

void check_and_throw_if_bit_is_empty(const std::vector<unsigned int> &bits) {
    if (bits.empty()) {
        throw ADSException::EmptyVectorException{
                "unsigned int max_consecutive_ones(...)."
                " Input vector was empty."};
    }
}
