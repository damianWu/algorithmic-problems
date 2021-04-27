#include <iostream>
#include <vector>

#include "quicksort/quicksort.hpp"

int main() {
    try {
        // std::vector<int> input_data{3, 7, 8, 2, 1};
        // std::vector<int> input_data{1, 5, 3, 8, 6, 2, 9, 7, 4};
        std::vector<int> input_data{1, 2, 3, 4, 5, 6, 7, 8, 9};

        // if (std::begin(input_data) < std::end(input_data) - 4) {
        //     std::cout << "being jest prze end" << '\n';
        // }
        // if (*std::begin(input_data) > *(std::end(input_data) - 1)) {
        //     std::cout << *std::begin(input_data) << " > "
        //               << *(std::end(input_data) - 1) << '\n';
        // }

        quicksort(std::begin(input_data), std::end(input_data));
        for (const auto& e : input_data) {
            std::cout << e << ' ';
        }

        std::iter_swap(std::begin(input_data), std::end(input_data) - 1);

        std::cout << '\n';
        std::cout << "begin: " << *std::begin(input_data) << '\n';
        if (std::begin(input_data) < std::end(input_data) - 4) {
            std::cout << "being jest przed end" << '\n';
        }
        for (const auto& e : input_data) {
            std::cout << e << ' ';
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception catch in main function with message: "
                  << e.what() << '\n';
    } catch (...) {
        std::cerr << "Unknown type of exception catch in main function" << '\n';
    }
    return 0;
}
