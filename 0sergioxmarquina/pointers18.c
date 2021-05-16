//Accessing string using pointer
#include <stdio.h>
int main()
{
    char str[6] = "hello";
    char *ptr;
    ptr = str;
    *(ptr + 3)= 'a';
    *(ptr + 4)='m';
    *(ptr + 5)='i';
    for (int i = 0; i < 6; i++)
    {
        printf("&str[%d] = %p\n", i, ptr + i);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("str[%d] = %c\n", i, *(ptr + i));//*(ptr+i) = ptr[i] = str[i];
    }

    return 0;
}