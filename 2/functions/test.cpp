#include <iostream>

float multiply(float a, float b) {
    return a * b;
}

void returnNothing() {
    return;
}

void printMessage(float value) {
    std::cout << "The result of multiplying is " << value << ".\n";
}


int main() {
    int a { };
    int b { };

    std::cout << "Enter two numbers, separated by a space: ";
    std::cin >> a >> b;

    printMessage(multiply(a, b));
    
    returnNothing();
    returnNothing();
    returnNothing();

    return 0;
}
