// https://www.urionlinejudge.com.br/judge/en/problems/view/1008
#include <stdio.h>

int main()
{
  int number, hours;
  float amount;

  scanf("%d", &number);
  scanf("%d", &hours);
  scanf("%f", &amount);

  float salary = hours * amount;

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", salary);
  return 0;
}
