#include <stdio.h>

int main()
{

    int numero1, numero2, numero3, maior = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    maior = numero1;

    if (numero2 > maior)
    {
        maior = numero2;
    }

    if (numero3 > maior)
    {
        maior = numero3;
    }

    printf("O maior numero e %d\n", maior);

    return 0;
}