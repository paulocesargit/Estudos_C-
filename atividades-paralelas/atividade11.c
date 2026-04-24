// Escreva um programa que imprima a sequência de Fibonacci até o 10º termo.

#include <stdio.h>

int main()
{
    int fibonacci, num1 = 0, num = 1, i;

    printf("%d\n", num1);

    for (i = 1; i < 10; i++)
    {
        fibonacci = num1 + num;
        printf("%d\n", fibonacci);
        num1 = num;
        num = fibonacci;
    }

    return 0;
}