#include <stdio.h>

int main()
{
  float celsius;

  printf("Celsius: ");
  scanf("%f", &celsius);

  float kelvin = celsius + 273.15;

  printf("Kelvin: %f\n", kelvin);

  return 0;
}
