#include <stdio.h>

int arr(int sum[])
{
    int add = 0;
    for (int i = 0; i < 5; i++)
    {    
        add = add + sum[i];
        
    }
    printf("%d", add);
    return add;
}
int main()
{
    int elem[] = {98, 91, 90, 99, 94};
    arr(elem);
    return 0;
}