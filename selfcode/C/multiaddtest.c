#include <stdio.h>
int main() {
    int howMany = 0;
    int test = 0;
    int sum = 0;
    int numberRead = 0;
    int add = 0;
    printf("How many items do you want to add?\n");
    scanf("%d",&howMany);
    for(int i = 0; i < howMany; i++){
        scanf("%d",&numberRead);
        printf("I have read %d from the input terminal\n",numberRead);

        scanf("%d",&test);
        printf("I have read %d form the input\n",test );

        add = test + numberRead;

        sum = sum + add;
        printf("sum equals %d\n",sum);
    }
  return 0;
}
