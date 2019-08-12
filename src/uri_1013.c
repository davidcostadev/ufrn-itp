// https://www.urionlinejudge.com.br/judge/en/problems/view/1013
#include <stdio.h>
#include <stdlib.h>

int diff_numbers(int x, int y)
{
  return (x + y + abs(x - y)) / 2;
}

int main()
{
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int a_b = diff_numbers(a, b);
  int a_c = diff_numbers(a, c);
  int c_b = diff_numbers(c, b);

  int greast;

  if (a_b == a_c)
  {
    greast = a_b;
  }
  else if (a_b == c_b)
  {
    greast = a_b;
  }
  else if (a_c = c_b)
  {
    greast = c_b;
  }

  printf("%d eh o maior\n", greast);

  return 0;
}
