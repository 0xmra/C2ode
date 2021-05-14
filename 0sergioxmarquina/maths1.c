#include <stdio.h>
#include<math.h>
int main()
{
   float a , x, b,res;
   scanf("%f %f %f" , &a , &x ,&b );
   if((a*x-b)==0)
   {
      printf("Not Defined");
   }
   else
   {
   res=(a*x+b)/(a*x-b);
   printf("%f" , res);
   }

   return 0;

}