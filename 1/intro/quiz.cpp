#include <iostream>

// Function to print out 3 numbers provided by the user
int main(){
    std::cout << "Enter three numbers: ";
    int a {};
    int b {};
    int c {};
    std::cin >> a >> b >> c;
    std::cout << "You entered " << a << ", " << b << ", and " << c << ".\n";


    int x {};
    x = 5;
    x = 2 + 3;
    std::cout << x << '\n';
    return 0;
}
