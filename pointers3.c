//Passing pointer to functions

//Here * indicates that function is getting an address of a variable and not the value of variable 
#include<stdio.h>
void set(int *a)
{
    *a = 0;
}
int main()
{
    int a = 10;
    printf("Befor calling the function value of 'a' variable = %d\n" , a);
    set(&a);
    printf("After calling the function value of 'a' variable = %d" , a);

    return 0;
}