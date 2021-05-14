#include <stdio.h>
int main()
{ 
     int a = 76;
     int *ptra ;
     ptra =  &a;
     printf("The address of pointer to a %p\n" , &ptra);//for accessing address use %p or %x (hexadecimal)
     printf("The address of a is %p\n" , &a);//for accessing address use %p or %x (hexadecimal)
     printf("The address of a is %p\n" , ptra);//for accessing address use %p or %x (hexadecimal)
     printf("The value of a is %d\n" , *ptra);
     printf("The value of a is %d\n" , a);

     return 0;

    
     
}