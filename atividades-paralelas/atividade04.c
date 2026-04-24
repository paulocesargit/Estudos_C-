// Desenvolva um programa que leia um número N e imprima todos os números de N até 1.

#include <stdio.h>

int main()
{
    int i, numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = numero; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}