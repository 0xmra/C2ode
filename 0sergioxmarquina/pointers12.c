//Accessing array using pointers
//We declare integer pointer and assigning the base address of array to pointer
#include <stdio.h>
int main()
{    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    /*
    *(ptr+3)=6;
    *(ptr+3)=7;
    */

    for (int i = 0; i < 5; i++)
    {
        printf("&arr[%d]=%p\n" ,i, ptr+i);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n" ,i, *(ptr+i));
    }
     printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("&arr[%d]=%p arr[%d]=%d\n" ,i, ptr+i,i,*(ptr+i));
    }
     printf("\n");

    return 0;
}