#include <iostream>
#include <vector>

#include "quicksort/quicksort.hpp"

int main() {
    try {
        std::cout << 11 << '\n';
    } catch (const std::exception& e) {
        std::cerr << "Exception catch in main function with message: "
                  << e.what() << '\n';
    } catch (...) {
        std::cerr << "Unknown type of exception catch in main function" << '\n';
    }
    return 0;
}
