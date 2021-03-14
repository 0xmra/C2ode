#include <stdio.h>
int main (){
  int SUM, sub1, sub2, sub3, sub4, sub5;
  float P;

  printf("SUM and PERCENTAGE of a Student in 5 Subjects\n Max marks of subjects = 100 \n");

  printf("Enter marks of Subject 1 = ");
  scanf("%d", & sub1);

  printf("Enter marks of Subject 2 = ");
  scanf("%d", & sub2);

  printf("Enter marks of Subject 3 = ");
  scanf("%d", & sub3);

  printf("Enter marks of Subject 4 = ");
  scanf("%d", & sub4);

  printf("Enter marks of Subject 5 = ");
  scanf("%d", & sub5);

SUM = sub1+sub2+sub3+sub4+sub5;
printf("\nTotal Sum = %d",SUM ); P = SUM /5.0;
printf("\n PERCENTAGE = %f %%", P);
return 0;

}
