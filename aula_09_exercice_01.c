#include <stdio.h>

int main()
{

  int N;

  printf("Enter with a negative integer number:\n");
  scanf("%d", &N);

  printf("N=%d\n", N);

  int i = N;
  while (i < 0)
  {
    printf("WHILE: %d\n", i);

    i++;
  }

  for (int j = N; j < 0; j++)
  {
    printf("FOR: %d\n", j);
  }

  return 0;
}
