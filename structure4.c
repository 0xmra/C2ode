#include<stdio.h> 
struct mobile
{
    char phone[10];
    int price;
    char color[10];
    
};
struct mobile a ;
int main()
{
    scanf("%s" , a.phone);
    scanf("%d" , &a.price);
    scanf("%s" , a.color);
    
     printf("%s\n" , a.phone);
    printf("%d\n" , a.price);
    printf("%s\n" , a.color);
    
    
    
  

    return 0; 
}