#include <iostream>


int generate_number(unsigned int seed) {
    static unsigned int s_count { seed };

    s_count = 8253729 * s_count + 2396403;
    return s_count % 32768;
}

int main() {
    while (true) {
        unsigned int seed { 0 };
        std::cout << "Enter a seed number: ";
        std::cin >> seed;
    
        for (int count = { 0 }; count < 10; ++count) {
            std::cout << generate_number(seed) << ' ';
        }
    
        std::cout << '\n';
    }
    return EXIT_SUCCESS;
}
