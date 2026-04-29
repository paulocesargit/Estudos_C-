/* Crie um vetor de 10 posições, para armazenar a média de 10 alunos. Seu programa, em seguida, deve ir em cada uma das notas e verificar
 se o aluno foi aprovado (nota maior que 7), foi reprovado (nota menor que 5) ou vai ficar pra recuperação (nota entre 5 e 7).*/

#include <stdio.h>

int main()
{
    const int alunos = 10;
    const int provas = 3;

    float notas[alunos][provas];
    float media;

    for (int i = 0; i < alunos; i++)
    {
        float soma = 0;

        printf("\nAluno %d\n", i + 1);

        for (int j = 0; j < provas; j++)
        {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma = soma + notas[i][j];
        }

        media = soma / provas;

        if (media >= 7)
        {
            printf("Media: %.2f - Aprovado\n", media);
        }
        else if (media < 5)
        {
            printf("Media: %.2f - Reprovado\n", media);
        }
        else
        {
            printf("Media: %.2f - Recuperacao\n", media);
        }
    }

    return 0;
}