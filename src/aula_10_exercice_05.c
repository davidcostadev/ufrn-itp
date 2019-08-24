#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit)
{
  return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToFahrenheit(float celsius)
{
  return celsius * (9.0 / 5.0) + 32.0;
}

float kelvinToCelsius(float kelvin)
{
  return kelvin - 273.15;
}

float celsiusToKelvin(float celsius)
{
  return celsius + 273.15;
}

int main()
{
  int option;
  float number;

  while (option < 1 || option > 5)
  {
    printf("Digite:\n");
    printf("1 : para Fahrenheit --> Celsius\n");
    printf("2 : para Celsius --> Fahrenheit\n");
    printf("3 : para Kelvin --> Celsius\n");
    printf("4 : para Celsius --> Kelvin\n");
    printf("5 : Sair\n");

    scanf("%d", &option);

    if (option < 1 || option > 5)
    {
      printf("Error: Opção inválida\n");
    }
    else
    {
      if (option == 5)
        return 0;

      printf("Digite um numéro para fazer a converção: ");
      scanf("%f", &number);

      switch (option)
      {
      case 1:
        printf("=%f\n", fahrenheitToCelsius(number));
        break;
      case 2:
        printf("=%f\n", celsiusToFahrenheit(number));
        break;
      case 3:
        printf("=%f\n", kelvinToCelsius(number));
        break;
      case 4:
        printf("=%f\n", celsiusToKelvin(number));
        break;
      }
    }
  }

  return 0;
}
