#include "operations.h"

int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int multiply(int x, int y) {
    return x * y;
}
int divide(int x, int y) {
    int result = y == 0 ? x : x / y;
    return result;
}
