// Desenvolva um programa que peça 10 números e informe quantos são maiores que 50.

#include <stdio.h>

int main()
{

    int numero = 0, maiores = 0, count = 1;

    while (count <= 10)
    {
        printf("Digite 10 numeros: ");
        scanf("%d", &numero);

        if (numero > 50)
        {
            maiores++;
        }
        count++;
    }

    printf("Numeros digitados maiores que 50: %d", maiores);

    return 0;
}