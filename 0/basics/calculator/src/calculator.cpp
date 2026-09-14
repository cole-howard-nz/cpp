#include "calculator.h"

float Calculator::add(float x, float y) {
  return x + y;
}

float Calculator::subtract(float x, float y) {
  return x - y;
}

float Calculator::multiply(float x, float y) {
  return x * y;
}

float Calculator::divide(float x, float y) {
  return y == 0 ? x : x / y;
}