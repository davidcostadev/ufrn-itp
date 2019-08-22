#include <stdio.h>

int main()
{

  char option = 'p';

  printf("Enter 'P' to show a pine and 'S' to show a squade. [P/S]\n");
  scanf("%c", &option);

  if (option == 'P' || option == 'p')
  {
    printf("       X\n");
    printf("      XXX\n");
    printf("     XXXXX\n");
    printf("    XXXXXXX\n");
    printf("   XXXXXXXXX\n");
    printf("  XXXXXXXXXXX\n");
    printf(" XXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXX\n");
    printf("      XX\n");
    printf("      XX\n");
    printf("     XXXX\n");
  }
  else if (option == 'S' || option == 's')
  {
    printf("XXXXXXXXX\nX\tX\nX\tX\nXXXXXXXXX\n");
  }
  else
  {
    printf("Invalid option\n");
  }

  return 0;
}
