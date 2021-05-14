#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof(int)
int main()
{
    int array1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array2[10] = {9, 8, 7, 6, 5};
    int array3[] = {12, 34, 5, 78, 90, 100, 45, 81, 45};

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array1[i]);
    }

    printf("\n");

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", array2[j]);
    }
    printf("\n");

    for (int k = 0; k < sizeof(array3) / sizeof(int); k++)
    {
        printf("%d\n", array3[k]);
    }

    return 0;
}