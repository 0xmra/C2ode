#include<stdio.h>
int main()
{
    char subject[100][100]={"English" , "Hindi" , "Maths" , "Science" , "Social Sceince"};
   
    for(int i=0;i<5;i++)
    {
        printf("%s\n" , subject[i]);
        
    }
     return 0;
}