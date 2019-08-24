#include <stdio.h>

int main()
{
  float fahrenheit;

  printf("Fahrenheit: ");
  scanf("%f", &fahrenheit);

  float celsius = (fahrenheit - 32) * 5.0 / 9.0;

  printf("Celsius: %f\n", celsius);

  return 0;
}
