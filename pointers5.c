//Call By Reference
#include<stdio.h>
void set(int *a)
{
    *a = 100;
    printf("When calling the function value of a = %d\n" , *a);
}

int main()
{
    int a =10;
    printf("Before calling function value of a = %d\n", a);
    set(&a);
     printf("Before calling function value of a = %d\n", a);

    return 0;
}