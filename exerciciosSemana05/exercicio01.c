//  Escreva um programa que imprima os números de 1 a 10 usando while.

#include <stdio.h>

int main()
{
    int num = 0;

    while (num < 10)
    {
        num = num + 1;
        printf(" %d\n", num);
    }

    return 0;
}