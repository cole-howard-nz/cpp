#include <iostream>
#include <cstdlib>


int getNumber() {
    int num { };
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

constexpr bool isEven(int number) {
    return !(number & 1);
}

int main() {
    const int num { getNumber() };
    const bool bEven { isEven(num) };

    std::cout << num << " is " << (bEven ? "even" : "odd") << '\n';

    return EXIT_SUCCESS;
}
