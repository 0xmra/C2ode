#include <stdio.h>
struct student
{
    int rollNumber;
    char name[10];
    int age;
    int totalMarks;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d", &s[i].rollNumber, s[i].name, &s[i].age, &s[i].totalMarks);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].totalMarks >= 450)
        {
            printf("%d %s\n", s[i].rollNumber, s[i].name);
        }
        else
        {
            continue;
        }
        
    }

    return 0;
}