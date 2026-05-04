#include <stdio.h>

int main()
{
    int i, v[20], maior, menor;

    maior = 0;
    menor = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Digite 20 numeros (1 por vez): ");
        scanf("%d", &v[i]);

        if (v[i] > v[maior])
        {
            maior = i;
        }

        if (v[i] < v[menor])
        {
            menor = i;
        }
    }

    printf("O maior numero digitado: %d\n", v[maior]);
    printf("O menor numero digitado: %d\n", v[menor]);

    return 0;
}