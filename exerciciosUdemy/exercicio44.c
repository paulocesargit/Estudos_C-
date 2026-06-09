#include <stdio.h>

int main()
{
    int matriz[4][4];
    int identidade = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            if (i == j)
            {
                if (matriz[i][j] != 1)
                {
                    identidade = 0;
                }
            }
            else
            {
                if (matriz[i][j] != 0)
                {
                    identidade = 0;
                }
            }
        }
    }

    if (identidade == 1)
    {
        printf("\nMatriz identidade? SIM\n\n");
    }
    else
    {
        printf("\nMatriz identidade? NAO\n\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}