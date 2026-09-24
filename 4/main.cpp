#include <iostream>
int get_num(char c) {
    return c;
}
int main() {
    std::cout << "Enter a single character: " << '\n';
    char x { };
    std::cin >> x;
    std::cout << "You entered \'" << x << "\', which has ASCII code " << get_num(x) << ".\n";
    return 0;
}
