#include <iostream>
#include <cstdlib>
#include <string>


// getName
std::string getName() {
    std::string name { };
    std::getline(std::cin >> std::ws, name);

    return name;
}

// getAge
int getAge() {
    int age { };
    std::cin >> age;

    return age;
}

// printOlder
void printOlder(std::string_view p1, int a1, std::string_view p2, int a2) {
    if (a1 > a2) {
        std::cout << p1 << " (age " << a1 << ") is older than " << p2 << " (age " << a2 << ")" << '\n';
        return;
    }
    std::cout << p2 << " (age " << a2 << ") is older than " << p1 << " (age " << a1 << ")" << '\n';
}


int main() {
    std::cout << "Enter the name of person #1: ";
    std::string p1 { getName() };

    std::cout << "Enter the age of " << p1 << ": ";
    int a1 { getAge() };

    std::cout << "Enter the name of person #2: ";
    std::string p2 { getName() };

    std::cout << "Enter the age of " << p2 << ": ";
    int a2 { getAge() };

    printOlder(p1, a1, p2, a2);

    return EXIT_SUCCESS;
}
