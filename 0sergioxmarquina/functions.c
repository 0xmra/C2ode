
//return_datatype function name(parameters)
     // int sum(int num1 , num2) or int sum(int,int)



#include <stdio.h>

int sum(int x , int y)//parameter is a varaiable in the declaration of function
     {
        int ans = x + y;     // called function because main function called the function sum
        return ans;
     }
     
int main()
{    


     int a = 10 , b=20 , result;
     result = sum(a,b);//calling function from this control will go to the function defintion
     printf("Result=%d\n" , result);

     
 
    return 0;
}