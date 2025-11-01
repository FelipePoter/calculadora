#include <stdio.h>

int main()
{
  char choice = 's';
  float number1, number2, result;
  int option;
  while (choice == 's' || choice == 'S')
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
    getchar();

    if (option == 1)
    {
      printf("Digite o primeiro numero: ");
      scanf("%f", &number1);
      getchar();
      printf("Digite o segundo numero: ");
      scanf("%f", &number2);
      getchar();
      result = number1 + number2;
      printf("Resultado: %f + %f = %f\n", number1, number2, result);
    }
    if (option == 2)
    {
      printf("Digite o primeiro numero: ");
      scanf("%f", &number1);
      getchar();
      printf("Digite o segundo numero: ");
      scanf("%f", &number2);
      getchar();
      result = number1 - number2;
      printf("Resultado: %f - %f = %f\n", number1, number2, result);
    }
    if (option == 3)
    {
      printf("Digite o primeiro numero: ");
      scanf("%f", &number1);
      getchar();
      printf("Digite o segundo numero: ");
      scanf("%f", &number2);
      getchar();
      result = number1 * number2;
      printf("Resultado: %f * %f = %f\n", number1, number2, result);
    }
    if (option == 4)
    {
      printf("Digite o primeiro numero: ");
      scanf("%f", &number1);
      getchar();
      printf("Digite o segundo numero: ");
      scanf("%f", &number2);
      getchar();
      if (number2 != 0)
      {
        float divresult = number1 / number2;
        printf("Resultado: %f / %f = %.2f\n", number1, number2, divresult);
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
    getchar();

    while (choice != 's' && choice != 'S' && choice != 'n' && choice != 'N')
    {
      printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
      printf("Deseja realizar outra operacao? (s/n): ");
      scanf(" %c", &choice);
      getchar();
    }

    if (choice == 'n' || choice == 'N')
    {
      printf("Obrigado por usar a calculadora! Até a próxima.\n");
      return 0;
    }

    return 0;
  }
}
