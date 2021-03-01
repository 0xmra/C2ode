#include <stdio.h>
int main(void) {
  int i;
  int io = 0;
  int num = 0;

  for (i = 0; i < 11 ; i++) {
    scanf("%d\n", io);
    printf("%d x io = %d \n", num, io);
    num = num +1;
    //io = io *num;
    // this is a git test command
  
  }
  return 0;
}
