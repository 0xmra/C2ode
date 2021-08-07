#include <stdio.h>
int main(void){
  int age;
  double height;

  printf("What is your age?");
  scanf("%d",&age);
  printf("What is your height");
  scanf("%lf",&height);
  printf("You are %d years old and %.2lf meters tall.",age, height);

  return 0;
}
