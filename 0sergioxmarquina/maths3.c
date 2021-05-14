#include <stdio.h>
#include<math.h>
int main()
{
   int x ,y=1;
   scanf("%d" , &x);
   y=pow(x,5)+10*pow(x,4)+8*pow(x,3)+4*x+2;
   printf("%d" , y);
   
  return 0;
}