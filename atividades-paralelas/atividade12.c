// Crie um programa que leia um número e verifique se ele é primo.

#include <stdio.h>

int main()
{
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) // números menores ou iguais a 1 NÃO são primos
    {
        primo = 0;
    }

    for (i = 2; i < num; i++) // testa todos os números de 2 até num
    {
        if (num % i == 0) // verifica se o resto da divisão é 0 (ou seja, divisão exata)
        {
            primo = 0; // encontrou um divisor → não é primo
        }
    }

    if (primo == 1) // se ainda estiver como 1
    {
        printf("Eh primo\n"); // então é primo
    }
    else
    {
        printf("Nao eh primo\n"); // senão, não é primo
    }

    return 0;
}