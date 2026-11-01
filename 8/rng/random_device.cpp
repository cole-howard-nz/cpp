#include <iostream>
#include <random>

int main() {
    std::mt19937 mt { std::random_device{}() };
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
