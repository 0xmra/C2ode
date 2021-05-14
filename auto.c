 #include <stdio.h>

int mult(int a ,int b)
{
    int c;
    c =a*b;//Since the variable c is already defined in the main function we cannot use it in mult function. 
        //So , we have to declare c as an another variable
    return c;
}
int main()
{  //Auto vatiables (garbage value)local to the function they are defined in.
  // Till the end of the function they are defined in.
  // auto int c = int c
    int c;
       c = mult(2,3);
       printf("%d" , c);
       
    return 0;
}   


