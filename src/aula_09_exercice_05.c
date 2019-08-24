#include <stdio.h>

int main()
{
  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  int dividers = 0;

  int i = 1;
  while (i <= number)
  {
    if (number % i == 0)
    {
      printf("- %d é divisor;\n", i);
      dividers++;
    }
    i++;
  }

  if (dividers)
  {
    printf("%d\n", dividers);
  }
  else
  {
    printf("No. Divisores\n");
  }

  return 0;
}
