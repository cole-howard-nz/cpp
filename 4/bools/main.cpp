#include <cstdlib>
#include <iostream>

int main() {
    bool t { true };
    bool f { false };
    bool tru { 1 } ;
    bool fal { 0 };

    // Can't set to other values than 0 or 1, error: narrowing conversion -- bool -> int
    bool test { 0 };
    test = 3;

    std::cout << t << '\n';
    std::cout << f << '\n';
    std::cout << tru << '\n';
    std::cout << fal << '\n';
    std::cout << test << '\n';
    std::cout << std::boolalpha << '\n';
    std::cout << t << '\n';
    std::cout << tru << '\n';
    std::cout << test << '\n';

    return EXIT_SUCCESS;
}
