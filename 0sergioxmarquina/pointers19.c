//%s and string
#include<stdio.h>
int main()
{
    char str[6] = "Hello";
     for (int i = 0; str[i] != '\0'; i++)
     {
         printf("%s\n" , str+i);
     }

    return 0;
}