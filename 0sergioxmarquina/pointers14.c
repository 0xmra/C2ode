//Pointer to an Array & Array of Pointers
#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int (*ptr)[5];//Ptr is a pointer to an array of 5 elements
    ptr  = &arr;
    //ptr is a pointer to an array of 5 elements 
    //*ptr will point to the first element of an array of 5 elements.
    //**ptr give the value stored at the first element of an array of 5 elements.
    return 0;
}