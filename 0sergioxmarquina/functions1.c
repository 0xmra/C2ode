#include<stdio.h> 
int greatest (int a ,int b)

{   int max;
    if(a>b)
    {
        max=a;
        printf("%d" , max);
    }
    
    else
    {
     max=b;
        printf("%d" , max);
    }
        
        return max;
        
    
    
}

int main()
{
   int x,y;
   scanf("%d %d" , &x,&y);
   
   
   int res;
   
   res=greatest(x,y);
   
   

    return 0; 
}