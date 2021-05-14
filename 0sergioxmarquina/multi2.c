#include <stdio.h>
int main()
{
    int i, j = 0, k = 0, l;
    int row1, row2, col1, col2;
    printf("Enter number of rows and columns for matrix1\n");
    scanf("%d %d", &row1, &col1);
    printf("NUMBER OF ROWS %d AND NUMBER OF COLUMNS %d FOR ARRAY1\n", row1, col1);

    printf("Enter number of rows and columns for matrix2\n");
    scanf("%d %d", &row2, &col2);
    printf("NUMBER OF ROWS %d AND NUMBER OF COLUMNS %d FOR ARRAY2\n", row2, col2);

    int ar1[10][10]; //Declaring matrix 1
    int ar2[10][10]; //Declaring matrix 2
    int mult[10][10];

    //TAKING MATRIX 1
    printf("Enter the elements of the matrix 1\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }
    //PRINTING MATRIX 1

    for (i = 0; i < row1; i++)
    {
        printf("\n");
        for (j = 0; j < col1; j++)
        {
            printf("%d\t", ar1[i][j]);
        }
    }
    printf("\n");
    //TAKING MATRIX 2
    printf("Enter the elements of the matrix 2\n");
    for (k = 0; k < row2; k++)
    {
        for (l = 0; l < col2; l++)
        {
            scanf("%d", &ar2[k][l]);
        }
    }

    //PRINTING MATRIX 2
    for (k = 0; k < row2; k++)
    {
        printf("\n");
        for (l = 0; l < col2; l++)
        {
            printf("%d\t", ar2[k][l]);
        }
    }
    printf("\n");
    printf("Multiply of the matrix1 and the matrix2\n");

    //MULTIPLICATION PART
mult[i][l]=0;

    for (i = 0; i < row1; i++)
    {
        for (l = 0; l < col2; l++)
        {   int k=0;
            mult[i][l] += (ar1[i][k] * ar2[k][l]) ;
            ++k;
            printf("%d\t", mult[i][l]);
        }
        printf("\n");
    }
   
    return 0;
}