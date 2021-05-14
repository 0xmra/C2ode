#include<stdio.h>

int main()
{
int arr[5] = { 1, 2, 3, 4, 5 };
int *ptr = arr+1;
for(int i = 0; i < 5; i++)
{

printf("%p\n", ptr+i);
printf("%d\n", *(ptr+i));
}
return 0;
}
/*In this program, we have a pointer ptr that points to the 0th element of the array. 
Similarly, we can also declare a pointer that can point to whole array instead of only one element of the array. 
This pointer is useful when talking about multidimensional arrays.*/

/*
&x[0] is equivalent to x+0(x) and x[0] is equivalent to *(x+0). 
&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1).
&x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2).  
*/