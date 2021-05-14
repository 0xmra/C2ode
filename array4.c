#include<stdio.h>
void display(int array[] , int size) //base address of the array is passed to the function
{
    for(int i = 0; i < size; i++ )
    {
        printf("%d\n" , array[i]);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    display(arr , 5);
    return 0;
}