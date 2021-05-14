#include<stdio.h>



    int sum_of_digit(int n)

{      int r =n%10;
       int s = 0;
       s =s +r;

    if (n == 0)
       return 0;
    return ( sum_of_digit(n / 10));
}
 

int main()
{
    int num = 12345;
    int result = sum_of_digit(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
