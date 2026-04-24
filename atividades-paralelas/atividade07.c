// Escreva um programa que mostre todos os números entre 1 e 100 que são múltiplos de 5.

#include <stdio.h>

int main()
{

    int i;

    printf("Todos os multiplos de 5 entre 1 e 100 sao:\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}