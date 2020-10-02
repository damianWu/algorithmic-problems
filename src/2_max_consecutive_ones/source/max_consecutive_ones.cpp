#include "2_max_consecutive_ones/max_consecutive_ones.hpp"
#include "1_two_sum/two_sum.hpp"

unsigned int max_consecutive_ones(const std::vector<unsigned int> &bits) {
    check_and_throw_if_bit_is_empty(bits);
    unsigned int max_consecutive{0};
    unsigned int actual_consecutive{0};
    for (const auto &bit : bits) {
        if (bit == 1) {
            ++actual_consecutive;
        } else {
            actual_consecutive = 0;
        }
        if (actual_consecutive > max_consecutive) {
            max_consecutive = actual_consecutive;
        }
    }
    return max_consecutive;
}

void check_and_throw_if_bit_is_empty(const std::vector<unsigned int> &bits) {
    if (bits.empty()) {
        throw TwoSum::EmptyVectorException{
                "unsigned int max_consecutive_ones(...)."
                " Input vector was empty."};
    }
}
