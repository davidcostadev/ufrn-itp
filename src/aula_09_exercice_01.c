#include <stdio.h>

int main() 
{
  int numbers;

  printf("N: ");
  scanf("%d", &numbers);

  printf("--- WHILE ---\n");

  int w = numbers;
  while (w <= 0)
  {
    printf("W = %d\n", w);
    w++;
  }
  
  printf("--- FOR ---\n");

  for (int i = numbers; i < 0; i++)
  {
    printf("F = %d\n", i);
  }

  return 0;
}
