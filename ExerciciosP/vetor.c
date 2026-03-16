#include <stdio.h>

int main()
{

  int numeros[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
  }

  printf("Numeros digitados: \n");

  for (i = 0; i < 5; i++)
  {
    printf("%d\n", numeros[i]);
  }

  return 0;
}