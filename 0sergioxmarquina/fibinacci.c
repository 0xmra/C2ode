#include <stdio.h>
int main()    
{    
 int a=0,b=1,c,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",a,b);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  c=b+a;    
  printf(" %d",c);    
     a=b;
     b=c;
      
 }  
  return 0;  
 }    