

#include <stdio.h>

int main()
{
    int k = 0;
    char name[100];

    scanf("%s", name);

    for (int i = 0; i < 100; i++)
    {
        if (name[i] != '\0')
        {
            k++;
        }
        else
        {
            break;
        }
    }
    printf("%d", k);

    return 0;
}