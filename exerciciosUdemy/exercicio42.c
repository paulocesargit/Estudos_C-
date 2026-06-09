#include <stdio.h>

int main()
{
    int v[4][4], soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Linha %d Coluna %d Digite os numeros: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);

            if (i == j)
            {
                soma += v[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d", soma);

    return 0;
}