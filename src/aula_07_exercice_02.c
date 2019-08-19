#include <stdio.h>

int main()
{

  double a, b;

  scanf("%lf", &a);
  scanf("%lf", &b);

  if (a == b)
  {
    printf("%lf\n", a * b);
  } else if (a < b) {
    printf("%lf\n", b - a);
  } else {
    printf("%lf\n", a - b);
  }

  return 0;
}
