#include <cstdlib>
#include <iostream>


int main() {
    float zero { 0 };
    double posinf { 5.0 / zero };
    double neginf { -5.0 / zero };
    double poszero { zero / posinf };
    double negzero { zero / neginf };
    double nan { zero / zero };

    std::cout << zero << '\n';
    std::cout << posinf << '\n';
    std::cout << neginf << '\n';
    std::cout << poszero << '\n';
    std::cout << negzero << '\n';
    std::cout << nan << '\n';

    
    return EXIT_SUCCESS;
}
