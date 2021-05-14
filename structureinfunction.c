#include<stdio.h>
void fun(struct student);
void fun(struct student obj)

{
    printf("age = %d weight = %f" , obj.age, obj.weight);
}
struct student
{
   int age;
   float weight;
};

void fun(struct student);

int main()
{
     struct student s = {15,51.5};
    return 0;
}
