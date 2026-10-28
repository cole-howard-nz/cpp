#include <iostream>

int main(){
    constexpr int number { 5 };

    if constexpr (number == 5) {
        std::cout << "Number is 5" << '\n';
    } else {
        std::cout << "Number is not 5" << '\n';
    }

    return EXIT_SUCCESS;
}
