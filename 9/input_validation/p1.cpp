#include <string_view>
#include <iostream>
#include <cstdlib>
#include <limits>


void ignore_line() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double get_decimal_number(std::string_view message) {
    while (true) {
        std::cout << message;
        double input { };
        std::cin >> input;
        
        bool success { std::cin };
        std::cin.clear();
        ignore_line();

        if (success) {
            return input;
        }
    }
}

char get_operator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op { };
        std::cin >> op;
        ignore_line();

        switch (op) {
            case '+':
            case '-':
            case '*':
            case '/':
                return op;
            default:
                continue;
        }
    }
}

double compute_answer(double x, char op, double y) {
    switch (op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return (y == 0) ? -1 : x / y;
        default:
            std::cout << "Unknown operator passed to compute_answer()";
            return -1;
    }
}

int main() {    
    double x { get_decimal_number("Enter a decimal number: ") };
    char op { get_operator() };
    double y { get_decimal_number("Enter another decimal number: ") };

    std::cout << x << " " << op << " " << y << " = " << compute_answer(x, op, y) << '\n';
        
    return EXIT_SUCCESS;
}
