#include <stdio.h>

int main()
{
  int n1 = 12;
  int n2 = 10;

  // tipos de ifs
  if (n1 > n2)
  {
    printf("n1 maior\n");
    printf("n1 segunda linha\n");
  }

  if (n2 > n2)
    printf("n2 maior\n");
  if (n1 == n2)
    printf("iguais\n");

  // par e impar

  if (n1 % 2 == 0)
    printf("par\n");

  if (n1 % 2 != 0)
    printf("impar\n");

  // switch case

  char value = '5';

  switch (value)
  {
  case 11:
    printf("11\n");
    break;
  case '5':
    printf("5\n");
    break;
  default:
    printf("??\n");
  }

  return 0;
}
