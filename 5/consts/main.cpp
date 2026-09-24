#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Enter an integer: ";
    int a { };
    std::cin >> a;
    const int constant { a };
    std::cout << "You entered: " << constant << ".\n";

    return EXIT_SUCCESS;
}
