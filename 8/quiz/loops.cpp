#include <iostream>

int main() {
    char ascii { 'a' };
    while (ascii <= 'z') {
        std::cout << ascii << " (" << static_cast<int>(ascii) << ") ";
        ascii++;
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}
