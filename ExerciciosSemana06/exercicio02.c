#include <stdio.h>

int main()
{

    int i, numeros[10], soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digte 10 numeros: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma dos numeros: %d", soma);

    return 0;
}