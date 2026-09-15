#include <iostream>


float get_user_input(){
    float a{ };
    std::cin >> a;
    return a;
}

float multiply(float a, float b){
    return a * b;
}

int main(){
    std::cout << "Enter two numbers separated by a space: ";

    float a{ get_user_input() }; 
    float b{ get_user_input() };

    std::cout << "The result of multiplying the two numbers is: " << multiply(a,b) << ".\n";

    return 0;
}
