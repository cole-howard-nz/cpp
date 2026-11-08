#include <iostream>
#include <limits>

#include "random.h"


namespace Constants {
    constexpr int min { 1 };
    constexpr int max { 100 };
    constexpr int attempts { 7 };
}

int get_number(int attempt) {
    while (true) {
        int number { 0 };
        std::cout << "Guess #" << attempt << ": ";
        std::cin >> number;

        bool success { std::cin };
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (!success || number < Constants::min || number > Constants::max) {
            continue;
        }

        return number;
    }
}

bool get_boolean() {
    while (true) {
        char input { };
        std::cout << "Would you like to play again (y/n)? " << '\n';
        std::cin >> input;

        switch (input) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                continue;
        }
    }
}

int main() {
    bool b_continue { true };
    
    while (b_continue) {
        int answer { Random::get(Constants::min, Constants::max) };
        int attempt { 1 };
        bool won { false };

        std::cout << "Let's play a game. I'm thinking of a number between " << Constants::min << " and " << Constants::max << ". You have " << Constants::attempts << " tries to guess what it is.\n";
        while (attempt <= Constants::attempts) {
            int guess { get_number(attempt) };
            if (guess == answer) {
                std::cout << "Correct! You win!" << '\n';
                won = true;
                break;
            }
    
            if (guess < answer) {
                std::cout << "Your guess is too low." << '\n';
            }
            else if (guess > answer) {
                std::cout << "Your guess is too high." << '\n';
            }

            ++attempt;
        }

        if (!won) {
            std::cout << "Sorry, you lose. The correct number was " << answer << "." << '\n';
        }

        b_continue = get_boolean();
        std::cout << '\n';
    }

    return EXIT_SUCCESS;
}
