#include <stdio.h>
int main(void) {
  int first, second, third;
  printf("Please enter 3 intergers: \n");
  scanf("%d%d%d", &first, &second, &third);
  printf("You entered %d for the first, %d for the second, %d for third\n", first, second, third);
  return 0;
}
