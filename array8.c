#include<stdio.h>
void display(int arr1[3][3])
{
    for(int i = 0; i <3;i++)
    {
        for(int j = 0; j <3;j++)
        {
            printf("%d\t ",arr1[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    display(arr);
    return 0;
 
}