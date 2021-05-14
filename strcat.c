#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "This is ", str2[] = "A Name";

    printf("Concated string is %s\n = ", strcat(str1, str2));

    puts(str1); // concatenates str1 and str2

    puts(str2); // the resultant string is stored in str1.

    return 0;
}