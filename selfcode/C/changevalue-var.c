#include <stdio.h>
int main () {
  int balance;
  balance = 50;
  printf("I have %d dollars are in my account\n",balance);
  balance = balance - 40;
  printf("I have %d dollars in my account\n", balance);
  balance = balance - 30;
  printf("I have %d dollars in my account\n", balance);
  balance = balance + 50;
  printf("I have %d dollars in my account\n", balance);
  return 0;
}
