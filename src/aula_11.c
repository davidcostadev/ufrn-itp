#include <stdio.h>

int main()
{
  int const MED = 10;

  int vet[MED];

  for (int i = 0; i < MED; i++)
    vet[i] = 0;

  for (int i = 0; i < MED; ++i)
  {
    printf("%i\n", vet[i]);
  }

  vet[15] = 333;

  char letras[5] = {'d', 'a', 'v', 'i', 'd'};

  for (int i = 0; i < 5; i++)
  {
    printf("%c", letras[i]);
  }
  printf("\n");

  return 0;
}
