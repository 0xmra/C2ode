#include <stdio.h>
int main()
{    
     int status = 0;
    int N;
    scanf("%d" , &N);
    status=(status<<N)|1;
    printf("%d" , status);

    
    return 0;
}