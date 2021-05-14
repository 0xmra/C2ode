#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Anurag";
    char string2[] = "Batman";
    int a;
    a = strcmp(string1, string2);
    printf("\n%d", a);
    return 0;
}