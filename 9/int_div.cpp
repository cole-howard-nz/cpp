#include <iostream>
#include <cstdlib>


int main() {
    int x { 5 };
    int y { 3 };

    std::cout << static_cast<double>(x) / y << '\n';

    return EXIT_SUCCESS;
}
