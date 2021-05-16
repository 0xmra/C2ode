//Malloc in C
//Malloc doesn't have an idea what is is pointing to
//It simply allocates memory for us.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr != NULL)
    {
        printf("memory created successfully\n");
    }
    *(ptr + 0) = 10;
    *(ptr + 1) = 20;
    *(ptr + 2) = 30;
    *(ptr + 3) = 40;
    *(ptr + 4) = 50;

    return 0;
}
