#include <string>
#include <iostream>
#include <cstdlib>

int main() {
    std::string name { };
    int age { };

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    int nameLength { static_cast<int>(name.length()) };
    std::cout << "Your age + length of name is " << age + nameLength << '\n';

    return EXIT_SUCCESS;
}
