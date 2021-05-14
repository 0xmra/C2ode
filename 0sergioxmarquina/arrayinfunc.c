#include <stdio.h>
int func1(int marks[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student is %d\n", marks[i]);
    }
    return 0;
}

int main()
{
    int marks[] = {98, 88, 83, 91, 85};
    func1(marks);
    return 0;
}
