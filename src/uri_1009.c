// https://www.urionlinejudge.com.br/judge/en/problems/view/1009
#include <stdio.h>

int main()
{
  char name[100];
  float salary, sold_products;

  scanf("%s", &name);
  scanf("%f", &salary);
  scanf("%f", &sold_products);

  float commission = (15 * sold_products) / 100;
  float total = salary + commission;

  printf("TOTAL = R$ %.2f\n", total);
  return 0;
}
