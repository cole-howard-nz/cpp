#include <cstdlib>
#include <iostream>


constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    constexpr int max_students_per_class = 30;
    constexpr int number_of_classes = 7;
    constexpr int max_students = multiply(max_students_per_class, number_of_classes);

    std::cout << max_students << '\n';

    const int test = multiply(5, 10);
    constexpr int result = test;

    std::cout << result << '\n';

    return EXIT_SUCCESS;
}
