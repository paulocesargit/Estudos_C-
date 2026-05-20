#include <stdio.h>

int main()
{

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            int valor;
            if (i > 1 && j == 1)
            {
                valor = num + i;
                printf("%3d", valor);
            }
            else if (i > 1)
            {
                printf("%3d", valor + j - 1);
            }
            else
            {
                printf("%3d", num + j);
            }
        }
        printf("\n");
    }

    return 0;
}
