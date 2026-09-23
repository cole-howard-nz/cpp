#include <iostream>
#include <cstdlib>


int get_integer() {
    std::cout << "Enter an integer (between 0 and 9): ";
    int value { };
    std::cin >> value;
    return value;
}

bool is_prime(int value) {
    if (value < 1) {
        return 0;
    }
    // if ((value / 1) % 2 == 0 && (value / value) % 2 == 0) {
    //     return 1;
    // }
    if (value == 2 || value == 3 || value == 5 || value == 7) {
        return 1;
    }
    return 0;
}

int main() {
    int value { get_integer() };
    bool b_prime { is_prime(value) };
    std::cout << (b_prime ? "The digit is prime\n" : "The digit is not prime\n"); 
    return EXIT_SUCCESS;
}
