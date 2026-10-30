#include <iostream>
#include <random>

int main() {
    // std::mt19937_64 mt { };
    std::mt19937 mt { };

    for (int i { 1 }; i <= 10; ++i) {
        std::cout << mt() << ' ';
        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }
    std::cout << '\n';
}
