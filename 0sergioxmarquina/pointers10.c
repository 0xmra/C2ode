//Dangling Pointers
/*
If we again allocate dynamic memory for another pointer q the same memory allocation may get allocated to q
now both p and q point to the same memory location.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = malloc(2 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    free(p);
    p = NULL;

    int *q = malloc(2 * sizeof(int));
    q[0] = 100;
    q[1] = 200;
    printf("%d\t%d\n", p[0], p[1]);

    return 0;
}