//Realloc in C
#include<stdio.h>
#include <stdlib.h>
int main()
{  
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr = realloc(ptr, 2 * sizeof(int));
    ptr = realloc(ptr, 6 * sizeof(int));
    // Use free() to free the memory allocated and to avoid memory leaks
    // Double free is undefined
    return 0;
}