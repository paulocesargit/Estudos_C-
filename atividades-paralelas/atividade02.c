// Faça um programa que leia 10 números e conte quantos são positivos.

#include <stdio.h>

int main()
{
    int num, i = 1, positivos = 0;

    do
    {
        printf("Digite 10 numeros! ");
        scanf("%d", &num);

        if (num > 0)
        {
            positivos = positivos + 1;
        }

        i++;
    } while (i <= 10);

    printf("Os numeros positivos sao: %d", positivos);

    return 0;
}