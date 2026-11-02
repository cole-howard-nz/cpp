#include "random.h"
#include <iostream>
#include <cstdlib>


namespace constants {
    constexpr int attempts { 7 };
    constexpr int max { 100 };
    constexpr int min { 1 };
}

void game(int attempts, int min, int max) {
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << attempts << " tries to guess what it is.\n";

    int answer { Random::get(min, max) };

    for (int used_attempts { 1 }; used_attempts <= attempts; ++used_attempts) {
        std::cout << "Guess #" << used_attempts << ": ";

        int guess { 0 };
        std::cin >> guess;

        if (guess == answer) {
            std::cout << "Correct! You win!" << '\n';
            return;
        }
        else if (guess > answer) {
            std::cout << "Your guess is too high." << '\n';
        }
        else if (guess < answer) {
            std::cout << "Your guess is too low." << '\n';
        }
    }
    
    std::cout << "Sorry, you lose. The correct answer was " << answer << '.' << '\n';
}

bool play_again() {
    while (true) {
        std::cout << "Would you like to play again (y/n)? ";
        char input { };
        std::cin >> input;
    
        switch (input) {
            case 'y':
            case 'Y':
                return true;
            case 'n':
            case 'N':
                return false;
        }
    }
}

int main() {
    do {
        game(constants::attempts, constants::min, constants::max);
    } while (play_again());

    return EXIT_SUCCESS;
}
