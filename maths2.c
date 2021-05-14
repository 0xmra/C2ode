#include <stdio.h>
#include<math.h>
int main()
{
   float x , y , z;
   scanf("%f %f" , &x,&y);
   z = 2.5*log(x)-cos(30)+fabs(x*x-y*y)+sqrt(2*x*y);
   
   printf("%f" , z);
return 0;
}