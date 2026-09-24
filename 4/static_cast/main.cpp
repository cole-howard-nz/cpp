#include <iostream>
#include <cstdlib>

void print(int i) {
    std::cout << i << '\n';
}

int main() {
    double x { 5.5 };
    int y { static_cast<int>(x) };
    print(y);

    //

    char c = { 99 };
    char cee = { 'c' };
    std::cout << c << '\n';
    std::cout << cee << '\n';
    std::cout << static_cast<int>(cee) << '\n';

    return EXIT_SUCCESS;
}
