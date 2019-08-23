#include <stdio.h>

int main() 
{
  int A, B;

  printf("A: ");
  scanf("%d", &A);
  printf("B: ");
  scanf("%d", &B);

  int w = A;
  int sum = 0;
  while(w <= B)
  {
    sum += w;
    w++;
  }

  printf("SUM=%d\n", sum);

  return 0;
}
