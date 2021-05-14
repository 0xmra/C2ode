#include <stdio.h>
int main()
{

    int a = 10;
    int *ptr = &a;
    printf("Value of a = %d\t\t", a);
    printf("Address of a  = %p\n\n", &a);

    printf("Value of a using the pointer = %d\t\t", *ptr);
    printf("Address of a using the pointer = %p\n\n", ptr);

    printf("Address of pointer ptr = %p", &ptr);

    return 0;
}