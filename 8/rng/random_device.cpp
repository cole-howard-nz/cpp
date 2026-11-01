#include <iostream>
#include <random>

unsigned int get_random_value() {
    // create uninitialised object of type random_device, 
    // then call operator() which returns a random value
    return std::random_device{}();
}

int main() {
    std::mt19937 mt { get_random_value() };
    std::uniform_int_distribution roll { 1, 6 };

    for (int i { 1 }; i <= 30; ++i) {
        std::cout << roll(mt) << "  ";
        if (i%10 == 0) {
            std::cout << '\n';
        }
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}
