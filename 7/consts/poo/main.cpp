#include <iostream>
#include <cstdlib>

int get_number_of_classes();
int get_number_of_students_per_class();

constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << multiply(get_number_of_students_per_class(), get_number_of_classes()) << '\n';
    return EXIT_SUCCESS;
}
