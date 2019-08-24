#include <stdio.h>

int main()
{
  int number = 0;

  while (number < 1 || number > 5)
  {
    printf("Digite um número de 1 à 5: ");
    scanf("%d", &number);

    if (number < 1 || number > 5)
    {
      printf("Error: número inválido.\n");
    }
  }

  printf("N = %d\n", number);

  return 0;
}
