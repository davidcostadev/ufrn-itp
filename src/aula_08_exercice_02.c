#include <stdio.h>

int main()
{

  double a, b, c;
  printf("Enter with a 1ª number:\n");
  scanf("%lf", &a);
  printf("Enter with a 2ª number:\n");
  scanf("%lf", &b);
  printf("Enter with a 3ª number:\n");
  scanf("%lf", &c);

  printf("%lf\n", a * c);

  if (a == 0)
  {
    printf("Error: You can't divide %lg by Zero\n", b);
    return 1;
  }
  printf("%lf\n", b / a);

  return 0;
}
