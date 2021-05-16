//String and Pointer
#include <stdio.h>

//String is a character array which is terminated by a null character.
int main()
{
    char str[6] = {"hello"};
    //String name str itself is a pointer to the base address of the string. So here str is a pointer to the first character of the string.

    for (int i = 0; i < 6; i++)
    {
        printf("&str[%d] = %p\n", i, str + i);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("str[%d] = %c\n", i, *(str + i));
    }

    return 0;
}