#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", a+i);
        p++;
    }
    return 0;
}
