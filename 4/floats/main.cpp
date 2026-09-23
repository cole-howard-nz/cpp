#include <cstdlib>
#include <iostream>
#include <limits>
#include <iomanip>


int main(){
    float f { 5.55567f };
    double d { 5.55567f };
    long double l { 5.55567l };

    // Does not work, must be called through std::cout
    // std::setprecision(17);

    std::cout << std::setprecision(17);
    std::cout << f << '\n';
    std::cout << d << '\n';
    std::cout << l << '\n';

    std::cout << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << std::numeric_limits<long>::is_iec559 << '\n';

    return EXIT_SUCCESS;
}
