#include "calc.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void add(float x, float y) { printf("The result of addition: %.2f\n", x + y); }

void subtract(float x, float y) {
  printf("The result of subtraction: %.2f\n", x - y);
}

void multiply(float x, float y) {
  printf("The result of multiplication: %.2f\n", x * y);
}

void divide(float x, float y) {
  if (y != 0) {
    printf("The result of division: %.2f\n", x / y);
  } else {
    printf("Error: Unable division with zero!\n");
  }
}

void operation(int choice, float x, float y) {
  switch (choice) {
  case 1:
    add(x, y);
    break;
  case 2:
    subtract(x, y);
    break;
  case 3:
    multiply(x, y);
    break;
  case 4:
    divide(x, y);
    break;
  default:
    printf("Choice is not valid. Try again\n");
  }
}
