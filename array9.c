#include <stdio.h>
void func(int (*ptr)[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", ptr[i][j]); //arr[i] == *(arr + i)
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    func(&arr[0]); // if arr is a pointer to &arr[0] then arr + i is a pointer to &arr[i]
    return 0;
}