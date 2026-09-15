#include <iostream>

float multiply_numbers(float a, float b){
    return a * b;
}

float get_user_input(){
    float a { };
    std::cin >> a;
    return a;
}

void print_result(float a, float b){
    std::cout << "The result of multiplying " << a << " and " << b << " is: " << multiply_numbers(a , b) << ".\n";
}

int main(){
    std::cout << "Enter two numbers separated by a space: ";
    print_result(get_user_input(), get_user_input());
    return 0;
}
