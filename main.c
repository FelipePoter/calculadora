#include <stdio.h>
#include <locale.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define setlocale()                   \
  {                                   \
    setlocale(LC_ALL, "pt_BR.UTF-8"); \
  }

void header()
{
  printf(CYAN BOLD);
  printf("┌───────────────────────────────────────────┐\n");
  printf("│                CALCULADORA                │\n");
  printf("├───────────────────────────────────────────┤\n");
  printf("│        Uma calculadora de terminal.       │\n");
  printf("└───────────────────────────────────────────┘\n\n");
  printf(RESET);
}

void menu()
{
  printf(BOLD BLUE);
  printf("╔══════════════════════════════════════╗\n");
  printf("║           SELECIONE UMA OPÇÃO        ║\n");
  printf("╠══════════════════════════════════════╣\n");
  printf("║  [1]  Adição                         ║\n");
  printf("║  [2]  Subtração                      ║\n");
  printf("║  [3]  Multiplicação                  ║\n");
  printf("║  [4]  Divisão                        ║\n");
  printf("║  [5]  Sair                           ║\n");
  printf("╚══════════════════════════════════════╝\n");
  printf(RESET);
  printf("Opção: ");
}

int main()
{
  setlocale();
  char choice = 's';
  float number1, number2, result;
  int option;

  while (choice == 's' || choice == 'S')
  {
    header();
    menu();

    while (scanf("%d", &option) != 1 || option < 1 || option > 5)
    {
      while (getchar() != '\n')
        ;
      printf(RED "Entrada inválida. Digite um número entre 1 e 5.\n" RESET);
      printf("Opção: ");
    }

    if (option == 5)
    {
      printf(GREEN "\nObrigado por usar a calculadora! Até a próxima.\n" RESET);
      return 0;
    }

    printf("\n------------------------------------------\n");
    printf("> Digite o primeiro número: ");
    scanf("%f", &number1);
    printf("> Digite o segundo número: ");
    scanf("%f", &number2);
    printf("------------------------------------------\n");

    if (option == 1)
    {
      result = number1 + number2;
      printf(GREEN "Resultado: %.2f + %.2f = %.2f\n" RESET, number1, number2, result);
    }
    else if (option == 2)
    {
      result = number1 - number2;
      printf(GREEN "Resultado: %.2f - %.2f = %.2f\n" RESET, number1, number2, result);
    }
    else if (option == 3)
    {
      result = number1 * number2;
      printf(GREEN "Resultado: %.2f * %.2f = %.2f\n" RESET, number1, number2, result);
    }
    else if (option == 4)
    {
      if (number2 == 0)
      {
        printf(RED "Erro: divisão por zero não é permitida.\n" RESET);
      }
      else
      {
        result = number1 / number2;
        printf(GREEN "Resultado: %.2f / %.2f = %.2f\n" RESET, number1, number2, result);
      }
    }

    printf("\nDeseja realizar outra operação? (s/n): ");
    scanf(" %c", &choice);

    while (choice != 's' && choice != 'S' && choice != 'n' && choice != 'N')
    {
      printf(RED "Resposta inválida. Digite 's' para sim ou 'n' para não.\n" RESET);
      printf("Deseja realizar outra operação? (s/n): ");
      scanf(" %c", &choice);
    }

    if (choice == 'n' || choice == 'N')
    {
      printf(GREEN "\nObrigado por usar a calculadora! Até a próxima.\n" RESET);
    }

    printf("\n\n");
  }

  return 0;
}
