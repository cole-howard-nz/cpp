#include <iostream>

void print_table(int number) {
  for (int i = 1; i < number; ++i) {
    std::cout << number << " x " << i << " = " << number * i << std::endl;
  }
}

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  print_table(number);
}