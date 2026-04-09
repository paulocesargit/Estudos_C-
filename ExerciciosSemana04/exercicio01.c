#include <stdio.h>

int main()
{

    int numero, maior = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
            printf("O maior numero e %d", maior);
        }

    } while (numero != 0);

    return 0;
}