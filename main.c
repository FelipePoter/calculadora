#include <stdio.h>

int main()
{
  char choice = 's';
  int number1, number2, result;
  int option;
  while (choice == 's')
  {
    printf("===============================\n");
    printf("   Simple Calculator\n");
    printf("===============================\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division \n");
    printf("5. Exit\n");
    printf("Option: ");

    scanf("%d", &option);

    if (option == 1)
    {
      printf("Digite o primeiro numero: ");
      scanf("%d", &number1);
      printf("Digite o segundo numero: ");
      scanf("%d", &number2);
      result = number1 + number2;
      printf("Resultado: %d + %d = %d\n", number1, number2, result);
    }
    if (option == 2)
    {
      printf("Digite o primeiro numero: ");
      scanf("%d", &number1);
      printf("Digite o segundo numero: ");
      scanf("%d", &number2);
      result = number1 - number2;
      printf("Resultado: %d - %d = %d\n", number1, number2, result);
    }
    if (option == 3)
    {
      printf("Digite o primeiro numero: ");
      scanf("%d", &number1);
      printf("Digite o segundo numero: ");
      scanf("%d", &number2);
      result = number1 * number2;
      printf("Resultado: %d * %d = %d\n", number1, number2, result);
    }
    if (option == 4)
    {
      printf("Digite o primeiro numero: ");
      scanf("%d", &number1);
      printf("Digite o segundo numero: ");
      scanf("%d", &number2);
      if (number2 != 0)
      {
        float divresult = (float)number1 / (float)number2;
        printf("Resultado: %d / %d = %.2f\n", number1, number2, divresult);
      }
      else
      {
        printf("Divisao por zero nao e permitida.\n");
      }
    }
    if (option == 5)
    {
      printf("Obrigado por usar a calculadora! Até a próxima.\n");
      return 0;
    }
    if (option < 1 || option > 5)
    {
      printf("Opcao invalida. Tente novamente.\n");
      continue;
    }
    printf("Deseja realizar outra operacao? (s/n): ");
    scanf(" %c", &choice);
    if (choice == 'n')
    {
      printf("Obrigado por usar a calculadora! Até a próxima.\n");
      return 0;
    }
  }
  return 0;
}
