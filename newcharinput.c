#include <stdio.h>
int main (void) {
    char letter;

    printf("Enter the letter you want to print:");
    scanf("%c",&letter);

    printf("++++%c++++\n", letter);
    printf("+++%c%c%c+++\n", letter, letter, letter);
    printf("++%c%c%c%c%c++\n", letter, letter, letter, letter, letter);
    printf("+%c%c%c%c%c%c%c+\n", letter, letter, letter, letter, letter, letter, letter);
    printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter, letter, letter, letter, letter, letter);

    return 0;
}
