#include <stdio.h>

void exercice_1()
{
  printf("\nExercício 01\n");

  float one;
  float two;

  printf("Digite o 1ª número: ");
  scanf("%f", &one);
  printf("Digite o 2ª número: ");
  scanf("%f", &two);

  double media = (one + two) / 2;

  printf("MEDIA=%f\n", media);
}

int main()
{
  printf("Olá\n");

  int value1 = 10;
  int value2 = 5;
  int value3 = value1 + value2;

  printf("Digite um número:\n");
  scanf("%i", &value1);

  printf("v1: %d, v2: %d, v3: %d\n", value1, value2, value3);

  exercice_1();
  return 0;
}
