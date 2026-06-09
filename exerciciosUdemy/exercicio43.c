#include <stdio.h>

int main()
{
    int matriz[3][2], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz original\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%2d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("Matriz Transposta\n ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%2d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}