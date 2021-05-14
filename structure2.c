#include <stdio.h>
#include <string.h>
struct batman
{
    char name[100];
    int age;
    int height;
};

int main()
{
    struct batman b1, b2;
  strcpy(b1.name, "Bruce");
    b1.age = 34;
    b1.height = 191;

    strcpy(b2.name, "Tony");
    b2.age = 42;
    b2.height = 181;

    printf("Batman's real is %s and %d years old with a height of %d\n", b1.name, b1.age, b1.height);
    printf("Ironman's's real is %s and %d years old with a height of %d", b2.name, b2.age, b2.height);

    return 0;
}