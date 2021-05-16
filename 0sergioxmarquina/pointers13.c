//1D array and pointers | arr+1 vs _arr+1
#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    /*
    arr will point to the first element of the array which is 10
    Hence arr will have the address of the first element
    &arr will point to the entire array. Hence &arr will have the base address of the array
    arr+1 points to the second element of the array because arr points to the first element of the array
    &arr+1 will point to the next array series (by the size of the entire array)
    */
    return 0;
}