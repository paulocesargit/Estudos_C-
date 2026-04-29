#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("O numero 1 e maior");
    }
    else if (numero2 > numero3)
    {
        printf("O numero 2 e o maior");
    }
    else
    {
        printf("O numero 3 e o maior");
    }

    return 0;
}