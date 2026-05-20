#include <stdio.h>

int main()
{
    int vitorias, empates, derrotas, pontos;

    printf("Digite as vitorias: ");
    scanf("%d", &vitorias);

    printf("Digite os empates: ");
    scanf("%d", &empates);

    printf("Digite as derrotas: ");
    scanf("%d", &derrotas);

    pontos = (vitorias * 3) + empates;

    printf("Total de pontos: %d", pontos);
}