#include <iostream>

int main() {
  int class_count;

  std::cout << "Enter how many classes you are enrolled in: ";
  std::cin >> class_count;

  int* grades = new int[class_count];

  for (int i = 0; i < class_count; ++i) {
    std::cout << "Enter a grade: ";
    std::cin >> grades[i];
  }

  float total;
  for (int i = 0; i < class_count; ++i) {
    total += grades[i];
  }
  float avg = total / class_count;

  std::cout << "Your average is " << avg;

  delete[] grades;
  return 0;
}

