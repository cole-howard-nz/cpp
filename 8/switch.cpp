#include <iostream>

void do_switch(const int number) {
    switch (number) {
    case 1:
    // {   // we can add a block to create a scope for this case however..
        std::cout << "One!" << '\n';
        int x; // declare x in case 1:
        x = 5; // scope is all relaive for a switch statement, cases arent individual scopes
        break;
    // }
    case 2:
        std::cout << "Two!" << '\n';
        std::cout << x << '\n'; // use x in case 2:
        break;
    case 3:
        std::cout << "Three!" << '\n';
        break;
    case 4:
    case 5:
    case 6:
        std::cout << "Four, five or six?" << '\n';
        break;
    default:
        std::cout << "Some other number.." << '\n';
        break;
    }
}

int main() {
    constexpr int one { 1 };
    do_switch(one);
    constexpr int two { 2 };

    do_switch(two);

    return EXIT_SUCCESS;
}
