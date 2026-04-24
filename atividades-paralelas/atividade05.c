// Faça um programa que leia um número inteiro positivo N e mostre todos os números de 1 até N, mas:
// Se o número for par, mostre: "Par: X"
// Se for ímpar, mostre: "Ímpar: X"

#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            printf("Par: %d\n", i);
        }
        else
        {
            printf("Impar: %d\n", i);
        }
    }

    return 0;
}