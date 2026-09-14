#include "utils.h"


float convert_to_celsius(float temperature) {
  return (temperature - 32) * 5/9;
}

float convert_to_fahrenheit(float temperature) {
  return (temperature * 1.8) + 32;
}