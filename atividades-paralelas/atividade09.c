// Faça um programa que leia 5 números e mostre a soma apenas dos números pares.

#include <stdio.h>

int main()
{

    int num, i;
    float soma = 0;

    printf("Digite 5 numeros: ");
    scanf("%d", &num);

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            soma = soma + num;
        }
    }

    printf("Soma de todos os  numeros  pares  digitados %.1f", soma);

    return 0;
}