// Include for the EXIT_* variables
#include <cstdlib>

int main() {
    // EXIT_SUCCESS = 0 
    if (EXIT_SUCCESS) {
        return EXIT_SUCCESS;
    }

    // EXIT_FAILURE = 1
    if (EXIT_FAILURE) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
