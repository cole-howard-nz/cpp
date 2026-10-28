#include <iostream>
#include <string_view>

int calculate(int x, int y, char op) {
    switch (op) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '/':
        return y == 0 ? -1 : x / y;
    case '*':
        return x * y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator passed" << '\n';
        return -1;
    }
}

int get_integer(std::string_view message) {
    std::cout << message;

    int number { };
    std::cin >> number;
    return number;
}

char get_operator() {
    std::cout << "Enter an operator (+, -, /, * or %): ";

    char op { };
    std::cin >> op;

    switch (op) {
    case '+':
    case '-':
    case '/':
    case '*':
    case '%':
        return op;
    default:
        std::cout << "Invalid operator passed" << '\n';
        return -1;
    }
}

int main() {
    int one { get_integer("Enter an integer: ") };
    
    char op { get_operator() };
    if (op == -1) {
        return EXIT_SUCCESS;
    }

    int two { get_integer("Enter another integer: ") };

    std::cout << calculate(one, two, op) << '\n';

    return EXIT_SUCCESS;
}
