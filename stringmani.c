#include<stdio.h>
int main()
{
    char word[] = "I WILL BE FINE SOMEDAY";
    printf("%s\n" , word);
    word[4] = 'D';
    printf("%s\n" , word);
    word[7] = 'e';
    printf("%s\n" , word);
    word[6] = 'F';
    printf("%s\n" , word);


    return 0;
}