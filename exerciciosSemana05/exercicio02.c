//  Faça um programa que leia um número e exiba a tabuada dele (de 1 a 10) usando while.

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