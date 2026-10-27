#include <iostream>
#include <cstdlib>

namespace globals {
    int g_x { 1 };
}


void update_globals() {
    std::cout << "globals: " << globals::g_x << '\n';
    globals::g_x = 5;
}

int main() {
    std::cout << "globals: " << globals::g_x << '\n';
    update_globals();
    std::cout << "globals: " << globals::g_x << '\n';
    globals::g_x = 10;
    std::cout << "globals: " << globals::g_x << '\n';

    return EXIT_SUCCESS;
}
