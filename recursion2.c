#include<stdio.h>

int nod(int a)
{
    if( a==1)
    return 1;
    else 
    return 1 + nod(a/10);
}


int main()
{
    int n;
    scanf("%d",&n);
    int res = nod(n);
    printf("%d" ,res);

    return 0;
}
