//Call By Value
#include<stdio.h>

void set(int a)
{
    a = 10;
   printf("When calling the function value of a = %d\n" , a);
}
int main()
{
    int a = 10;
    printf("Before calling function value of a = %d\n", a);
    set(a);
     printf("After calling function value of a = %d\n", a);

    return 0;
}