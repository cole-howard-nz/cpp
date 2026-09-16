#include "io.h"
#include <iostream>

int read_number(){
    std::cout << "Enter a number: ";
    int a { };
    std::cin >> a;
    return a;
}

void write_answer(int result){
    std::cout << "The result is " << result << ".\n";
}
