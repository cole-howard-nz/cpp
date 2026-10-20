#include <string>
#include <iostream>
#include <cstdlib>

int main() {
    int choice { };
    std::string name { };
    std::string colour { };


    while (choice != 1 && choice != 2) {
        std::cout << "Enter a number (1 or 2): ";
        std::cin >> choice;
    }

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);
    
    std::cout << "Enter your favourite colour: ";
    std::getline(std::cin >> std::ws, colour);

    std::cout << "You chose: " << choice << '\n';
    std::cout << "Your name is: " << name << '\n';
    std::cout << "Your favourite colour is: " << colour << '\n';

    return EXIT_SUCCESS;
}
