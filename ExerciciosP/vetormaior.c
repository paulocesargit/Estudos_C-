#include <stdio.h>

int main()
{

  int i, maior, numeros[10];

  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
  }

  maior = numeros[0];

  for (i = 0; i < 5; i++)
  {
    if (numeros[i] > maior)
    {
      maior = numeros[i];
    }
  }

  printf("O maior numero e %d\n", maior);
  return 0;
}