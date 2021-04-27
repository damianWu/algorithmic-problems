#include <random>

int get_random_int(int a, int b) {
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_int_distribution<int> distribution(a, b);
    auto random_number{distribution(random_engine)};
    return random_number;
}

double get_random_double(double a, double b) {
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_real_distribution<double> distribution(a, b);
    auto random_number{distribution(random_engine)};
    return random_number;
}
