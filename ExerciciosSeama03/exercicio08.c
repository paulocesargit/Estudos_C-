#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 50 && numero >= 10)
    {
        printf("O numero esta entre 10 e 50");
    }
    else
    {
        printf("O numero nao esta entre 10 ou 50");
    }

    return 0;
}