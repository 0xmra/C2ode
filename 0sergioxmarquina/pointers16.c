//2D Array and Pointer
#include<stdio.h>
int main()
{
    /*
    
    &arr is a pointer to the whole 2d array. (&arr - (int*)[3][3])
    &arr is a pointer to a three by three integer array. So &arr will store the base address of an entire 3x3 2-D array

    arr is a pointer to the first 1-D array. Here 1-D array has 3 elements.
    So arr is a pointer of type (int*)[3] which means arr is a pointer which points to an array of 3 integers.
    So the first row's base address will be stored in it.

    *arr will point to the first element of the 2-D array and it is a pointer of type (int*)

    **arr will give the value of the first element.(**arr+1 will increment the value by one).

    */
    return 0;
}