//Function retutning a pointer
#include <stdio.h>
int* get()
{
     int i = 100;//use static
    return &i;
}
int main()
{
    int *ptr = NULL;
    ptr = get();
    printf("%d" , *ptr);
    return 0;
}