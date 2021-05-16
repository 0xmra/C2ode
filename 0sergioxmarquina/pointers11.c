//Array and Pointers
//Name of the array arr will point to the first element of the array
//So arr(arr+0) = &arr[0]
//arr[i] is exactly same as *(arr+i)
#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i <5;i++)
    {
        printf(" Value of element %d of array is = %d with address %p\n" ,i, arr[i] , &arr[i]);
    }
    
    return 0;
}