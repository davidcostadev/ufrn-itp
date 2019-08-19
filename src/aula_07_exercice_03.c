#include <stdio.h>

int main()
{

  double x, y;
  char operation;
  int exit = 0;

  printf("------- Calc Shell -------\n");
  printf("Press 'q' and enter or CTRL+C to exit any time\n");

  while(exit == 0) {

    
    printf("> ");

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
      if (y == 0) {
        printf("Error: You can't divide %lg by Zero\n", x);
      } else {
        printf("> %lf\n", x / y);
      }
      break;
    case 'q':
      exit = 1;
      break;

    default:
      printf("Error: Operator Invalid, Please use just + ,- , * and / operators\n");
      exit = 1;
      break;
    }

    x = 0;
    y = 0;
    operation = '+';
  }

  return 0;
}
