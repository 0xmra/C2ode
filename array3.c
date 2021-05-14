#include <stdio.h>
int main()
{
    /*
    
(rows)      0    1    2
(columns)
    0       1    2    3
    
    1       4    5    6

    2       7    8    9
    
    
    */

    int arr[3][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    arr[2][0] = 7;
    arr[2][1] = 8;
    arr[2][2] = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    int a,b;
    scanf("%d %d",&a ,&b);
    int num[a][b];
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            scanf("%d", &num[x][y]);
        }
    
    }


    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            printf("%d\t\t", num[x][y]);
        }
        printf("\n\n");
    }


    return 0;
}