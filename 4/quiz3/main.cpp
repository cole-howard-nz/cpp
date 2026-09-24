#include <iostream>
#include <cstdlib>

#define GRAVITY 9.8

int get_height() {
    std::cout << "Enter the height of the tower in meters: ";
    int x { };
    std::cin >> x;
    return x;
}
double calculate_distance(double height, int seconds) {
    return height - (GRAVITY * (seconds*seconds) / 2);
}
int main() {
    double height { 100 };
    for (int i = 0; i <= 5; ++i) {
        double current_height = calculate_distance(height, i);
        if (current_height < 1 ) {
            std::cout << "At " << i << " seconds, the ball is on the ground." << '\n';
            break;
        }
        std::cout << "At " << i << " seconds, the ball is at height: " << current_height << '\n';
    }

    return EXIT_SUCCESS;
}
