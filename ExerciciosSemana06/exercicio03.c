#include <stdio.h>

int main()
{
  int i;
  int vetor1[20], vetor2[20], resultado[20];

  for (i = 0; i < 20; i++)
  {
    printf("Digite um numero para o vetor 1: ");
    scanf("%d", &vetor1[i]);

    printf("Digite um numero para o vetor 2: ");
    scanf("%d", &vetor2[i]);

    resultado[i] = vetor1[i] * vetor2[i];
  }

  for (i = 0; i < 20; i++)
  {
    printf("Resultado[%d]: %d\n", i, resultado[i]);
  }

  return 0;
}