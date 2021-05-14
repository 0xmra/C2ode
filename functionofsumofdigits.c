#include<stdio.h>
 int sum(int n)
 {   int summation=0 ,r;
 while(n>0)
 {
     r=n%10;
     summation=summation+r;
     n=n/10;
     
 }
      return summation;
 }

 int main()
 {
     int ans;
     ans = sum(698);
     printf("%d" , ans);
 }