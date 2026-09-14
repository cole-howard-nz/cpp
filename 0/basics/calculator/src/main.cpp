#include "calculator.h"
#include <iostream>


int main() {
  Calculator calc;
  std::cout << calc.add(5, 5) << std::endl;
  std::cout << calc.subtract(5, 5) << std::endl;
  std::cout << calc.multiply(5, 5) << std::endl;
  std::cout << calc.divide(5, 5) << std::endl;
  std::cout << calc.divide(5, 0) << std::endl;
  return 0;
}
