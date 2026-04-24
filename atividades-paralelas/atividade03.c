// Crie um programa que leia números até o usuário digitar 0 e mostre o maior número informado.

#include <stdio.h>

int main()
{
    int num, maior = 0;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }

    } while (num != 0);

    printf("O maior numero que voce digitou foi %d", maior);

    return 0;
}