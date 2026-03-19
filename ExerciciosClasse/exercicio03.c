#include <stdio.h>

int main()
{

    int i, numero, cubo = 1;

    printf("Digite um numero:");
    scanf("%d", &numero);

    for (i = 0; i <= 2; i++)
    {
        cubo = cubo * numero;
    }

    printf("o cubo de %d e %d", numero, cubo);

    return 0;
}