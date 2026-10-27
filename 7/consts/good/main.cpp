#include <cstdlib>
#include <iostream>

#include "consts.h"


constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    const int result { multiply(consts::number_of_classes, consts::number_of_students) };
    std::cout << result << '\n';

    return EXIT_SUCCESS;
}
