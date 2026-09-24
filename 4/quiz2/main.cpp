#include <iostream>

double add(double x, double y){
    return x + y;
}
double sub(double x, double y){
    return x - y;
}
double mult(double x, double y){
    return x * y;
}
double div(double x, double y){
    return y == 0 ? x : x / y;
}
double get_double() {
    double d { };
    std::cout << "Enter a double value: ";
    std::cin >> d;
    return d;
}
char get_operator() {
    char o { };
    std::cout << "Enter +, -, * or /: ";
    std::cin >> o;
    return o;
}
int main() {
    double a { get_double() };
    double b { get_double() };
    char op { get_operator() };
    switch (op) {
        case '+':
            std::cout << a << " + " << b << " = " << add(a, b) << '\n';
            break;
        case '-':
            std::cout << a << " - " << b << " = " << sub(a, b) << '\n';
            break;
        case '*':
            std::cout << a << " * " << b << " = " << mult(a, b) << '\n';
            break;
        case '/':
            std::cout << a << " / " << b << " = " << div(a, b) << '\n';
            break;
        default:
            break; 
    }
    return 0;
} 
