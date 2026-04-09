#include <stdio.h>

int main()
{
    int i, maior, menor, numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (i = 2; i <= 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}