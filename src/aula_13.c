#include <stdio.h>
#include <string.h>

int main()
{
  char nome_david[] = {'d', 'a', 'v', 'i', 'd', '\0', ' ', 's'};
  char nome_juliana[] = "juliana";

  char nome_completo[10];

  nome_david[7] = '-';
  nome_david[8] = '-';

  nome_david[10] = '?';
  nome_david[11] = '?';

  printf("%s\n", nome_david);
  printf("%s\n", nome_juliana);
  printf("%s\n", nome_completo);

  // char test_entrada[3];

  // scanf("%f", &test_entrada);
  // setbuf(stdin, NULL); // limpar o buffer
  // gets(test_entrada); // não segura

  // printf("%s\n", test_entrada);

  // contando
  printf("%lu-%lu\n", strlen(nome_david), sizeof(nome_david));
  printf("%lu-%lu\n", strlen(nome_juliana), sizeof(nome_juliana));
  printf("%lu-%lu\n", strlen(nome_completo), sizeof(nome_completo));

  // copiando
  char destino[10];

  strcpy(destino, nome_juliana);

  printf("%s\n", destino);

  // contact
  char last_name[] = "costa";

  strcat(nome_juliana, last_name);

  printf("%s\n", nome_juliana);

  // fgets

  char line[10] = "123";

  fgets(line, sizeof(line), stdin);

  printf("%s\n", line);

  for (int i = 0; i < 30; i++)
  {
    if (nome_david[i] == '\0')
    {
      printf("\\0");
    }
    printf("%c", nome_david[i]);
  }
  printf("\n");

  return 0;
}
