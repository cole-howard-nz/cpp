#include <random>
#include <iostream>


int main() {
    std::random_device rd { };
    std::seed_seq seed { rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt { seed };
    std::uniform_int_distribution deck { 1, 52 };

    for (int i { 1 }; i <= 52; ++i) {
        std::cout << deck(mt) << "  ";
        if (i % 4 == 0) {
            std::cout << '\n';
        }
    }
    std::cout << '\n';
    return EXIT_SUCCESS;
}
