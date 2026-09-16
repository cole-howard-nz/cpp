#include <iostream>
#include <cstdlib>

#include "operations.h"

int main(){
    std::cout << add(5, 5) << '\n';
    std::cout << sub(5, 5) << '\n';
    std::cout << multiply(5, 5) << '\n';
    std::cout << divide(5, 5) << '\n';
    std::cout << divide(5, 0) << '\n';

    return EXIT_SUCCESS;
}
