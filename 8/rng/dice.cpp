#include <random>
#include <iostream>

int main() {
    std::mt19937 mt { };
    std::uniform_int_distribution roll{ 1, 6 };

    for (int i { 1 }; i <= 10; ++i) {
        std::cout << roll(mt) << ' ';
        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }

    std::cout << '\n';

    return EXIT_SUCCESS;
}
