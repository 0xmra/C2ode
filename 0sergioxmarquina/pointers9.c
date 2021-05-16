#include<stdio.h>
void fun()
{
    int var = 250;
}
int* get()
{
    int i = 100;
    return &i;
}
int main()
{
    int *ptr = get();
    fun();
    printf("%d\n",*ptr);
    return 0;
}