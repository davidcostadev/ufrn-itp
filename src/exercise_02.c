#include <stdio.h>

void exercise_02()
{
  printf("Exercício 02\n");

  float distance;
  float liters;

  printf("Distância em KM: ");
  scanf("%f", &distance);

  printf("Litros: ");
  scanf("%f", &liters);

  float liter_per_km = distance / liters;

  printf("CONSUMO_MEDIO=%f km/l\n", liter_per_km);
}

int main()
{
  exercise_02();
  return 0;
}
