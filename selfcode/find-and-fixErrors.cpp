#include <stdio.h>

int main (void) {
  int i;

  printf("+");
  for (i = 0; i < 23; i++)
  printf("-");
  printf("+\n");

  for (i = 0; i < 3; i++) { // "{}" these were missing
      printf("| o | X | o | X | o | X |");
      printf("\n");
      printf("| X | o | X | o | X | o |");
      printf("\n");
    } // causing an print error 

  printf("+");
  for (i = 0; i <23; i++)
  printf("-");
  printf("+");

  return 0;
}
