#include <stdio.h>
int main(void) {
  double height;

  printf("What is your height (in cm)");
  scanf("%lf", &height);
  printf("So you are %.2lf tall!\n", height);
  return 0;
}
