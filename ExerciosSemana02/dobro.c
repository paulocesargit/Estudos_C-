#include <stdio.h>

int main()
{

    int numero, dobro, triplo;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    triplo = numero * 3;

    printf("O dobro do numero e:  %d\n", dobro);
    printf("O triplo do numero e: %d\n", triplo);

    return 0;
}