#include <iostream>
#include <cstdlib>

#define ANOTHER_CONSTANT 5
#define NUMBER 3
#define __NUMBER 3 // Prefer to prefix or structure pre compiler defined constants
// #define number 3  -- No go since we are using this variable name in useConstant

void useConstant(int number) {
    std::cout << number << '\n';
    std::cout << NUMBER << '\n';
}
int main() {
    std::cout << "Enter an integer: ";
    int a { };
    std::cin >> a;
    const int CONSTANT { a };
    std::cout << "You entered: " << CONSTANT << ".\n";
    std::cout << "Defined constant: " << ANOTHER_CONSTANT << ".\n";

    useConstant(4);

    return EXIT_SUCCESS;
}
