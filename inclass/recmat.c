#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <windows.h>

#define pf(i, j) printf("arr[%d][%d] =\t", i, j);
#define nl printf("\n")
#define lf(L) for (int i = 0; i < L; i++)

int main()
{
    system ( "cls" ) ;
    int A, B;
    printf("INPUT ORDER -");
    scanf("%d", &A);
    scanf("%d", &B);
    nl;
    int arr[A][B];
    int count_0 = 0;
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            pf(i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMATRIX =\n");
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            if (arr[i][j] == 0)
            {
                count_0++;
            }
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    if (count_0 > (A * B - count_0))
    {
        printf("\nThis is a sparse matrix !!!");
        printf("\nLOWER TRIANGULAR MATRIX =\n");
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < B; j++)
            {
                if (i < j)
                {
                    printf("%d\t", 0);
                }
                else
                {
                    printf("%d\t", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\nUPPER TRIANGULAR MATRIX =\n");
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < B; j++)
            {
                if (i > j)
                {
                    printf("%d\t", 0);
                }
                else
                {
                    printf("%d\t", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThis is a non sparse matrix !!!");
    }
    return 0;
}
