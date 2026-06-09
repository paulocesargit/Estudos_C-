#include <stdio.h>

int dobro(int numero)
{
    return numero * 2;
}

int main()
{
    int numero = 5;

    printf("%d", dobro(numero));

    return 0;
}