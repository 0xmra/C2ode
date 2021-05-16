//Array of Pointers to String
#include <stdio.h>
int main()
{
    char *subject[5] = {"Tamil", "English", "Hindi", "Science", "Mathematics"};
    for(int i=0; i<5; i++)
    {
        printf("&subject[%d] = %p\n" ,i ,subject[i]);
    }
    //We pass base address and print all the character until the null chracter is reached.
    for(int i=0; i<5; i++)
    {
        printf("&subject[%d] = %s\n" ,i ,subject[i]);
    }
    return 0;
}