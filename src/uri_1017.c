// https://www.urionlinejudge.com.br/judge/en/runs/add/1017
#include <stdio.h>

int main()
{
  int hours, average_speed;

  scanf("%d", &hours);
  scanf("%d", &average_speed);

  float liters_per_km = 12;
  float liters = (hours * average_speed) / liters_per_km;

  printf("%.3f\n", liters);

  return 0;
}
