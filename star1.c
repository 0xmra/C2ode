#include<stdio.h>
int main()

{     int m;
scanf("%d", &m);
    for(int i =1;i<=m;i++)
    {
        for(int j = 1;j<=m+1-i;j++)
        {
            printf(" ");
        }
        for(int k = 1;k<=i;k++)
        {
            printf("* "); 
        }
        printf("\n");
        
    }

    for(int i =1;i<=m-1;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf(" ");
        }
        for(int k = 1;k<=m-i;k++)
        {
            printf(" *"); 
        }
        printf("\n");
        
    }
    return 0;
}