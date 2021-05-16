//Dangling Pointers ---> Points to a memory location which is deleted or freed.
#include <stdio.h>
int main()
{
    int *ptr;
    {
        int a  =10;
        ptr = &a;

    }
    ptr = NULL;

    return 0;
}