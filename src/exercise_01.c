#include <stdio.h>

void exercise_01()
{
  printf("Exercício 01\n");

  float one;
  float two;

  printf("Digite a 1ª nota: ");
  scanf("%f", &one);
  printf("Digite a 2ª nota: ");
  scanf("%f", &two);

  double media = (one + two) / 2;

  printf("MEDIA=%f\n", media);
}

int main()
{
  exercise_01();
  return 0;
}
