#include <stdio.h>

void fun1(int n)
{
    int i;
    if(n>1)
    {
    for(i=0;i<n;i++)
    {
    printf(" * ");
    }
      return;
    }


}

int main()
{
    int n;
    scanf("%d" , &n);
    return 0;
}