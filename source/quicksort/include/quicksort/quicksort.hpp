// Copyright [2021] <DamWu>
#ifndef SOURCE_QUICKSORT_INCLUDE_QUICKSORT_QUICKSORT_HPP_
#define SOURCE_QUICKSORT_INCLUDE_QUICKSORT_QUICKSORT_HPP_

#include <algorithm>
#include <iostream>

template <class RandomIt>
RandomIt partition(RandomIt first, RandomIt last) {
    auto pivot{*first};
    RandomIt i{first + 1};
    RandomIt j{last - 1};

    // std::cout << "i: " << *i << '\n';
    // std::cout << "j: " << *j << '\n';

    while (i <= j) {  // iterators comparision;
                      // kiedy i (left) minie się z j (last) -> przerwij
        while (i <= j && *i <= pivot) {
            ++i;
        }
        while (i <= j && *j > pivot) {
            --j;
        }
        if (i < j) {
            std::iter_swap(i, j);
        }
    }
    std::iter_swap(i - 1, first);
    return i - 1;
}

template <class RandomIt>
void quicksort(RandomIt first, RandomIt last) {
    if (first < last) {
        auto p{partition(first, last)};
        quicksort(first, p);
        quicksort(p + 1, last);
    }
}
int get_random_int(int a, int b);

double get_random_double(double a, double b);

#endif  // SOURCE_QUICKSORT_INCLUDE_QUICKSORT_QUICKSORT_HPP_
