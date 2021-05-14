#include <stdio.h>
struct batman
{
    char name[100];
    int age;
    int height;

} b1, b2;

int main()
{
    struct batman b1 = {"Bruce Wayne", 34, 190};
    printf("Batman's real is %s and he is %d years old with a height of %d", b1.name, b1.age, b1.height);

    return 0;
} 