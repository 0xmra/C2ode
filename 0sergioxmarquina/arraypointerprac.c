#include <stdio.h>
int main()
{
    int arr[] = {12, 34, 56, 78, 90};
    for (int i = 0; i < 5; i++)
    {
        printf("The address of the element %d at %d is %p\n", *(&arr[i]), i, &arr[i]);
        printf("The address of the element %d at %d is %p\n", *(arr + i), i, arr + i);

        printf("\n");
    }

    return 0;
}

/*
&x[0] is equivalent to x+0(x) and x[0] is equivalent to *(x+0). 
&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1).
&x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2).  
*/