// 1. Encontrar o maior elemento e sua posição

#include <stdio.h>

int main()
{
    int n[5];
    int maior, posicao;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    maior = n[0];
    posicao = 0;

    for (int i = 0; i < 5; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
            posicao = i + 1;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}