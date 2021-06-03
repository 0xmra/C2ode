#include <stdio.h>
void addition(int arr1[10][10], int arr2[10][10], int r, int c)
{

    printf("Sum of two matrices is\n");
    int add[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}
void subtraction(int arr1[10][10], int arr2[10][10], int r, int c)
{

    printf("Difference of two matrices is\n");
    int sub[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}
void uppertriangle(int arr1[10][10], int arr2[10][10], int r, int c)
{

    printf("Upper Triangle of matrix 1 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i <= j)
            {
                printf("%d\t", arr1[i][j]);
            }
            else
            {
                arr1[i][j] = 0;
                printf("%d\t", arr1[i][j]);
            }
        }
        printf("\n");
    }
    printf("Upper Triangle of matrix 2 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i <= j)
            {
                printf("%d\t", arr2[i][j]);
            }
            else
            {
                arr2[i][j] = 0;
                printf("%d\t", arr2[i][j]);
            }
        }
        printf("\n");
    }
}
void lowertriangle(int arr1[10][10], int arr2[10][10], int r, int c)
{
    printf("Lower Triangle of matrix 1 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j <= i)
            {
                printf("%d\t", arr1[i][j]);
            }
            /* else
            {
                arr1[i][j] = 0;
                printf("%d\t", arr1[i][j]);
            }
            */
        }
        printf("\n");
    }
    printf("Lower Triangle of matrix 2 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j <= i)
            {
                printf("%d\t", arr2[i][j]);
            }
            /*else
            {
                arr2[i][j] = 0;
                printf("%d\t", arr2[i][j]);
            }*/
        }
        printf("\n");
    }
}
int trace1(int arr1[10][10], int arr2[10][10], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum += arr1[i][j];
            }
        }
    }
    return sum;
}
int trace2(int arr1[10][10], int arr2[10][10], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum += arr2[i][j];
            }
        }
    }
    return sum;
}
void transpose(int arr1[10][10], int arr2[10][10], int r, int c)
{

    printf("Transpose of matrix 1 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr1[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of matrix 2 is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr2[j][i]);
        }
        printf("\n");
    }
}
void symmetry(int arr1[10][10], int arr2[10][10], int r, int c)
{
    int count = 0, count1 = 0;
    printf("Checking symmetry of matrix 1...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] == arr1[j][i])
            {
                count++;
            }
        }
    }
    if (count == r * c)
    {
        printf("Matrix 1 is symmetric\n");
    }
    else
    {
        printf("Matrix 1 is not symmetric\n");
    }
    printf("\n");
    printf("Checking symmetry of matrix 2...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr2[i][j] == arr2[j][i])
            {
                count1++;
            }
        }
    }
    if (count1 == 9)
    {
        printf("Matrix 2 is symmetric\n");
    }
    else
    {
        printf("Matrix 2 is not symmetric\n");
    }
}
void multiply(int arr1[10][10], int arr2[10][10], int r, int c)
{
    int mult[10][10];
    printf("Multiplication result of two matrices is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mult[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d\t", mult[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int operation, row, column, res, res1;
    printf("Enter an operation you wish to perform\n");
    scanf("%d", &operation);

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &row, &column);
    int mat1[10][10], mat2[10][10];

    printf("Enter elements of Matrix 1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    switch (operation)
    {
    case 1:
        addition(mat1, mat2, row, column);
        break;
    case 2:
        subtraction(mat1, mat2, row, column);
        break;
    case 3:
        uppertriangle(mat1, mat2, row, column);
        break;
    case 4:
        lowertriangle(mat1, mat2, row, column);
        break;
    case 5:
        res = trace1(mat1, mat2, row, column);
        printf("Trace of matrix 1 is %d\n", res);
        res1 = trace2(mat1, mat2, row, column);
        printf("Trace of matrix 2 is %d", res1);
        break;
    case 6:
        transpose(mat1, mat2, row, column);
        break;
    case 7:
        symmetry(mat1, mat2, row, column);
        break;
    case 8:
        multiply(mat1, mat2, row, column);
        break;
    }
    return 0;
}
