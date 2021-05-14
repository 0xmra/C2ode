#include <stdio.h>
void func(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The memory address %d of marks of student is %d\n", i, *(ptr+i));

        printf("The memory address %d of marks of student is %p\n", i, &ptr[i]);

        printf("The marks of student is %d\n", ptr[i]);

        printf("\n");
    }
}
int main() 
{
    int arr[] = {12, 34, 56, 78, 90};
    func(arr);//&arr[0];

    return 0;
}