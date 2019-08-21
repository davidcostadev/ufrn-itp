#include <stdio.h>

int main()
{

  double x, y;
  char operation;
  int exit = 0;
  printf("Enter with your expression\nEx.: 1+3 and ENTER.\nYou can use +, -, * and /.\n");
  scanf("%lf %c %lf", &x, &operation, &y);

  switch (operation)
  {
  case '+':
    printf("> %lf\n", x + y);
    break;
  case '-':
    printf("> %lf\n", x - y);
    break;
  case '*':
    printf("> %lf\n", (x * y));
    break;
  case '/':
    if (y == 0)
    {
      printf("Error: You can't divide %lg by Zero\n", x);
    }
    else
    {
      printf("%lf\n", x / y);
    }
    break;

  default:
    printf("Error: Operator Invalid, Please use just + ,- , * and / operators\n");
    break;
  }

  return 0;
}
