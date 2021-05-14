#include <stdio.h>
int main()
{
    int arr[] = {111, 112, 113, 114, 115};
    printf("Value at position3 of the arrayis %d\n", arr[3]);
    printf("Address of 0 %p\t", &arr[0]);
    printf("Address of 0 %p\n", arr);
    printf("Address of 1 %p\t", &arr[1]);
    printf("Address of 1 %p\n", arr + 1);
    printf("Address of 2 %p\t", &arr[2]);
    printf("Address of 2 %p\n", arr + 2);
    printf("Address of 3 %p\t", &arr[3]);
    printf("Address of 3 %p\n", arr + 3);
    printf("Address of 4 %p\t", &arr[4]);
    printf("Address of 4 %p\n", arr + 4);
    printf("\n\n\n");
    printf("Address at 0 %p\t", arr);
    printf("Value of Address at 0 %d\n", *(&arr[0]));//*(arr)
    printf("Address at 1 %p\t", arr + 1);
    printf("Value of Address at 1 %d\n", *(&arr[1]));//*(arr+1)
    printf("Address at 2 %p\t", arr + 2);
    printf("Value of Address at 2 %d\n", *(&arr[2]));//*(arr+2)
    printf("Address at 3 %p\t", arr + 3);
    printf("Value of Address at 3 %d\n", *(&arr[3]));//*(arr+3)
    printf("Address at 4 %p\t", arr + 4);
    printf("Value of Address at 4 %d\n", *(&arr[4]));//*(arr+4)

    return 0;
}