#include<stdio.h>
int main()
{
    int n,sum=0;
    char a;
    
    scanf("%c" , &a );
    scanf("%d" , &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d" , &arr[i]);

         if(a == 'b')
        {
             if(i%2==0)
             {
                 sum=sum+arr[i];
             }
             else
             sum=sum+0;
        }

        if(a == 'g')
        {
             if(i%2==1)
             {
                 sum=sum+arr[i];
             }
             else
             sum=sum+0;
             
        }

    }
   

    printf("%d" , sum);

    return 0;
}