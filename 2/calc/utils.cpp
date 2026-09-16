#include "utils.h"
#include "operations.h"

#include <iostream>
#include <cstdlib>

float get_user_input(){
    float input { };
    std::cin >> input;
    return input;
}

char get_operation(){
    char input { };
    while (input != '+' &&
           input != '-' &&
           input != '*' &&
           input != '/') {
        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> input;
    }
    return input;
}

float calculate_result(float x, char op, float y){
    switch (op) {
        case '+':
            return addition(x, y);
            break;
        case '-':
            return subtract(x, y);
            break;
        case '*':
            return multiply(x, y);
            break;
        case '/':
            return division(x, y);
            break;
        
        default:
            return EXIT_FAILURE;
            break;
    };
}
