#include <stdio.h>

int main()
{

  int A, B;

  printf("Enter with number A: ");
  scanf("%d", &A);
  printf("Enter with number B: ");
  scanf("%d", &B);

  int i = A;
  int sum = 0;
  while (i < B)
  {
    printf("SUM: %d + %d\n", sum, i);

    sum += i;

    i++;
  }
  printf("SUM: %d\n", sum);

  return 0;
}
