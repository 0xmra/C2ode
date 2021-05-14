#include<stdio.h>
int arr(int *ptr)
{    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + *(&ptr[i]);
    }
    printf("%d\n" , sum);
    printf("%d\n", sum/5);

    return sum;
}


int main()
{ 
    int marks[]={86,82,88,95,97};
    arr(&marks[0]);


    
    return 0;
}