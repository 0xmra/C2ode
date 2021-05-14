#include <stdio.h>
int power(int a , int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
         return a*power(a,b-1);
    }
    
}
int main()
{
           int x ,y;
           scanf("%d %d" , &x ,&y);
           int answer = power(x,y);
           printf("%d" , answer);
}