// https://www.urionlinejudge.com.br/judge/en/problems/view/1010
#include <stdio.h>

int main()
{
  int id, unit;
  float price;
  float total = 0;

  scanf("%d %d %f", &id, &unit, &price);
  total += unit * price;

  scanf("%d %d %f", &id, &unit, &price);
  total += unit * price;

  printf("VALOR A PAGAR: R$ %.2f\n", total);
  return 0;
}
