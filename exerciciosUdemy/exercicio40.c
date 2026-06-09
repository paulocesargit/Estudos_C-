#include <stdio.h>

int main()
{
    int vendas[2][3], total = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Agencia %d, Dia %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);

            total += vendas[i][j];
        }
    }

    printf("Total de vendas arrecadadas:R$ %d", total);

    return 0;
}