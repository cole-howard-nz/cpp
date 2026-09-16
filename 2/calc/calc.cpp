#include "utils.h"

#include <cstdlib>
#include <iostream>

int main(){
    // Get first number from user
    std::cout << "Enter a number: ";
    float x { get_user_input() };

    // Get mathematical operation from user
    char op { get_operation() };

    // Get second number from user
    std::cout << "Enter another number: ";
    float y { get_user_input() };

    // Calculate result
    float result { calculate_result(x, op, y) };

    // Print result
    std::cout << x << op << y << '=' << result << '\n';
    return EXIT_SUCCESS;
}
