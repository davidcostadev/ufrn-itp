#include <stdio.h>

int main()
{
  float kelvin;

  printf("Kelvin: ");
  scanf("%f", &kelvin);

  float celsius = kelvin - 273.15;

  printf("Celsius: %f\n", celsius);

  return 0;
}
