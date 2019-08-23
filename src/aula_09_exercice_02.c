#include <stdio.h>

int main() 
{
  int numbers;

  printf("N: ");

  scanf("%d", &numbers);
  printf("--- WHILE ---\n");


  int w = 1;
  int sum = 0;
  while (w <= numbers)
  {
    int number;
    printf("N%dº = ", w);
    scanf("%d", &number);

    sum += number;
    w++;
  }
  
  float averange = sum / numbers;

  printf("MEDIA = %.3f\n", averange);

  printf("--- FOR ---\n");

  int sum_for = 0;
  for (int i = 1; i <= numbers; i++)
  {
    int number_for;
    printf("N%dº: ", i);
    scanf("%d", &number_for);

    sum_for += number_for;
  }
  
  float averange_for = sum_for / numbers;

  printf("MEDIA=%.3f\n", averange_for);


  return 0;
}
