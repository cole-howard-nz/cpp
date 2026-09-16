#include "operations.h"


float addition(float x, float y){
    return x + y;
}
float multiply(float x, float y){
    return x * y;
}
float subtract(float x, float y){
    return x - y;
}
float division(float x, float y){
    float result { };
    return y == 0 ? x : x / y;
}
