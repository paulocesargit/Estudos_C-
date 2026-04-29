// Faça um programa que simule um caixa eletrônico: o usuário informa um valor e o programa mostra quantas notas de 100, 50, 20, 10, 5 e 1 serão necessárias.

#include <stdio.h>

int main()
{
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    int n100, n50, n20, n10, n5, n1;

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n1 = valor / 1;

    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Notas de 1: %d\n", n1);

    return 0;
}