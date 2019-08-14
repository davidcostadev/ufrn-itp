// https://www.urionlinejudge.com.br/judge/en/problems/view/1014
#include <stdio.h>

int main()
{
  int distance;
  float liters;
  scanf("%d", &distance);
  scanf("%f", &liters);

  float liters_per_km = distance / liters;

  printf("%.3f km/l\n", liters_per_km);

  return 0;
}
