#include <stdio.h>

int main()
{

  int a, b, c;
  printf("Enter with a A value:\n");
  scanf("%d", &a);
  printf("Enter with a B value:\n");
  scanf("%d", &b);
  printf("Enter with a C value:\n");
  scanf("%d", &c);

  if (a && b)
  {
    printf("VERDADEIRO: A and B\n");
  }
  else
  {
    printf("FALSO: A and B\n");
  }
  if (a || c)
  {
    printf("VERDADEIRO: A or C\n");
  }
  else
  {
    printf("FALSO: A or C\n");
  }
  if (!((a && b) || c))
  {
    printf("VERDADEIRO: !(A && B || C)\n");
  }
  else
  {
    printf("FALSO: !(A && B || C)\n");
  }

  return 0;
}
