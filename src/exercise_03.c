#include <stdio.h>

void exercise_03()
{
  printf("Exercício 03\n");

  float fahrenheit;

  printf("Fahrenheit: ");
  scanf("%f", &fahrenheit);

  float celsius = (fahrenheit - 32) * 5 / 9;

  printf("CELSIUS= %f\n", celsius);
}

int main()
{
  exercise_03();
  return 0;
}
