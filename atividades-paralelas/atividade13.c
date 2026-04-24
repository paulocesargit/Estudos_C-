// Faça um programa que leia vários números e conte quantos são ímpares (até digitar 0).

#include <stdio.h>

int main()
{

    int num, impares = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num != 0 && num % 2 == 1)
        {
            impares++;
        }

    } while (num != 0);

    printf("%d numeros impares no total\n", impares);

    return 0;
}