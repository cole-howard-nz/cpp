#include <iostream>

#include "utils.h"

int main() {
  float temperature;
  char scale;

  std::cout << "Enter a temperature: ";
  std::cin >> temperature;
  std::cout << "Enter your temperatures scale, fahrenheit (f) or celsius (c): ";
  std::cin >> scale;

  if (scale == 'c') {
    std::cout << temperature << " celsius converted to fahrenheit is " << convert_to_fahrenheit(temperature) << std::endl;
  } else if (scale == 'f') {
    std::cout << temperature << " fahrenheit converted to celsius is " << convert_to_celsius(temperature) << std::endl;
  } else {
    std::cout << "Unknown scale";
  }
}

