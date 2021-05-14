#include<stdio.h>

void func(int* ptr)
{
  for (int i = 0; i <5;i++)
  {
      printf("%d\n" , ptr[i]); //arr[i] == *(arr + i)
  }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    func(&arr[0]); // if arr is a pointer to &arr[0] then arr + i is a pointer to &arr[i]
    return 0;
}