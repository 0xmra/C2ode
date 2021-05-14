#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char lib[3][1000];
    for(int i=0;i<5;i++)
    {
    scanf("%s" , lib[i]);
    }
    for(int i=0 ;i<5;i++)
    {
        printf("%s" , lib[i]);
        printf("\n");
        
    }
    return 0;
}