#include <stdio.h>
int main(void) {
  int i;
  int numberOfNuts = 0;
  int distanceTraveled = 0;

   for(i = 0; i < 9; i++) {
     printf("At %d miles I have %d nuts. \n", distanceTraveled, numberOfNuts);
     distanceTraveled = distanceTraveled + 1;
     numberOfNuts = numberOfNuts +3;
   }
  return 0;
}
