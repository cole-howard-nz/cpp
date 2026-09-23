#include <cstdlib>
#include <iostream>

int main() {
    bool t { true };
    bool f { false };
    bool tru { 1 } ;
    bool fal { 0 };

    std::cout << t << '\n';
    std::cout << f << '\n';
    std::cout << tru << '\n';
    std::cout << fal << '\n';
    std::cout << std::boolalpha << '\n';
    std::cout << t << '\n';
    std::cout << tru << '\n';

    return EXIT_SUCCESS;
}
