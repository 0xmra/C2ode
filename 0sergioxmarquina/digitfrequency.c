 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0,j=0;
    char s[1001];
    scanf("%[^\n]%*c", s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='0')
        {
               a++;
        }
        else if(s[i]=='1')
        {
               b++;
        }
        else if(s[i]=='2')
        {
               c++;
        }
       else if(s[i]=='3')
        {
               d++;
        }
       else if(s[i]=='4')
        {
               e++;
        }
       else if(s[i]=='5')
        {
               f++;
        }
       else if(s[i]=='6')
        {
               g++;
        }
       else if(s[i]=='7')
        {
               h++;
        }
        else if(s[i]=='8')
        {
               l++;
        }
        else if(s[i]=='9')
        {
               j++;
        }

    }
    printf("%d %d %d %d %d %d %d %d %d %d " , a,b,c,d,e,f,g,h,l,j);
    return 0;
}