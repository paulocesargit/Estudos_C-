// Desenvolva um programa que peça um número N e calcule a soma dos números pares de 1 até N.

#include <stdio.h>

int main()
{
    int num, soma = 0, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        i++;
    }

    printf("A soma dos numeros pares e: %d", soma);

    return 0;
}
