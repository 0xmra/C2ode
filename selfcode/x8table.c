#include <stdio.h>
int main(void) {
  int i;
  int io = 0;
  int num = 0;

  for (i = 0; i < 11 ; i++) {
    printf("%dx8 = %d \n", num, io );
    num = num +1;
    io = io +8;
  }
  return 0;
}
