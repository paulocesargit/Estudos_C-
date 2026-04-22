#include <stdio.h>

int main()
{
    int numero = 0, i, result = 0;

    printf("Digite um numero para saber a sua tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        result = numero * i;
        printf("Tabuada %d x %d = %d\n", numero, i, result);
    }

    return 0;
}