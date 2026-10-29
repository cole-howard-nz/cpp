#include <iostream>


int sumTo(int number) {
    int sum { 0 };
    for (int i { number }; i > 0; i--)
        sum += i;
    return sum;
}

int main() {
    std::cout << sumTo(5) << '\n';

    return EXIT_SUCCESS;
}
