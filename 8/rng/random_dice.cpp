#include <chrono>
#include <random>
#include <iostream>

int main() {
    std::mt19937 mt { static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count()
    ) };

    std::uniform_int_distribution roll{ 1,6 };

    for (int count { 1 }; count <= 30; ++count) {
        std::cout << roll(mt) << "  ";

        if (count % 10 == 0) {
            std::cout << '\n';
        }
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}
