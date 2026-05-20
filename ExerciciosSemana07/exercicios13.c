#include <stdio.h>

int main()
{

    int i, j, incremento, valor;

    for (i = 1; i <= 4; i++)
    {
        valor = i;
        incremento = i;

        for (j = 1; j <= 4; j++)
        {
            printf("%3d", valor);
            valor += incremento;
            incremento++;
        }
        printf("\n");
    }

    return 0;
}