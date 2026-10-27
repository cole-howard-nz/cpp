#include <iostream>
#include <cstdlib>
#include <utility>
#include <string_view>


const int getNumber(std::string_view message) {
    std::cout << message;
    int number { };
    std::cin >> number;
    return number;
} // message and number die here

int main() {
    int smaller { getNumber("Enter an integer: ") };
    int larger { getNumber("Enter a larger integer: ") };

    if (smaller > larger) {
        std::cout << "Swapping the values" << '\n';
        std::swap(smaller, larger);
    }

    std::cout << "The smaller value is: " << smaller << '\n';
    std::cout << "The larger value is: " << larger << '\n';

    return EXIT_SUCCESS;
} // smaller and larger die here
