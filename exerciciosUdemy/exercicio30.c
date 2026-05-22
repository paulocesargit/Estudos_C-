#include <stdio.h>

float avaliacao(float nota)
{
    float soma = 0, media;
    for (int i = 0; i < 3; i++)
    {
        soma += nota;
    }

    media = soma / 3;

    if (media >= 9)
    {
        printf("Exercelente Media!!\n");
    }
    else if (media >= 7 && media < 9)
    {
        printf("Bom!\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Regular\n");
    }
    else
    {
        printf("Reprovado!\n");
    }
    return media;
}

int main()
{
    char jogador[20];
    float nota;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do Jogador %d: \n", i + 1);
        scanf("%s", jogador);

        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota %d\n", j + 1);
            scanf("%f", &nota);
        }

        printf("O jogador %s esta ", jogador);
        avaliacao(nota);
    }

    return 0;
}