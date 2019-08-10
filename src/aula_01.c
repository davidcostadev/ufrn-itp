#include <stdio.h>

int main()
{
  printf("Olá\n");

  int value1 = 10;
  int value2 = 5;
  int value3 = value1 + value2;

  printf("Digite um número:\n");
  scanf("%i", &value1);

  printf("v1: %d, v2: %d, v3: %d\n", value1, value2, value3);
  return 0;
}
