#include <string>
#include <iostream>
#include <cstdlib>


int main() {
    using namespace std::string_literals;
    
    std::cout << "Hello, World from C-Style!" << '\n';
    std::cout << "Hello, World from string literal!"s << '\n';

    return EXIT_SUCCESS;
}
