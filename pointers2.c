#include<stdio.h>
int main()
{
    int a  = 10;
    int *ptr = &a;
    int **dptr = &ptr;
    printf("Value of a = %d\t\t", a);
    printf("Address of a  = %p\n\n", &a);

    printf("Value of a using the pointer = %d\t\t", *ptr);
    printf("Address of a using the pointer = %p\n\n", ptr);
   
    printf("Address of ptr  = %p\t\t", &ptr);
    printf("Value stored at ptr using double pointer = %p\n\n", *dptr );

    printf("Address of dptr  = %p\t\t", &dptr);
    printf("Value stored at dptr using double pointer = %p", dptr );
   

    return 0;
}