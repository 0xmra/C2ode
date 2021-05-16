//Array of pointers
#include <stdio.h>
int main()
{
    int *arr[5];
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    arr[0] = &a;//Address of a will be stored in arr[0]. That is it points to the variable a.
    arr[1] = &b;//Address of b will be stored in arr[1]. That is it points to the variable b.
    arr[2] = &c;//Address of c will be stored in arr[2]. That is it points to the variable c.
    arr[3] = &d;//Address of d will be stored in arr[3]. That is it points to the variable d.
    arr[4] = &e;//Address of e will be stored in arr[4]. That is it points to the variable e.

    //*arr[index] will give the values stored in it
    for(int i = 0; i <5;i++)
    {
        printf("Address = %p\n" , arr[i]);
    }
    printf("\n");
    for(int i = 0; i <5;i++)
    {
        printf("Value = %d\n" , *arr[i]);
    }
    return 0;
}