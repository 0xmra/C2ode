#include <stdio.h>
int main(void) {

  int io = 0;
  int num = 0;
  int mul; // this will make sure that it uses any number to print the tables.
  
  scanf("%d", &mul);

  for (int i = 0; i < 11 ; i++) {
    printf("%dx%d = %d \n", num, mul, io );
    num = num +1;
    io = io + mul;
  }
  return 0;
}
