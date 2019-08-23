#include <stdio.h>

int main()
{

  float aline = 9;
  float mario = 10;
  float sergio = 4.5;
  float paulo = 7;

  printf("|NOME\t| NOTA|\n");
  printf("+=======+=====|\n");
  printf("|ALINE\t|% 5.1f|\n", aline);
  printf("|MARIO\t|% 5.1f|\n", mario);
  printf("|SERGIO\t|% 5.1f|\n", sergio);
  printf("|PAULO\t|% 5.1f|\n", paulo);

  return 0;
}
