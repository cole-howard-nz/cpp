#include <iostream>

int add(int x, int y);
int sub(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);


int main(){
    std::cout << add(3,2) << "\n";
    std::cout << sub(3,2) << "\n";
    std::cout << divide(3,2) << "\n";
    std::cout << divide(3,0) << "\n";
    std::cout << multiply(3,2) << "\n";
    return 0;
}
