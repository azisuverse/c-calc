#include "utils.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void handle_signal(int signal) {
  if (signal == SIGINT) {
    printf("\nC-CALC stopped. Thanks for using this program!\n");
    exit(0);
  }
}

int choice_input_validation(int *choice, const char *prompt) {
  printf("%s", prompt);

  if (scanf("%d", choice) != 1) {
    printf("Choice is not number. Program stopped.\n");
    exit(1);
  }
  return *choice;
}

float add_input_validation(const char *prompt) {
  float num;

  printf("%s", prompt);

  if (scanf("%f", &num) != 1) {
    printf("Input is not number. Program stopped.\n");
    exit(1);
  }

  return num;
}
