#include <stdio.h>
int main()

{
    int marks[3] ;
    for(int i = 1; i < 4; i++)
    {      
         printf("Enter the marks of %d student\t" , i);
         scanf("%d", &marks[i]);
         
    }
    
    for(int k = 1; k < 4; k++)
    {      
         
         printf("%d\n", marks[k]);
    }

    return 0;
}