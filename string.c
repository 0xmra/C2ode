#include <stdio.h>

void printstring(char str[])
{
    int i = 0;
    while (str[i] != '\0')

    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    char name[] = {'A', 'N', 'U', 'R', 'A', 'G', '\0'};
    char school[50];
    scanf("%[^\n]%*c" , school);
    printf("%s\n", school);
    puts(school);

    printstring(name);
    return 0;
}