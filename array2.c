#include<stdio.h>
int main()
{
    printf("Enter number of elements of array\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < n; j++)
    {
        printf("%d\n" , arr[j]);
    }

    return 0;
}