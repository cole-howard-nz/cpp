#include <string>
#include <string_view>
#include <iostream>
#include <cstdlib>

int main() {
    std::string str { "Hello, World!" };
    std::string_view strView { str };

    str = "Test";

    std::cout << strView << '\n';

    return EXIT_SUCCESS;
}
