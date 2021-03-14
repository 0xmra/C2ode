##include <stdio.h>
int main(){
  float celsius, fahrenheit;

  printf("Conversation of fahrenheit into celsius.\n");
  printf("\nEnter the temprature in fahrenheit = " );

  scanf("%f", &fahrenheit );
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("temprature in celsius = %.3f \n",celsius);
  scanf("\n %.3f F = %.3f C", fahrenheit, celsius);
  return 0;

}
