#include <stdio.h>
int b = 144;

int mult(int a, int b) // In this case local variable and arguments takes precedence over global
{

   int c = a * b; //2.)In this case if we change b1 to b but keep the parameters a and b the answer will be 5040 
   //2.)because when the function was called  from main it had a = 35 and b = 34 and the values got copied to parameters a and b1 and b2
   // 2.)further got copied to mult operation but b alread took the value from global variable it could not be assigned to b1
   
   
                //1.)Even after changing variable b to b1 the answer will remain.
                //1.)same because assigned value of b is 34 (in main function)(local variable) and gets copied to b1 in mult func.
   return c;
}
int c;
int main()
{         //Global vatiables (automatic value 0) Gloabl to the program they are defined in.
         // Available throughout the lifetime of the program.
         // Declare the global variable outside any function not inside the function.



     int a = 35;
                             //After removing b the global value of b gets assigned to mult func which is inside the function main 
                             //and this global value gets copied to the above declared mult function (Answer 5050).
     
     int b =34;                        // In this case local variable and arguments takes precedence over global(Answer 1190).
    printf("%d", mult(a,b));
    return 0;



}
