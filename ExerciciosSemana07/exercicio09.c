#include <stdio.h>

int main()
{
    int v[5], qtdP = 0, qtdI = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("\nPares: ");
    for (int i = 0; i < 5; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d ", v[i]);
            qtdP++;
        }
    }

    printf("\nImpares: ");
    for (int i = 0; i < 5; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("%d ", v[i]);
            qtdI++;
        }
    }

    printf("\nQuantidade de pares: %d", qtdP);
    printf("\nQuantidade de impares: %d\n", qtdI);

    return 0;
}