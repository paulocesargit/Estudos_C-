#include <stdio.h>

int main()
{

  int numero, soma = 0;
  int i;

  for (i = 0; i <= 4; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    soma = soma + numero;
  }
  printf("A soma total e: %d\n", soma);

  return 0;
}