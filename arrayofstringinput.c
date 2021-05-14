#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    char lib[1000][1000];
    for(int i=0;i<n;i++)
    {
    scanf("%s" , lib[i]);
    }
    for(int i =0;i<n;i++)
    {
        printf("%s" , lib[i]);
        printf("\t");
        
    }
    return 0;
}
