#include <stdio.h>

int main()
{

  char nome[15];
  float nota1, nota2, media;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("\nAluno: %s\n", nome);
  printf("Media: %.1f\n", media);

  if (media >= 6)
  {
    printf("Status: Aprovado\n");
  }
  else if (media >= 5)
  {
    printf("Status: Recuperacao\n");
  }
  else
  {
    printf("Status: Reprovado\n");
  }

  return 0;
}