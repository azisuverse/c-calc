#include "calc.h"
#include "utils.h"
#include <signal.h>
#include <stdio.h>

int main() {
  int choice;
  float x, y;

  signal(SIGINT, handle_signal);

  printf("\n===== C-CALC =====\n");
  printf("1. Addition (+)\n");
  printf("2. Subtraction (-)\n");
  printf("3. Multiplication (*)\n");
  printf("4. Division (/)\n");
  printf("5. Exit\n");

  choice_input_validation(&choice, "Choose operation (1-5): ");

  if (choice < 1 || choice > 5) {
    printf("Choose input is not valid. Program stopped.\n");
    return 1;
  }

  if (choice == 5) {
    printf("Thanks for using C-CALC!\n");
    return 0;
  }

  x = add_input_validation("Enter the first number: ");
  y = add_input_validation("Enter the last number: ");

  operation(choice, x, y);

  printf("Program ended. Thanks for using C-CALC!\n");

  return 0;
}
