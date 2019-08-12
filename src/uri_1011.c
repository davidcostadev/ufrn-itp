// https://www.urionlinejudge.com.br/judge/en/problems/view/1011
#include <stdio.h>
#include <math.h>

int main()
{
  double radius;

  scanf("%lf", &radius);

  double PI = 3.14159;

  double calc = (4 / 3.0) * PI * pow(radius, 3);

  printf("VOLUME = %.3lf\n", calc);

  return 0;
}
