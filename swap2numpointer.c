#include <stdio.h>
void swap(int *b, int *ptr)

{
    int a;
    a = *b;
    *b = *ptr;
    *ptr = a;

   
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}