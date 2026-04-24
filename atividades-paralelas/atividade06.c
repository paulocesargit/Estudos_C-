// Faça um programa que calcule o fatorial de um número informado pelo usuário usando while.

#include <stdio.h>

int main()
{

    int num, fatorial = 1, i = 1;

    printf("Digite um numero para saber o fatorial: ");
    scanf("%d", &num);

    while (i <= num)
    {
        fatorial = fatorial * i;
        i++;
    }

    printf("O fatorial de %d = %d", num, fatorial);

    return 0;
}