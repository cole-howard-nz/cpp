#include <string>
#include <iostream>
#include <cstdlib>

int main() {
    std::string str { "Hello, World!" };
    std::cout << str << '\n';
    str = "Hello, C++20!";
    std::cout << str << '\n';

    return EXIT_SUCCESS;
}
