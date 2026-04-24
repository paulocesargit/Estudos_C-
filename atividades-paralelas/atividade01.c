// Escreva um programa que leia 10 números e mostre o maior valor digitado.

#include <stdio.h>

int main()
{
    int num, maior = 0, i = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }
        i++;

    } while (i <= 10);

    printf("O maior numero e: %d", maior);

    return 0;
}