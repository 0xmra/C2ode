#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr;
    ptr = &arr[0];  //arr = &arr[0]
    printf("%p\t%p\t%p\t%p\t%p\t\n" , arr,arr+1,arr+2,arr+3,arr+4);
    printf("%p\t%p\t%p\t%p\t%p\t\n" , &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
     printf("%p\t%p\t%p\t%p\t%p\t\n" , ptr,ptr+1,ptr+2,ptr+3,ptr+4);
    
    printf("%p\t%p\t%p\t%p\t%p\t\n" , &ptr,&ptr[1],&ptr[2],&ptr[3],&ptr[4]);

    printf("%d\t%d\t%d\t%d\t%d\t\n" , *arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
    printf("%d\t%d\t%d\t%d\t%d\t\n" , *ptr,*(ptr+1),*(ptr+2),*(ptr+3),*(ptr+4));
    

    return 0;
}