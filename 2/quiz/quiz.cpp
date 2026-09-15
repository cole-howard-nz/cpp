#include <iostream>
#include <cstdlib>


int double_number(int x){
    return x * 2;
}

int main(){
    std::cout << "Enter a number: ";
    int x{ };
    std::cin >> x;
    std::cout << "The result of " << x << " x 2" << " = " << double_number(x) << ".\n";
    
    return EXIT_SUCCESS;
}
