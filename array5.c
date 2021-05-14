#include <stdio.h>
void display(int num) //base address of the array is passed to the function
{
    printf("%d\n", num);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        display(arr[i]);
    }

    return 0;
}