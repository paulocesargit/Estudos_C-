#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("o numero antecessor e: %d\n", numero - 1);
    printf("o numero sucessor e: %d\n", numero + 1);

    return 0;
}