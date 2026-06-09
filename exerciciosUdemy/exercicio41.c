#include <stdio.h>

int main()
{
    float curso[3][4], media, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Aluno %d, Prova %d: ", i + 1, j + 1);
            scanf("%f", &curso[i][j]);

            soma += curso[i][j];
        }
        media = soma / 4;
        printf("Media do aludo %d: %.2f\n", i + 1, media);
    }

    return 0;
}