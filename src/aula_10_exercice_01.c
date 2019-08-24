#include <stdio.h>

int main()
{
  float celsius;

  printf("Celsius: ");
  scanf("%f", &celsius);

  float fahrenheit = celsius * (9.0 / 5.0) + 32.0;

  printf("fahrenheit: %f\n", fahrenheit);

  return 0;
}
