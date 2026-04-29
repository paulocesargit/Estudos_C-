// Escreva um programa que leia 5 notas de um aluno e calcule a média, mostrando se foi aprovado (média ≥ 7).

#include <stdio.h>

int main()
{
    float notas[5] = {0}, soma = 0, media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite as notas: ");
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / 5;

    if (media >= 7.0)
    {
        printf("Aluno Aprovado! %.2f", media);
    }
    else
    {
        printf("Aluno Reprovado! ");
    }

    return 0;
}