//Void Pointers
#include <stdio.h>
int main()
{
    int i = 10;
    char c = 'a';
    void *ptr;
    ptr = &i;
    printf("Value of i = %d\n", *(int*)ptr);

    ptr = &c;
    printf("Value of c = %c\n", *(char*)ptr);

    return 0;
}