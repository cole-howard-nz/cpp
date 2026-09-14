#include <stdio.h>


void complex() {
  printf("Multiple files to compile? gcc -o <obj name> <source file> <source file> ...");
}

void optimise() {
  printf("Want to optimise your compilations? gcc -O3 -o <obj name> <source file>\n");
}

int main() {
  printf("Compile with CMake! gcc -o <obj name> <source file>\n");
  optimise();

  while (1) {
  }
}